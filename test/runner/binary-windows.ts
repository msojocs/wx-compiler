import { spawn } from "child_process";
import path from "path";
import * as fs from 'fs'


const wcsc = (args: string[], projectPath: string): Promise<string> => {
    if(!fs.existsSync(projectPath)){
        throw new Error('projectPath not exists.')
    }
    const wine = spawn(
        path.resolve(__dirname, "../wine/wcsc.exe"),
        args,
        {
            cwd: projectPath,
        }
    );
    const spwanData: any[] = [],
        errData: any[] = [];
    wine.stdout.on("data", (e) => {
        spwanData.push(e);
    });
    wine.stderr.on("data", (e) => {
        errData.push(e);
    });
    return new Promise((resolve, reject) => {
        wine.on("close", (n) => {
            // console.log("wine n: ", n);
            if (0 === n) {
                let result = Buffer.concat(spwanData).toString();
                // result = JSON.parse(result);
                resolve(result);
            } else {
                process.stderr.write(
                    "wine error:" + 
                    Buffer.concat(errData).toString()
                );
                // process.stderr.write(Buffer.concat(spwanData).toString());
                reject(n);
            }
        });
    });
};
const wcc = (args: string[], projectPath: string): Promise<string> => {
    if(!fs.existsSync(projectPath)){
        throw new Error('projectPath not exists.')
    }
    const wine = spawn(
        path.resolve(__dirname, "../wine/wcc.exe"),
        args,
        {
            cwd: projectPath,
            env: process.env,
        }
    );
    const spwanData: any[] = [],
        errData: any[] = [];
    wine.stdout.on("data", (e) => {
        spwanData.push(e);
    });
    wine.stderr.on("data", (e) => {
        errData.push(e);
    });
    return new Promise((resolve, reject) => {
        wine.on("close", (n) => {
            // console.log("wine n: ", n);
            const errMsg = Buffer.concat(errData).toString()
            if (0 === n || errMsg.length == 0) {
                let result = Buffer.concat(spwanData).toString();
                // result = JSON.parse(result);
                resolve(result);
            } else {
                process.stderr.write(
                    "wine error:" + 
                    Buffer.concat(errData).toString()
                );
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