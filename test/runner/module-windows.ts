import { execFile } from 'child_process';
import * as fs from 'fs';
import path from 'path';
import { CompilerResult } from './types';

const launcher = path.resolve(__dirname, '../../tools/run-windows-electron.js');
const compiler = path.resolve(__dirname, './addon/win/main.js');
const marker = '---------------result------------------\n';

const compile = async (type: 'wcc' | 'wcsc', optionsPath: string): Promise<CompilerResult> => {
    optionsPath = path.resolve(optionsPath);
    const options = JSON.parse(fs.readFileSync(optionsPath, 'utf8'));
    return new Promise((resolve, reject) => {
        execFile(process.execPath, [launcher, compiler, type, optionsPath], {
            timeout: 18000,
            maxBuffer: 64 * 1024 * 1024,
            encoding: 'utf8',
        }, (error, stdout, stderr) => {
            if (error) {
                resolve({ success: false, type: 'string', data: stderr || error.message });
                return;
            }
            const index = stdout.indexOf(marker);
            if (index === -1) {
                reject(new Error(`Windows compiler returned no result: ${stderr || stdout}`));
                return;
            }
            const data = stdout.slice(index + marker.length);
            try {
                const object = !!(options.lazyloadConfig || options.lazyload);
                resolve({ success: true, type: object ? 'object' : 'string', data: object ? JSON.parse(data) : data });
            } catch (error) {
                reject(error);
            }
        });
    });
};

export default {
    wcsc: (optionsPath: string) => compile('wcsc', optionsPath),
    wcc: (optionsPath: string) => compile('wcc', optionsPath),
};
