import * as fs from 'fs'
import { request } from "http";
import { CompilerOptions } from './types';
import path from 'path'

// 预先启动wine focker环境，再使用HTTP协议，最后销毁容器
const HTTP = {
    POST: (type: 'wcc' | 'wcsc', compilerOptions: CompilerOptions): Promise<string | Record<string, any>>  => {
        return new Promise((resolve, reject) => {

            compilerOptions.cwd = compilerOptions.cwd.replace(path.resolve(__dirname, '../../'), '/wrokspace')
            const postData = JSON.stringify(compilerOptions);

            const options = {
                hostname: 'localhost',
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
                    if (compilerOptions.lazyloadConfig)
                    {
                        resolve(JSON.parse(ret))
                    }
                    else
                    {
                        resolve(ret)
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

const wcscNative = async (optionsPath: string) => {
    const options = JSON.parse(fs.readFileSync(optionsPath).toString())
    return await HTTP.POST('wcsc', options)
};
const wccNative = async (optionsPath: string) => {
    const options = JSON.parse(fs.readFileSync(optionsPath).toString())
    return await HTTP.POST('wcc', options)
};

export default {
    wcsc: wcscNative,
    wcc: wccNative
}