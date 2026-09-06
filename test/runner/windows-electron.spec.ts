import { afterAll, beforeAll, describe, it } from 'vitest';
import assert from 'assert/strict';
import { spawnSync } from 'child_process';
import * as fs from 'fs';
import os from 'os';
import path from 'path';
import windows from './module-windows';

const launcher = path.resolve(__dirname, '../../tools/run-windows-electron.js');
const compiler = path.resolve(__dirname, 'addon/win/main.js');

describe('Windows Electron compiler runtime', () => {
    let directory: string;

    beforeAll(() => {
        directory = fs.mkdtempSync(path.join(os.tmpdir(), 'wx compiler \u6d4b\u8bd5 '));
    });

    afterAll(() => {
        fs.rmSync(directory, { recursive: true, force: true });
    });

    function run(args: string[]) {
        const env: NodeJS.ProcessEnv = { ...process.env, ELECTRON_RUN_AS_NODE: '0', TMPDIR: directory };
        delete env.DISPLAY;
        const result = spawnSync(process.execPath, [launcher, ...args], {
            cwd: directory,
            env,
            encoding: 'utf8',
            timeout: 20000,
            maxBuffer: 8 * 1024 * 1024,
        });
        assert.ifError(result.error);
        assert.equal(result.signal, null, result.stderr);
        assert.ok(!fs.readdirSync(directory).some(name => name.startsWith('wx-windows-electron-')));
        return result;
    }

    it('runs the pinned Windows runtime without a display and preserves arguments', () => {
        const result = run(['-e', 'console.log(JSON.stringify([process.platform, process.versions.electron, process.argv[1]]))', 'path with spaces']);
        assert.equal(result.status, 0, result.stderr);
        assert.deepEqual(JSON.parse(result.stdout), ['win32', require('electron/package.json').version, 'path with spaces']);
    });

    it('preserves large output, stderr and exit status', () => {
        const result = run(['-e', 'process.stdout.write("x".repeat(2 * 1024 * 1024)); console.error("compiler diagnostic"); process.exitCode = 7']);
        assert.equal(result.status, 7);
        assert.equal(result.stdout, 'x'.repeat(2 * 1024 * 1024));
        assert.equal(result.stderr.trim(), 'compiler diagnostic');
    });

    it('reports invalid arguments and unreadable options', () => {
        for (const args of [[], ['unknown', 'options.json'], ['wcc', 'missing.json']]) {
            const result = run([compiler, ...args]);
            assert.equal(result.status, 1);
            assert.ok(result.stderr.trim());
            assert.ok(!result.stdout.includes('---------------result------------------'));
        }
    });

    for (const type of ['wcc', 'wcsc'] as const) {
        for (const lazyload of [false, true]) {
            it(`compiles ${type}, lazyload=${lazyload}, with files outside the repository`, async () => {
                const filename = type === 'wcc' ? './index.wxml' : './index.wxss';
                fs.writeFileSync(path.join(directory, filename), type === 'wcc' ? '<view>{{message}}</view>' : 'view { width: 10rpx; }');
                const optionsPath = path.join(directory, `${type} ${lazyload}.json`);
                const outputPath = path.join(directory, `${type} ${lazyload}.out`);
                fs.writeFileSync(optionsPath, JSON.stringify({
                    cwd: directory,
                    output: outputPath,
                    files: [filename],
                    contents: [],
                    pageCount: 1,
                    wxmlCompileConfigSplit: '>_<2413',
                    ...(type === 'wcc' ? { lazyloadConfig: lazyload ? 'index' : '' } : { lazyload }),
                }));
                const result = await windows[type](optionsPath);
                assert.equal(result.success, true, result.data);
                assert.equal(result.type, lazyload ? 'object' : 'string');
                if (type === 'wcc' && !lazyload) {
                    assert.match(result.data, /\$gwx/);
                    assert.equal(fs.readFileSync(outputPath, 'utf8'), result.data);
                } else {
                    const data = lazyload ? result.data : JSON.parse(result.data);
                    assert.equal(typeof data, 'object');
                    assert.ok(Object.keys(data).length > 0);
                    assert.deepEqual(JSON.parse(fs.readFileSync(outputPath, 'utf8')), data);
                }
            });
        }
    }

    it('returns native compilation errors through the comparison runner', async () => {
        const optionsPath = path.join(directory, 'broken wxml.json');
        fs.writeFileSync(optionsPath, JSON.stringify({
            cwd: directory,
            files: ['./index.wxml'],
            contents: ['<view>'],
        }));
        const result = await windows.wcc(optionsPath);
        assert.equal(result.success, false);
        assert.equal(result.type, 'string');
        assert.match(result.data, /Error:/);
    });
});
