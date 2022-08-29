
const path = require("path");
const fs = require("fs");
const { spawn } = require("child_process");

const wcsc = (args, projectPath) => {
    const node_exec = spawn(
        path.resolve(__dirname, "../../nodejs/wcsc"),
        args,
        {
            cwd: projectPath,
            env: {
                // WX_DEBUG_COMPILER_OUTPUT: path.resolve(__dirname, '' + id),
            },
            // stdio: 'inherit'
        }
    );
    const spwanData = [],
        errData = [];
    node_exec.stdout.on("data", (e) => {
        spwanData.push(e);
        // console.log(e.toString())
    });
    node_exec.stderr.on("data", (e) => {
        errData.push(e);
        // console.log(e.toString())
    });
    return new Promise((resolve, reject) => {
        node_exec.on("close", (n) => {
            if (0 === n) {
                let result = Buffer.concat(spwanData).toString();
                result = JSON.parse(result);
                resolve(result);
            } else {
                // process.stderr.write(Buffer.concat(errData).toString());
                // process.stderr.write(Buffer.concat(spwanData).toString());
                reject(n);
            }
        });
    });
};
const wcc = (args, projectPath, id) => {
    const node_exec = spawn(
        path.resolve(__dirname, "../../nodejs/wcc"),
        args,
        {
            cwd: projectPath,
            env: {
                // WX_DEBUG_COMPILER_OUTPUT: path.resolve(__dirname, '' + id),
            },
            // stdio: 'inherit'
        }
    );
    const spwanData = [],
        errData = [];
    node_exec.stdout.on("data", (e) => {
        spwanData.push(e);
        // console.log(e.toString())
    });
    node_exec.stderr.on("data", (e) => {
        errData.push(e);
        // console.log(e.toString())
    });
    return new Promise((resolve, reject) => {
        node_exec.on("close", (n) => {
            // console.log("node n: ", n);
            if (0 === n) {
                let result = Buffer.concat(spwanData).toString();
                // require('fs').writeFileSync('/mnt/disk2/wechat-web-devtools-linux/tmp/llw2.json', result)
                // process.stdout.write(result);
                result = JSON.parse(result);
                resolve(result);
            } else {
                process.stderr.write(Buffer.concat(errData).toString());
                // process.stderr.write(Buffer.concat(spwanData).toString());
                reject(n);
            }
        });
    });
};

export {
    wcsc,
    wcc
}