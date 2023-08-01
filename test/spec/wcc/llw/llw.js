#!/usr/bin/env node

const { spawn, spawnSync } = require("child_process");
const path = require("path");
const fs = require("fs");
const { exit } = require("process");

const samples = []
const sample2 = {
    projectPath: "/mnt/disk1/WeChatProjects/qs-wxapp/",
    args:[
    "-d",
    "--split",
    ">_<9912",
    "-cc",
    "1>_<9912./pages/index/index.wxml>_<99120",
    "-llw",
    "./pages/index/index",
    "./pages/index/index.wxml",
    "-gn",
    "$gwx",
]};
samples.push([sample2, 2])
const sample3 = {
    projectPath: "/mnt/disk1/WeChatProjects/miniprogram-demo/miniprogram/",
    args:[
    "-d",
    "--split",
    ">_<4685",
    "-cc",
    "9>_<4685./miniprogram_npm/miniprogram-barrage/index.wxml>_<46850>_<4685./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxml>_<46850>_<4685./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxml>_<46850>_<4685./miniprogram_npm/wxml-to-canvas/index.wxml>_<46850>_<4685./page/API/index.wxml>_<46851>_<4685set-tab-bar>_<4685./page/API/components/set-tab-bar/set-tab-bar.wxml>_<46850>_<4685./page/cloud/index.wxml>_<46850>_<4685./page/component/index.wxml>_<46850>_<4685./page/extend/index.wxml>_<46850",
    "-llw",
    "./miniprogram_npm/miniprogram-barrage/index>_<4685./miniprogram_npm/miniprogram-recycle-view/recycle-item>_<4685./miniprogram_npm/miniprogram-recycle-view/recycle-view>_<4685./miniprogram_npm/wxml-to-canvas/index>_<4685./page/API/index>_<4685./page/API/components/set-tab-bar/set-tab-bar>_<4685./page/cloud/index>_<4685./page/component/index>_<4685./page/extend/index",
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
]};
samples.push([sample3, 3])
const sample4= {
    projectPath: "/mnt/disk1/WeChatProjects/miniprogram-demo/miniprogram/",
    args: [
        "-d",
        "--split",
        ">_<3975",
        "-cc",
        "34>_<3975./packageComponent/pages/canvas/canvas-2d/canvas-2d.wxml>_<39750>_<3975./packageComponent/pages/canvas/webgl/webgl.wxml>_<39750>_<3975./packageComponent/pages/content/icon/icon.wxml>_<39750>_<3975./packageComponent/pages/content/progress/progress.wxml>_<39750>_<3975./packageComponent/pages/content/rich-text/rich-text.wxml>_<39750>_<3975./packageComponent/pages/content/text/text.wxml>_<39750>_<3975./packageComponent/pages/form/button/button.wxml>_<39750>_<3975./packageComponent/pages/form/checkbox/checkbox.wxml>_<39750>_<3975./packageComponent/pages/form/editor/editor.wxml>_<39750>_<3975./packageComponent/pages/form/form/form.wxml>_<39750>_<3975./packageComponent/pages/form/input/input.wxml>_<39750>_<3975./packageComponent/pages/form/label/label.wxml>_<39750>_<3975./packageComponent/pages/form/picker/picker.wxml>_<39750>_<3975./packageComponent/pages/form/picker-view/picker-view.wxml>_<39750>_<3975./packageComponent/pages/form/radio/radio.wxml>_<39750>_<3975./packageComponent/pages/form/slider/slider.wxml>_<39750>_<3975./packageComponent/pages/form/switch/switch.wxml>_<39750>_<3975./packageComponent/pages/form/textarea/textarea.wxml>_<39750>_<3975./packageComponent/pages/map/map/map.wxml>_<39750>_<3975./packageComponent/pages/media/camera/camera.wxml>_<39750>_<3975./packageComponent/pages/media/image/image.wxml>_<39750>_<3975./packageComponent/pages/media/live-player/live-player.wxml>_<39750>_<3975./packageComponent/pages/media/live-pusher/live-pusher.wxml>_<39750>_<3975./packageComponent/pages/media/video/video.wxml>_<39750>_<3975./packageComponent/pages/nav/navigator/navigator.wxml>_<39750>_<3975./packageComponent/pages/obstacle-free/aria-component/aria-component.wxml>_<39750>_<3975./packageComponent/pages/open/ad/ad.wxml>_<39750>_<3975./packageComponent/pages/open/open-data/open-data.wxml>_<39750>_<3975./packageComponent/pages/open/web-view/web-view.wxml>_<39750>_<3975./packageComponent/pages/view/cover-view/cover-view.wxml>_<39750>_<3975./packageComponent/pages/view/movable-view/movable-view.wxml>_<39750>_<3975./packageComponent/pages/view/scroll-view/scroll-view.wxml>_<39750>_<3975./packageComponent/pages/view/swiper/swiper.wxml>_<39750>_<3975./packageComponent/pages/view/view/view.wxml>_<39750",
        "-llw",
        "./packageComponent/pages/canvas/canvas-2d/canvas-2d>_<3975./packageComponent/pages/canvas/webgl/webgl>_<3975./packageComponent/pages/content/icon/icon>_<3975./packageComponent/pages/content/progress/progress>_<3975./packageComponent/pages/content/rich-text/rich-text>_<3975./packageComponent/pages/content/text/text>_<3975./packageComponent/pages/form/button/button>_<3975./packageComponent/pages/form/checkbox/checkbox>_<3975./packageComponent/pages/form/editor/editor>_<3975./packageComponent/pages/form/form/form>_<3975./packageComponent/pages/form/input/input>_<3975./packageComponent/pages/form/label/label>_<3975./packageComponent/pages/form/picker/picker>_<3975./packageComponent/pages/form/picker-view/picker-view>_<3975./packageComponent/pages/form/radio/radio>_<3975./packageComponent/pages/form/slider/slider>_<3975./packageComponent/pages/form/switch/switch>_<3975./packageComponent/pages/form/textarea/textarea>_<3975./packageComponent/pages/map/map/map>_<3975./packageComponent/pages/media/camera/camera>_<3975./packageComponent/pages/media/image/image>_<3975./packageComponent/pages/media/live-player/live-player>_<3975./packageComponent/pages/media/live-pusher/live-pusher>_<3975./packageComponent/pages/media/video/video>_<3975./packageComponent/pages/nav/navigator/navigator>_<3975./packageComponent/pages/obstacle-free/aria-component/aria-component>_<3975./packageComponent/pages/open/ad/ad>_<3975./packageComponent/pages/open/open-data/open-data>_<3975./packageComponent/pages/open/web-view/web-view>_<3975./packageComponent/pages/view/cover-view/cover-view>_<3975./packageComponent/pages/view/movable-view/movable-view>_<3975./packageComponent/pages/view/scroll-view/scroll-view>_<3975./packageComponent/pages/view/swiper/swiper>_<3975./packageComponent/pages/view/view/view",
        "./miniprogram_npm/miniprogram-barrage/index.wxml",
        "./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxml",
        "./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxml",
        "./miniprogram_npm/wxml-to-canvas/index.wxml",
        "./page/API/components/set-tab-bar/set-tab-bar.wxml",
        "./page/API/index.wxml",
        "./page/cloud/index.wxml",
        "./page/common/foot.wxml",
        "./page/common/head.wxml",
        "./page/component/index.wxml",
        "./page/extend/index.wxml",
        "./packageComponent/pages/canvas/canvas-2d/canvas-2d.wxml",
        "./packageComponent/pages/canvas/webgl/webgl.wxml",
        "./packageComponent/pages/content/icon/icon.wxml",
        "./packageComponent/pages/content/progress/progress.wxml",
        "./packageComponent/pages/content/rich-text/rich-text.wxml",
        "./packageComponent/pages/content/text/text.wxml",
        "./packageComponent/pages/form/button/button.wxml",
        "./packageComponent/pages/form/checkbox/checkbox.wxml",
        "./packageComponent/pages/form/editor/editor.wxml",
        "./packageComponent/pages/form/form/form.wxml",
        "./packageComponent/pages/form/input/input.wxml",
        "./packageComponent/pages/form/label/label.wxml",
        "./packageComponent/pages/form/picker/picker.wxml",
        "./packageComponent/pages/form/picker-view/picker-view.wxml",
        "./packageComponent/pages/form/radio/radio.wxml",
        "./packageComponent/pages/form/slider/slider.wxml",
        "./packageComponent/pages/form/switch/switch.wxml",
        "./packageComponent/pages/form/textarea/textarea.wxml",
        "./packageComponent/pages/map/map/map.wxml",
        "./packageComponent/pages/media/camera/camera.wxml",
        "./packageComponent/pages/media/image/image.wxml",
        "./packageComponent/pages/media/live-player/live-player.wxml",
        "./packageComponent/pages/media/live-pusher/live-pusher.wxml",
        "./packageComponent/pages/media/video/video.wxml",
        "./packageComponent/pages/nav/navigator/navigator.wxml",
        "./packageComponent/pages/obstacle-free/aria-component/aria-component.wxml",
        "./packageComponent/pages/open/ad/ad.wxml",
        "./packageComponent/pages/open/open-data/open-data.wxml",
        "./packageComponent/pages/open/web-view/web-view.wxml",
        "./packageComponent/pages/view/cover-view/cover-view.wxml",
        "./packageComponent/pages/view/movable-view/movable-view.wxml",
        "./packageComponent/pages/view/scroll-view/scroll-view.wxml",
        "./packageComponent/pages/view/swiper/swiper.wxml",
        "./packageComponent/pages/view/view/view.wxml",
        "-gn",
        "$7061636b616765436f6d706f6e656e742f",
    ]
}
samples.push([sample4, 4])

const sample5 = {
    projectPath: "/mnt/disk1/WeChatProjects/we1",
    args: ["-d","--split",">_<7271","-cc","2>_<7271./pages/index/index.wxml>_<72710>_<7271./pages/logs/logs.wxml>_<72710","-llw","./pages/index/index>_<7271./pages/logs/logs","./pages/index/index.wxml","./pages/logs/logs.wxml","-gn","$gwx"]
}
samples.push([sample5, 5])

const test_wine = (config, id) => {
    try {
        fs.mkdirSync(path.resolve(__dirname, '' + id))
    } catch (ignore) {
        
    }
    const wine = spawn(
        path.resolve(__dirname, "../../../wine/wcc.exe"),
        config.args,
        {
            cwd: config.projectPath,
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
            console.log("wine n: ", n);
            if (0 === n) {
                let result = Buffer.concat(spwanData).toString();
                result = JSON.parse(result);
                // delete result.generateFunctionContent["__COMMON__"];
                result = JSON.stringify(result, null, 4)
                // result = result.generateFunctionContent["__COMMON__"];
                fs.writeFileSync(
                    path.resolve(__dirname, `./${id}/wine_output.json`),
                    result
                );
                // process.stdout.write(result);
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
const test_node = (config, id) => {
    try {
        fs.mkdirSync(path.resolve(__dirname, '' + id))
    } catch (ignore) {
        
    }
    const node_exec = spawn(
        path.resolve(__dirname, "../../../nodejs/wcc"),
        config.args,
        {
            cwd: config.projectPath,
            env: {
                WX_DEBUG_COMPILER_OUTPUT: path.resolve(__dirname, `./${id}`),
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
            console.log("node n: ", n);
            process.stderr.write(`=========stderr输出=========\n${Buffer.concat(errData).toString()}\n\n=========stderr输出 END=========\n`);
            if (0 === n) {
                let result = Buffer.concat(spwanData).toString();
                // require('fs').writeFileSync('/mnt/disk2/wechat-web-devtools-linux/tmp/llw2.json', result)
                // process.stdout.write(result);
                result = JSON.parse(result);
                // delete result.generateFunctionContent["__COMMON__"];
                result = JSON.stringify(result, null, 4)
                // result = result.generateFunctionContent["__COMMON__"];
                fs.writeFileSync(
                    path.resolve(__dirname, `./${id}/node_output.json`),
                    result
                );
                resolve(result);
            } else {
                reject(n);
            }
        });
    });
};

const test = async (config, id) => {
    try {
        const node_result = await test_node(config, id);
        const wine_result = await test_wine(config, id);
        console.log("结果是否一致：", wine_result.trim() === node_result);
    } catch (err) {
        console.error("错误：", err);
    }
};
(async ()=>{
    for (const sample of samples) {
        // if(sample[1] === 2)
        await test(sample[0], sample[1])
    }
})()
