import * as fs from 'fs'
import { request } from "http";
import { CompilerOptions, CompilerResult, RequestResult } from './types';
import path from 'path'
import { execFileSync } from 'child_process';

// 预先启动wine focker环境，再使用HTTP协议，最后销毁容器
const HTTP = {
    POST: (type: 'wcc' | 'wcsc', compilerOptions: CompilerOptions): Promise<RequestResult>  => {
        return new Promise((resolve, reject) => {

            compilerOptions.cwd = compilerOptions.cwd.replace(path.resolve(__dirname, '../../'), '/wrokspace')
            const postData = JSON.stringify(compilerOptions);

            const options = {
                hostname: '127.0.0.1',
                port: 8083,
                path: `/${type}`,
                method: 'POST',
                headers: {
                    'Content-Type': 'application/json',
                    'Content-Length': Buffer.byteLength(postData),
                },
            };
    
                
            const req = request(options, (res) => {
                // console.log(`STATUS: ${res.statusCode}`);
                // console.log(`HEADERS: ${JSON.stringify(res.headers)}`);
                res.setEncoding('utf8');
                let ret = ""
                res.on('data', (chunk) => {
                    // console.log(`BODY: ${chunk}`);
                    ret += chunk
                });
                res.on('end', () => {
                    // console.log('No more data in response.');
                    if (res.statusCode != 200)
                    {
                        // console.log('response error:\n', ret)
                        resolve({
                            success: false,
                            data: ret
                        })
                    }
                    else
                    {
                        resolve({
                            success: true,
                            data: ret
                        })
                    }
                });
            });
    
            req.on('error', (e) => {
                console.error(`problem with request: ${e.message}`);
                reject(e)
            });
    
            // Write data to request body
            req.write(postData);
            req.end();
        })
    }
}

const wcscNative = async (optionsPath: string): Promise<CompilerResult> => {
    const options = JSON.parse(fs.readFileSync(optionsPath).toString())
    const result = await HTTP.POST('wcsc', options)
    const r: CompilerResult = {
        success: result.success,
        type: 'string',
        data: result.data
    }
    if (!result.success) return r;
    if (options.lazyloadConfig || options.lazyload)
    {
        r.type = 'object'
        r.data = JSON.parse(result.data)
    }
    return r
};
const wccNative = async (optionsPath: string): Promise<CompilerResult> => {
    const options = JSON.parse(fs.readFileSync(optionsPath).toString()) as CompilerOptions
    const result = await HTTP.POST('wcc', options)
    const r: CompilerResult = {
        success: result.success,
        type: 'string',
        data: result.data
    }
    if (!result.success) return r;
    if (options.lazyloadConfig || options.lazyload)
    {
        r.type = 'object'
        r.data = JSON.parse(result.data)
    }
    return r
};

export default {
    wcsc: wcscNative,
    wcc: wccNative,
    start: () => {
        execFileSync(path.resolve(__dirname, './nwjs/module-prepare.sh'), { stdio: 'inherit' })
    },
    close: () => {
        request('http://127.0.0.1:8083/close').end()
    }
}