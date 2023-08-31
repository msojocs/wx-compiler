
import assert from 'assert';
import path from 'path';
import linux from '../../../runner/linux'
import windows from '../../../runner/windows'
import * as fs from 'fs'

describe("wcc - raw", function () {
    describe("Raw: node output should equal with wine", function () {
        // afterEach(function(){
        //   if(this.currentTest.state === 'failed'){
        //     console.error('failed', this.currentTest)
        //   }
        // })
        it("初次加载1", async function () {
            const projectPath = path.resolve(
                __dirname,
                "/mnt/d/Work/WeChatProjects/miniprogram-demo/miniprogram"
            );
            const args = [
                "-d",
                "--split",
                ">_<8005",
                "-xc",
                "12>_<8005./component/navigation-bar/navigation-bar.wxml>_<80051>_<8005mp-navigation-bar>_<8005./components/navigation-bar/index.wxml>_<80051>_<8005mp-navigation-bar>_<8005./components/page-scroll/index.wxml>_<80051>_<8005mp-navigation-bar>_<8005./miniprogram_npm/miniprogram-barrage/index.wxml>_<80050>_<8005./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxml>_<80050>_<8005./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxml>_<80050>_<8005./miniprogram_npm/wxml-to-canvas/index.wxml>_<80050>_<8005./page/API/index.wxml>_<80052>_<8005set-tab-bar>_<8005mp-navigation-bar>_<8005./page/API/components/set-tab-bar/set-tab-bar.wxml>_<80051>_<8005mp-navigation-bar>_<8005./page/cloud/index.wxml>_<80051>_<8005mp-navigation-bar>_<8005./page/component/index.wxml>_<80051>_<8005mp-navigation-bar>_<8005./page/extend/index.wxml>_<80051>_<8005mp-navigation-bar",
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
            const w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, '\n')
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(w, n);
        });
        it("初次加载2", async function () {
            const projectPath = path.resolve(
                __dirname,
                "/mnt/d/Work/WeChatProjects/miniprogram-demo/miniprogram"
            );
            const args = [
                "-d",
                "--split",
                ">_<4987",
                "-xc",
                "7>_<4987./packageSkyline/pages/flutter/half-page/index.wxml>_<49873>_<4987navigation-bar>_<4987page-scroll>_<4987mp-navigation-bar>_<4987./packageSkyline/pages/flutter/scale-page/index.wxml>_<49873>_<4987navigation-bar>_<4987page-scroll>_<4987mp-navigation-bar>_<4987./packageSkyline/pages/share-element/card/index.wxml>_<49873>_<4987navigation-bar>_<4987page-scroll>_<4987mp-navigation-bar>_<4987./packageSkyline/pages/share-element/list/index.wxml>_<49873>_<4987navigation-bar>_<4987page-scroll>_<4987mp-navigation-bar>_<4987./packageSkyline/pages/worklet/animation/index.wxml>_<49873>_<4987navigation-bar>_<4987page-scroll>_<4987mp-navigation-bar>_<4987./packageSkyline/pages/worklet/bottom-sheet/index.wxml>_<49873>_<4987navigation-bar>_<4987page-scroll>_<4987mp-navigation-bar>_<4987./packageSkyline/pages/worklet/gesture/index.wxml>_<49873>_<4987navigation-bar>_<4987page-scroll>_<4987mp-navigation-bar",
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
                "./packageSkyline/pages/flutter/half-page/index.wxml",
                "./packageSkyline/pages/flutter/scale-page/index.wxml",
                "./packageSkyline/pages/share-element/card/index.wxml",
                "./packageSkyline/pages/share-element/list/index.wxml",
                "./packageSkyline/pages/worklet/animation/index.wxml",
                "./packageSkyline/pages/worklet/bottom-sheet/index.wxml",
                "./packageSkyline/pages/worklet/gesture/index.wxml",
                "-gn",
                "$7061636b616765536b796c696e652f",
            ];
            const w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, "\n");
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(w, n);
        });
        it("组件 - skyline - 自定义路由", async function () {
            const projectPath = path.resolve(
                __dirname,
                "/mnt/d/Work/WeChatProjects/miniprogram-demo/miniprogram"
            );
            const args = [
                "-d",
                "--split",
                ">_<9107",
                "-xc",
                "12>_<9107./component/navigation-bar/navigation-bar.wxml>_<91071>_<9107mp-navigation-bar>_<9107./components/navigation-bar/index.wxml>_<91071>_<9107mp-navigation-bar>_<9107./components/page-scroll/index.wxml>_<91071>_<9107mp-navigation-bar>_<9107./miniprogram_npm/miniprogram-barrage/index.wxml>_<91070>_<9107./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxml>_<91070>_<9107./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxml>_<91070>_<9107./miniprogram_npm/wxml-to-canvas/index.wxml>_<91070>_<9107./page/API/index.wxml>_<91072>_<9107set-tab-bar>_<9107mp-navigation-bar>_<9107./page/API/components/set-tab-bar/set-tab-bar.wxml>_<91071>_<9107mp-navigation-bar>_<9107./page/cloud/index.wxml>_<91071>_<9107mp-navigation-bar>_<9107./page/component/index.wxml>_<91071>_<9107mp-navigation-bar>_<9107./page/extend/index.wxml>_<91071>_<9107mp-navigation-bar",
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
            const w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, "\n");
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(w, n);
        });
        it("组件 - skyline - 自定义路由 -2", async function () {
            const projectPath = path.resolve(
                __dirname,
                "/mnt/d/Work/WeChatProjects/miniprogram-demo/miniprogram"
            );
            const args = [
                "-d",
                "--split",
                ">_<657",
                "-xc",
                "7>_<657./packageSkyline/pages/flutter/half-page/index.wxml>_<6573>_<657navigation-bar>_<657page-scroll>_<657mp-navigation-bar>_<657./packageSkyline/pages/flutter/scale-page/index.wxml>_<6573>_<657navigation-bar>_<657page-scroll>_<657mp-navigation-bar>_<657./packageSkyline/pages/share-element/card/index.wxml>_<6573>_<657navigation-bar>_<657page-scroll>_<657mp-navigation-bar>_<657./packageSkyline/pages/share-element/list/index.wxml>_<6573>_<657navigation-bar>_<657page-scroll>_<657mp-navigation-bar>_<657./packageSkyline/pages/worklet/animation/index.wxml>_<6573>_<657navigation-bar>_<657page-scroll>_<657mp-navigation-bar>_<657./packageSkyline/pages/worklet/bottom-sheet/index.wxml>_<6573>_<657navigation-bar>_<657page-scroll>_<657mp-navigation-bar>_<657./packageSkyline/pages/worklet/gesture/index.wxml>_<6573>_<657navigation-bar>_<657page-scroll>_<657mp-navigation-bar",
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
                "./packageSkyline/pages/flutter/half-page/index.wxml",
                "./packageSkyline/pages/flutter/scale-page/index.wxml",
                "./packageSkyline/pages/share-element/card/index.wxml",
                "./packageSkyline/pages/share-element/list/index.wxml",
                "./packageSkyline/pages/worklet/animation/index.wxml",
                "./packageSkyline/pages/worklet/bottom-sheet/index.wxml",
                "./packageSkyline/pages/worklet/gesture/index.wxml",
                "-gn",
                "$7061636b616765536b796c696e652f",
            ];
            const w = (await windows.wcc(args, projectPath)).replace(/\r\n/g, "\n");
            const n = await linux.wcc(args, projectPath);
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test?.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(`${storagePath}/wine-output.js`, w);
            fs.writeFileSync(`${storagePath}/node-output.js`, n);
            assert.equal(w, n);
        });
    });
});
