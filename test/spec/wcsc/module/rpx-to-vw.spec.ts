import assert from 'assert/strict';
import * as fs from 'fs';
import os from 'os';
import path from 'path';
import vm from 'vm';
import { afterAll, beforeAll, describe, it } from 'vitest';
import linux from '../../../runner/module-linux';
import binary from '../../../runner/binary-linux';
import windows from '../../../runner/module-windows';

interface Stylesheet {
    common: string;
    page: string;
}

interface RuntimeOptions {
    flag?: unknown;
    width?: number;
    dpr?: number;
    ios?: boolean;
    dom?: boolean;
    transform?: (value: number, width?: number) => number;
}

function stylesheet(data: any, lazyload: boolean): Stylesheet {
    if (lazyload) return { common: data.common, page: data.pageWxss['./index.wxss'] };
    // Non-lazy compiler output uses JavaScript string escapes, including \xNN.
    const decode = (source: string) => vm.runInNewContext(`"${source}"`, {}, { timeout: 1000 });
    return { common: decode(data.comm), page: decode(data['./index.wxss']) };
}

function render(source: Stylesheet, options: RuntimeOptions = {}) {
    const writes: string[] = [];
    const nodes: { nodeValue: string }[] = [];
    const window = {
        screen: { width: options.width ?? 375, height: 667 },
        devicePixelRatio: options.dpr ?? 2,
        __convertRpxToVw__: options.flag,
        __transformRpx__: options.transform,
        __rpxRecalculatingFuncs__: [] as ((size: { width: number }) => void)[],
        __styleSheetManager2__: options.dom ? undefined : {
            addItem() {},
            setCss(_key: string, css: string) { writes.push(css); },
        },
    };
    const context = vm.createContext({
        window,
        navigator: { userAgent: options.ios ? 'iPhone' : 'Android' },
        document: {
            head: { appendChild() {} },
            createElement: () => ({
                setAttribute() {},
                childNodes: [] as { nodeValue: string }[],
                appendChild(node: { nodeValue: string }) {
                    this.childNodes.push(node);
                    nodes.push(node);
                },
            }),
            createTextNode: (css: string) => ({ nodeValue: css }),
        },
    });
    vm.runInContext(`${source.common}\n${source.page}();`, context, { timeout: 1000 });
    return {
        css: () => options.dom ? nodes[nodes.length - 1].nodeValue : writes[writes.length - 1],
        resize(width: number) {
            window.screen.width = width;
            for (const callback of window.__rpxRecalculatingFuncs__) callback({ width });
        },
        setFlag(flag: unknown) { window.__convertRpxToVw__ = flag; },
    };
}

describe('wcsc - __convertRpxToVw__', () => {
    let directory: string;

    beforeAll(() => {
        directory = fs.mkdtempSync(path.join(os.tmpdir(), 'wx-rpx-to-vw-'));
        fs.writeFileSync(path.join(directory, 'index.wxss'), '.test { width: 750rpx; height: 15rpx; margin: -15rpx; padding: 0rpx; border-width: 0.5rpx; left: 10px; }');
        fs.writeFileSync(path.join(directory, 'app.wxss'), '');
    });

    afterAll(() => fs.rmSync(directory, { recursive: true, force: true }));

    for (const lazyload of [false, true]) {
        describe(`lazyload=${lazyload}`, () => {
            let source: Stylesheet;
            let reference: Stylesheet;

            beforeAll(async () => {
                const optionsPath = path.join(directory, `options-${lazyload}.json`);
                fs.writeFileSync(optionsPath, JSON.stringify({
                    cwd: directory,
                    files: ['./index.wxss', './app.wxss'],
                    contents: [],
                    pageCount: 1,
                    lazyload,
                }));
                const actual = await linux.wcsc(optionsPath, directory);
                const expected = await windows.wcsc(optionsPath);
                assert.equal(actual.success, true, actual.data);
                assert.equal(expected.success, true, expected.data);
                source = stylesheet(lazyload ? actual.data : JSON.parse(actual.data), lazyload);
                reference = stylesheet(lazyload ? expected.data : JSON.parse(expected.data), lazyload);
            });

            it('matches the official Electron runtime and the command-line compiler', async () => {
                assert.deepEqual(source, reference);
                const args = ['-pc', '1', './index.wxss', './app.wxss', ...(lazyload ? ['-ll'] : [])];
                const output = await binary.wcsc(args, directory);
                const data = lazyload ? JSON.parse(output) : Object.fromEntries(
                    output.split('=').slice(0, -1).reduce<string[][]>((pairs, value, index) => {
                        if (index % 2 === 0) pairs.push([value]);
                        else pairs[pairs.length - 1].push(value);
                        return pairs;
                    }, []),
                );
                assert.deepEqual(source, stylesheet(data, lazyload));
            });

            it('preserves px conversion, rounding and resizing when the flag is falsy', () => {
                for (const flag of [undefined, false, 0, '']) {
                    const runtime = render(source, { flag });
                    assert.match(runtime.css(), /width:\s*375px/);
                    assert.match(runtime.css(), /height:\s*7px/);
                    assert.match(runtime.css(), /margin:\s*-8px/);
                    assert.match(runtime.css(), /padding:\s*0(?:px)?[;}\s]/);
                    assert.match(runtime.css(), /border-width:\s*1px/);
                    runtime.resize(750);
                    assert.match(runtime.css(), /width:\s*750px/);
                    assert.match(runtime.css(), /height:\s*15px/);
                }
                assert.match(render(source, { ios: true }).css(), /border-width:\s*0\.5px/);
                assert.match(render(source, { ios: true, dpr: 1 }).css(), /border-width:\s*1px/);
            });

            it('uses the runtime conversion hook for viewport units in both style injection paths', () => {
                for (const dom of [false, true]) {
                    const widths: (number | undefined)[] = [];
                    const transform = (value: number, width?: number) => {
                        widths.push(width);
                        return value / 7.5;
                    };
                    const runtime = render(source, { flag: true, transform, dom });
                    assert.match(runtime.css(), /width:\s*100vw/);
                    assert.match(runtime.css(), /height:\s*2vw/);
                    assert.match(runtime.css(), /margin:\s*-2vw/);
                    assert.match(runtime.css(), /left:\s*10px/);
                    assert.ok(widths.includes(undefined));
                    runtime.resize(750);
                    assert.match(runtime.css(), /width:\s*100vw/);
                    assert.ok(widths.includes(750));
                    assert.equal(runtime.css(), render(reference, { flag: true, transform, dom, width: 750 }).css());
                }
            });

            it('selects units dynamically while leaving the numeric conversion to transformRPX', () => {
                for (const flag of [true, 1, 'enabled']) {
                    const runtime = render(source, { flag });
                    assert.equal(runtime.css(), render(reference, { flag }).css());
                    assert.match(runtime.css(), /width:\s*375vw/);
                    runtime.setFlag(false);
                    runtime.resize(750);
                    assert.match(runtime.css(), /width:\s*750px/);
                }
            });
        });
    }
});
