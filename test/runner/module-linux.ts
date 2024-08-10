import { spawn } from "child_process";
import path from "path";
import * as fs from 'fs'
import { CompilerResult } from "./types";

const NW_VERSION = '0.55.0'

const wcscNative = (optionsPath: string, projectPath: string, outputPath: string | undefined = undefined): Promise<CompilerResult> => {

    const nodeExec = spawn(
        path.resolve(__dirname, `../../cache/nwjs-sdk-v${NW_VERSION}-linux-x64/nw`),
        [ path.resolve(__dirname, './nwjs/compiler.js'), 'wcsc', optionsPath ],
        {
            cwd: projectPath,
            env: {
                WX_DEBUG_COMPILER_OUTPUT: outputPath,
            },
            // stdio: 'inherit'
        }
    );
    const spwanData: any[] = [],
        errData: any[] = [];
    nodeExec.stdout.on("data", (e) => {
        spwanData.push(e);
        // console.log(e.toString())
    });
    nodeExec.stderr.on("data", (e) => {
        errData.push(e);
        // console.log(e.toString())
    });
    return new Promise((resolve, reject) => {
        nodeExec.on("close", (n) => {
            outputPath && require('fs').writeFileSync(`${outputPath}/linux_err.js`, Buffer.concat(errData).toString())
            
            if (0 === n) {
                let result = Buffer.concat(spwanData).toString();
                result = result.split('---------------result------------------\n')[1]
                const options = JSON.parse(fs.readFileSync(optionsPath).toString())
                const r: CompilerResult = {
                    success: true,
                    type: "string",
                    data: result
                }
                if (options.lazyloadConfig || options.lazyload)
                {
                    r.type = 'object'
                    r.data = JSON.parse(result);
                }
                resolve(r);
            } else {
                // process.stderr.write(Buffer.concat(errData).toString());
                // process.stderr.write(Buffer.concat(spwanData).toString());
                const err = Buffer.concat(errData).toString()
                process.stderr.write(err);
                const r: CompilerResult = {
                    success: false,
                    type: "string",
                    data: err
                }
                resolve(r)
            }
        });
    });
};
const wccNative = (optionsPath: string, outputPath: string | undefined = undefined): Promise<CompilerResult> => {

    const nodeExec = spawn(
        path.resolve(__dirname, `../../cache/nwjs-sdk-v${NW_VERSION}-linux-x64/nw`),
        [path.resolve(__dirname, './nwjs/compiler.js'), 'wcc', optionsPath],
        {
            env: {
                WX_DEBUG_COMPILER_OUTPUT: outputPath,
            },
            // stdio: 'inherit'
        }
    );
    const spwanData: any[] = [],
        errData: any[] = [];
    nodeExec.stdout.on("data", (e) => {
        spwanData.push(e);
        // console.log(e.toString())
    });
    nodeExec.stderr.on("data", (e) => {
        errData.push(e);
        // console.log(e.toString())
    });
    return new Promise((resolve, reject) => {
        nodeExec.on("close", (n) => {
            // console.log("node n: ", n);
            outputPath && require('fs').writeFileSync(`${outputPath}/linux_err.js`, Buffer.concat(errData).toString())
            if (0 === n && errData.length == 0) {
                let result = Buffer.concat(spwanData).toString();
                // process.stdout.write(result);
                const split = '---------------result------------------\n'
                if (result.includes(split))
                result = result.split(split)[1]
                
                const r: CompilerResult = {
                    success: true,
                    type: "string",
                    data: result
                }
                if (result?.[0] === '{')
                {
                    r.type = 'object'
                    r.data = JSON.parse(result);
                }
                resolve(r);
            } else {
                const err = Buffer.concat(errData).toString()
                // process.stderr.write(err);
                // process.stderr.write(Buffer.concat(spwanData).toString());
                const r: CompilerResult = {
                    success: false,
                    type: "string",
                    data: err
                }
                resolve(r);
            }
        });
    });
};

export default {
    wcsc: wcscNative,
    wcc: wccNative
}