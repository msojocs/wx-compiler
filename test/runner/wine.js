
const path = require("path");
const fs = require("fs");
const { spawn } = require("child_process");


const wcsc = (args, projectPath) => {
    const wine = spawn(
        path.resolve(__dirname, "../../wine/wcsc.exe"),
        args,
        {
            cwd: projectPath,
        }
    );
    const spwanData = [],
        errData = [];
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
                result = JSON.parse(result);
                resolve(result);
            } else {
                process.stderr.write(
                    "wine error:",
                    Buffer.concat(errData).toString()
                );
                // process.stderr.write(Buffer.concat(spwanData).toString());
                reject(n);
            }
        });
    });
};
const wcc = (args, projectPath) => {
    const wine = spawn(
        path.resolve(__dirname, "../../wine/wcc.exe"),
        args,
        {
            cwd: projectPath,
        }
    );
    const spwanData = [],
        errData = [];
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
                result = JSON.parse(result);
                resolve(result);
            } else {
                process.stderr.write(
                    "wine error:",
                    Buffer.concat(errData).toString()
                );
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