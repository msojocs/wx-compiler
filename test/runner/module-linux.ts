import { spawn } from "child_process";
import path from "path";
import * as fs from 'fs'

const NW_VERSION = '0.55.0'

const wcscNative = (optionsPath: string, projectPath: string, outputPath: string | undefined = undefined): Promise<string> => {
    if(!fs.existsSync(projectPath))
    {
        throw new Error('projectPath not exists.')
    }
    const nodeExec = spawn(
        path.resolve(__dirname, `../../../cache/nwjs-sdk-v${NW_VERSION}-linux-x64/nw`),
        [ 'wcsc.js', optionsPath ],
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
                // result = JSON.parse(result);
                resolve(result);
            } else {
                // process.stderr.write(Buffer.concat(errData).toString());
                // process.stderr.write(Buffer.concat(spwanData).toString());
                reject(n);
            }
        });
    });
};
const wccNative = (optionsPath: string, projectPath: string, outputPath: string | undefined = undefined): Promise<string> => {
    if(!fs.existsSync(projectPath)){
        throw new Error('projectPath not exists.')
    }
    const nodeExec = spawn(
        path.resolve(__dirname, `../../../cache/nwjs-sdk-v${NW_VERSION}-linux-x64/nw`),
        ['wcc.js', optionsPath],
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
            // console.log("node n: ", n);
            outputPath && require('fs').writeFileSync(`${outputPath}/linux_err.js`, Buffer.concat(errData).toString())
            if (0 === n) {
                let result = Buffer.concat(spwanData).toString();
                // process.stdout.write(result);
                // result = JSON.parse(result);
                resolve(result);
            } else {
                process.stderr.write(Buffer.concat(errData).toString());
                // process.stderr.write(Buffer.concat(spwanData).toString());
                reject(n);
            }
        });
    });
};

export default {
    wcsc: wcscNative,
    wcc: wccNative
}