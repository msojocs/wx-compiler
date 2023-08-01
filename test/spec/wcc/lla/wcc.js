
const path = require("path");
const fs = require("fs");
const { spawn } = require("child_process");


const wcc = (args, projectPath, outputPath = undefined) => {
    const node_exec = spawn(
        path.resolve(__dirname, "../../../nodejs/wcc"),
        args,
        {
            cwd: projectPath,
            env: {
                WX_DEBUG_COMPILER_OUTPUT: outputPath,
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
const test = async () => {
    const projectPath = path.resolve(
        __dirname,
        "../../examples/miniprogram-demo/miniprogram"
    );
    const args = [
        "-d",
        "--split",
        ">_<1989",
        "-xc",
        "12>_<1989./component/navigation-bar/navigation-bar.wxml>_<19891>_<1989mp-navigation-bar>_<1989./components/navigation-bar/index.wxml>_<19891>_<1989mp-navigation-bar>_<1989./components/page-scroll/index.wxml>_<19891>_<1989mp-navigation-bar>_<1989./miniprogram_npm/miniprogram-barrage/index.wxml>_<19890>_<1989./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxml>_<19890>_<1989./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxml>_<19890>_<1989./miniprogram_npm/wxml-to-canvas/index.wxml>_<19890>_<1989./page/API/index.wxml>_<19892>_<1989set-tab-bar>_<1989mp-navigation-bar>_<1989./page/API/components/set-tab-bar/set-tab-bar.wxml>_<19891>_<1989mp-navigation-bar>_<1989./page/cloud/index.wxml>_<19891>_<1989mp-navigation-bar>_<1989./page/component/index.wxml>_<19891>_<1989mp-navigation-bar>_<1989./page/extend/index.wxml>_<19891>_<1989mp-navigation-bar",
        "-lla",
        "./component/navigation-bar/navigation-bar>_<1989./components/navigation-bar/index>_<1989./components/page-scroll/index>_<1989./miniprogram_npm/miniprogram-barrage/index>_<1989./miniprogram_npm/miniprogram-recycle-view/recycle-item>_<1989./miniprogram_npm/miniprogram-recycle-view/recycle-view>_<1989./miniprogram_npm/wxml-to-canvas/index>_<1989./page/API/index>_<1989./page/API/components/set-tab-bar/set-tab-bar>_<1989./page/cloud/index>_<1989./page/component/index>_<1989./page/extend/index",
        "./common/foot.wxml",
        "./common/head.wxml",
        "./component/navigation-bar/navigation-bar.wxml",
        "./components/navigation-bar/index.wxml",
        "./components/page-scroll/index.wxml",
        "./miniprogram_npm/miniprogram-barrage/index.wxml",
        "./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxml",
        "./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxml",
        "./miniprogram_npm/wxml-to-canvas/index.wxml",
        "./page/API/index.wxml",
        "./page/API/components/set-tab-bar/set-tab-bar.wxml",
        "./page/cloud/index.wxml",
        "./page/common/foot.wxml",
        "./page/common/head.wxml",
        "./page/component/index.wxml",
        "./page/extend/index.wxml",
        "-gn",
        "$gwx",
    ];
    const storagePath = path.resolve(
        __dirname,
        `miniprogram-demo/tmp`
    );
    try {
        fs.mkdirSync(storagePath, { recursive: true });
    } catch (error) {}
    const n = JSON.parse(await wcc(args, projectPath, storagePath));
    // const w = JSON.parse(await wine.wcc(args, projectPath));
    // fs.writeFileSync(
    //     `${storagePath}/wine-output.json`,
    //     JSON.stringify(w, null, 4)
    // );
    fs.writeFileSync(
        `${storagePath}/node-output.json`,
        JSON.stringify(n, null, 4)
    );
};
test();
