import { spawn } from "child_process";
import path from "path";
import * as fs from 'fs'

const wcsc = (args: string[], projectPath: string, outputPath: string | undefined = undefined): Promise<string> => {
    if(!fs.existsSync(projectPath)){
        throw new Error('projectPath not exists.')
    }
    const binaryExec = spawn(
        path.resolve(__dirname, "../../build/wcsc"),
        args,
        {
            cwd: projectPath,
            env: {
            },
            // stdio: 'inherit'
        }
    );
    const spwanData: any[] = [],
        errData: any[] = [];
    binaryExec.stdout.on("data", (e) => {
        spwanData.push(e);
        // console.log(e.toString())
    });
    binaryExec.stderr.on("data", (e) => {
        errData.push(e);
        // console.log(e.toString())
    });
    return new Promise((resolve, reject) => {
        binaryExec.on("close", (n) => {
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
const wcc = (args: string[], projectPath: string, outputPath: string | undefined = undefined): Promise<string> => {
    if(!fs.existsSync(projectPath)){
        throw new Error('projectPath not exists.')
    }
    const binaryExec = spawn(
        path.resolve(__dirname, "../../build/wcc"),
        args,
        {
            cwd: projectPath,
            env: {
            },
            // stdio: 'inherit'
        }
    );
    const spwanData: any[] = [],
        errData: any[] = [];
    binaryExec.stdout.on("data", (e) => {
        spwanData.push(e);
        // console.log(e.toString())
    });
    binaryExec.stderr.on("data", (e) => {
        errData.push(e);
        // console.log(e.toString())
    });
    return new Promise((resolve, reject) => {
        binaryExec.on("close", (n) => {
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
    wcsc,
    wcc
}