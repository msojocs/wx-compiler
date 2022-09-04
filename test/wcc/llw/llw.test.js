const assert = require("assert");
const node = require("../../runner/node");
const wine = require("../../runner/wine");
const CODE = require("../../runner/code");
const path = require("path");
const fs = require("fs");

const originDE = assert.deepEqual
assert.deepEqual = function(){
    // console.log(arguments[0])
    try {
        originDE.apply(this, arguments)
    } catch (error) {
        
        const dw = CODE.delVariables(JSON.stringify(arguments[0]))
        const dn = CODE.delVariables(JSON.stringify(arguments[1]))
        console.log('\tdeepEqual检测失败，尝试检测语法（测试中）')
        assert.equal(dw, dn);
    }
}

describe("wcc - llw", function () {
    describe("llw: node output should deep equal with wine", function () {
        // afterEach(function(){
        //   if(this.currentTest.state === 'failed'){
        //     console.error('failed', this.currentTest)
        //   }
        // })
        it("初次加载1   # 变量名不同，需要手动检测", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../examples/miniprogram-demo/miniprogram"
            );
            const args = [
                "-d",
                "--split",
                ">_<4896",
                "-cc",
                "12>_<4896./component/navigation-bar/navigation-bar.wxml>_<48961>_<4896mp-navigation-bar>_<4896./components/navigation-bar/index.wxml>_<48961>_<4896mp-navigation-bar>_<4896./components/page-scroll/index.wxml>_<48961>_<4896mp-navigation-bar>_<4896./miniprogram_npm/miniprogram-barrage/index.wxml>_<48960>_<4896./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxml>_<48960>_<4896./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxml>_<48960>_<4896./miniprogram_npm/wxml-to-canvas/index.wxml>_<48960>_<4896./page/API/index.wxml>_<48962>_<4896set-tab-bar>_<4896mp-navigation-bar>_<4896./page/API/components/set-tab-bar/set-tab-bar.wxml>_<48961>_<4896mp-navigation-bar>_<4896./page/cloud/index.wxml>_<48961>_<4896mp-navigation-bar>_<4896./page/component/index.wxml>_<48961>_<4896mp-navigation-bar>_<4896./page/extend/index.wxml>_<48961>_<4896mp-navigation-bar",
                "-llw",
                "./component/navigation-bar/navigation-bar>_<4896./components/navigation-bar/index>_<4896./components/page-scroll/index>_<4896./miniprogram_npm/miniprogram-barrage/index>_<4896./miniprogram_npm/miniprogram-recycle-view/recycle-item>_<4896./miniprogram_npm/miniprogram-recycle-view/recycle-view>_<4896./miniprogram_npm/wxml-to-canvas/index>_<4896./page/API/index>_<4896./page/API/components/set-tab-bar/set-tab-bar>_<4896./page/cloud/index>_<4896./page/component/index>_<4896./page/extend/index",
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
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            const n = JSON.parse(await node.wcc(args, projectPath, storagePath));
            const w = JSON.parse(await wine.wcc(args, projectPath));
            fs.writeFileSync(
                `${storagePath}/wine-output.json`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.json`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(w, n);
        });
        it("组件 - 视图容器", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../examples/miniprogram-demo/miniprogram/"
            );
            const args = [
                "-d",
                "--split",
                ">_<749",
                "-cc",
                "37>_<749./packageComponent/pages/canvas/canvas-2d/canvas-2d.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/canvas/webgl/webgl.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/content/icon/icon.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/content/progress/progress.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/content/rich-text/rich-text.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/content/text/text.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/doc-web-view/doc-web-view.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/button/button.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/checkbox/checkbox.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/editor/editor.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/form/form.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/input/input.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/label/label.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/picker/picker.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/picker-view/picker-view.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/radio/radio.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/slider/slider.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/switch/switch.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/form/textarea/textarea.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/map/map/map.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/media/camera/camera.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/media/image/image.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/media/live-player/live-player.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/media/live-pusher/live-pusher.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/media/video/video.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/nav/navigator/navigate.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/nav/navigator/navigator.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/nav/navigator/redirect.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/obstacle-free/aria-component/aria-component.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/open/ad/ad.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/open/open-data/open-data.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/open/web-view/web-view.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/view/cover-view/cover-view.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/view/movable-view/movable-view.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/view/scroll-view/scroll-view.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/view/swiper/swiper.wxml>_<7491>_<749mp-navigation-bar>_<749./packageComponent/pages/view/view/view.wxml>_<7491>_<749mp-navigation-bar",
                "-llw",
                "./packageComponent/pages/canvas/canvas-2d/canvas-2d>_<749./packageComponent/pages/canvas/webgl/webgl>_<749./packageComponent/pages/content/icon/icon>_<749./packageComponent/pages/content/progress/progress>_<749./packageComponent/pages/content/rich-text/rich-text>_<749./packageComponent/pages/content/text/text>_<749./packageComponent/pages/doc-web-view/doc-web-view>_<749./packageComponent/pages/form/button/button>_<749./packageComponent/pages/form/checkbox/checkbox>_<749./packageComponent/pages/form/editor/editor>_<749./packageComponent/pages/form/form/form>_<749./packageComponent/pages/form/input/input>_<749./packageComponent/pages/form/label/label>_<749./packageComponent/pages/form/picker/picker>_<749./packageComponent/pages/form/picker-view/picker-view>_<749./packageComponent/pages/form/radio/radio>_<749./packageComponent/pages/form/slider/slider>_<749./packageComponent/pages/form/switch/switch>_<749./packageComponent/pages/form/textarea/textarea>_<749./packageComponent/pages/map/map/map>_<749./packageComponent/pages/media/camera/camera>_<749./packageComponent/pages/media/image/image>_<749./packageComponent/pages/media/live-player/live-player>_<749./packageComponent/pages/media/live-pusher/live-pusher>_<749./packageComponent/pages/media/video/video>_<749./packageComponent/pages/nav/navigator/navigate>_<749./packageComponent/pages/nav/navigator/navigator>_<749./packageComponent/pages/nav/navigator/redirect>_<749./packageComponent/pages/obstacle-free/aria-component/aria-component>_<749./packageComponent/pages/open/ad/ad>_<749./packageComponent/pages/open/open-data/open-data>_<749./packageComponent/pages/open/web-view/web-view>_<749./packageComponent/pages/view/cover-view/cover-view>_<749./packageComponent/pages/view/movable-view/movable-view>_<749./packageComponent/pages/view/scroll-view/scroll-view>_<749./packageComponent/pages/view/swiper/swiper>_<749./packageComponent/pages/view/view/view",
                "./packageComponent/pages/canvas/canvas-2d/canvas-2d.wxml",
                "./packageComponent/pages/canvas/webgl/webgl.wxml",
                "./packageComponent/pages/content/icon/icon.wxml",
                "./packageComponent/pages/content/progress/progress.wxml",
                "./packageComponent/pages/content/rich-text/rich-text.wxml",
                "./packageComponent/pages/content/text/text.wxml",
                "./packageComponent/pages/doc-web-view/doc-web-view.wxml",
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
                "./packageComponent/pages/nav/navigator/navigate.wxml",
                "./packageComponent/pages/nav/navigator/navigator.wxml",
                "./packageComponent/pages/nav/navigator/redirect.wxml",
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
            ];
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            const n = JSON.parse(await node.wcc(args, projectPath, storagePath));
            const w = JSON.parse(await wine.wcc(args, projectPath));
            fs.writeFileSync(
                `${storagePath}/wine-output.json`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.json`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(w, n);
        });
        it("组件 - skyline", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../examples/miniprogram-demo/miniprogram/"
            );
            const args = [
                "-d",
                "--split",
                ">_<8685",
                "-cc",
                "7>_<8685./packageSkyline/pages/flutter/half-page/index.wxml>_<86853>_<8685navigation-bar>_<8685page-scroll>_<8685mp-navigation-bar>_<8685./packageSkyline/pages/flutter/scale-page/index.wxml>_<86853>_<8685navigation-bar>_<8685page-scroll>_<8685mp-navigation-bar>_<8685./packageSkyline/pages/share-element/card/index.wxml>_<86853>_<8685navigation-bar>_<8685page-scroll>_<8685mp-navigation-bar>_<8685./packageSkyline/pages/share-element/list/index.wxml>_<86853>_<8685navigation-bar>_<8685page-scroll>_<8685mp-navigation-bar>_<8685./packageSkyline/pages/worklet/animation/index.wxml>_<86853>_<8685navigation-bar>_<8685page-scroll>_<8685mp-navigation-bar>_<8685./packageSkyline/pages/worklet/bottom-sheet/index.wxml>_<86853>_<8685navigation-bar>_<8685page-scroll>_<8685mp-navigation-bar>_<8685./packageSkyline/pages/worklet/gesture/index.wxml>_<86853>_<8685navigation-bar>_<8685page-scroll>_<8685mp-navigation-bar",
                "-llw",
                "./packageSkyline/pages/flutter/half-page/index>_<8685./packageSkyline/pages/flutter/scale-page/index>_<8685./packageSkyline/pages/share-element/card/index>_<8685./packageSkyline/pages/share-element/list/index>_<8685./packageSkyline/pages/worklet/animation/index>_<8685./packageSkyline/pages/worklet/bottom-sheet/index>_<8685./packageSkyline/pages/worklet/gesture/index",
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
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            const n = JSON.parse(await node.wcc(args, projectPath, storagePath));
            const w = JSON.parse(await wine.wcc(args, projectPath));
            fs.writeFileSync(
                `${storagePath}/wine-output.json`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.json`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(w, n);
        });
        it("组件 - skyline - 自定义路由   # 变量名不同，需要手动检测", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../examples/miniprogram-demo/miniprogram/"
            );
            const args = [
                "-d",
                "--split",
                ">_<2747",
                "-cc",
                "12>_<2747./component/navigation-bar/navigation-bar.wxml>_<27471>_<2747mp-navigation-bar>_<2747./components/navigation-bar/index.wxml>_<27471>_<2747mp-navigation-bar>_<2747./components/page-scroll/index.wxml>_<27471>_<2747mp-navigation-bar>_<2747./miniprogram_npm/miniprogram-barrage/index.wxml>_<27470>_<2747./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxml>_<27470>_<2747./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxml>_<27470>_<2747./miniprogram_npm/wxml-to-canvas/index.wxml>_<27470>_<2747./page/API/index.wxml>_<27472>_<2747set-tab-bar>_<2747mp-navigation-bar>_<2747./page/API/components/set-tab-bar/set-tab-bar.wxml>_<27471>_<2747mp-navigation-bar>_<2747./page/cloud/index.wxml>_<27471>_<2747mp-navigation-bar>_<2747./page/component/index.wxml>_<27471>_<2747mp-navigation-bar>_<2747./page/extend/index.wxml>_<27471>_<2747mp-navigation-bar",
                "-llw",
                "./component/navigation-bar/navigation-bar>_<2747./components/navigation-bar/index>_<2747./components/page-scroll/index>_<2747./miniprogram_npm/miniprogram-barrage/index>_<2747./miniprogram_npm/miniprogram-recycle-view/recycle-item>_<2747./miniprogram_npm/miniprogram-recycle-view/recycle-view>_<2747./miniprogram_npm/wxml-to-canvas/index>_<2747./page/API/index>_<2747./page/API/components/set-tab-bar/set-tab-bar>_<2747./page/cloud/index>_<2747./page/component/index>_<2747./page/extend/index",
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
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            const n = JSON.parse(await node.wcc(args, projectPath, storagePath));
            const w = JSON.parse(await wine.wcc(args, projectPath));
            fs.writeFileSync(
                `${storagePath}/wine-output.json`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.json`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(w, n);
        });
        it("扩展能力 - 表单 - cell    # 变量名不同，需要手动检测", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../examples/miniprogram-demo/miniprogram/"
            );
            const args = [
                "-d",
                "--split",
                ">_<2747",
                "-cc",
                "12>_<2747./component/navigation-bar/navigation-bar.wxml>_<27471>_<2747mp-navigation-bar>_<2747./components/navigation-bar/index.wxml>_<27471>_<2747mp-navigation-bar>_<2747./components/page-scroll/index.wxml>_<27471>_<2747mp-navigation-bar>_<2747./miniprogram_npm/miniprogram-barrage/index.wxml>_<27470>_<2747./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxml>_<27470>_<2747./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxml>_<27470>_<2747./miniprogram_npm/wxml-to-canvas/index.wxml>_<27470>_<2747./page/API/index.wxml>_<27472>_<2747set-tab-bar>_<2747mp-navigation-bar>_<2747./page/API/components/set-tab-bar/set-tab-bar.wxml>_<27471>_<2747mp-navigation-bar>_<2747./page/cloud/index.wxml>_<27471>_<2747mp-navigation-bar>_<2747./page/component/index.wxml>_<27471>_<2747mp-navigation-bar>_<2747./page/extend/index.wxml>_<27471>_<2747mp-navigation-bar",
                "-llw",
                "./component/navigation-bar/navigation-bar>_<2747./components/navigation-bar/index>_<2747./components/page-scroll/index>_<2747./miniprogram_npm/miniprogram-barrage/index>_<2747./miniprogram_npm/miniprogram-recycle-view/recycle-item>_<2747./miniprogram_npm/miniprogram-recycle-view/recycle-view>_<2747./miniprogram_npm/wxml-to-canvas/index>_<2747./page/API/index>_<2747./page/API/components/set-tab-bar/set-tab-bar>_<2747./page/cloud/index>_<2747./page/component/index>_<2747./page/extend/index",
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
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            const n = JSON.parse(await node.wcc(args, projectPath, storagePath));
            const w = JSON.parse(await wine.wcc(args, projectPath));
            fs.writeFileSync(
                `${storagePath}/wine-output.json`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.json`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(w, n);
        });
        it("接口 - 微信登录", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../examples/miniprogram-demo/miniprogram/"
            );
            const args = [
                "-ds",
                "-d",
                "--split",
                ">_<7622",
                "-cc",
                "74>_<7622./packageAPI/pages/api/choose-address/choose-address.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/choose-invoice-title/choose-invoice-title.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/custom-message/custom-message.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/get-user-info/get-user-info.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/jump/jump.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/login/login.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/request-payment/request-payment.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/setting/setting.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/share/share.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/share-button/share-button.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/soter-authentication/soter-authentication.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/api/subscribe-message/subscribe-message.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/ar/2dmarker-ar/2dmarker-ar.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/ar/osd-ar/osd-ar.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/ar/plane-ar/plane-ar.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/ar/visionkit-basic/visionkit-basic.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/add-contact/add-contact.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/bluetooth/bluetooth.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/bluetooth/slave/slave.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/capture-screen/capture-screen.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/clipboard-data/clipboard-data.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/get-battery-info/get-battery-info.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/get-network-type/get-network-type.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/get-system-info/get-system-info.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/ibeacon/ibeacon.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/make-phone-call/make-phone-call.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/on-accelerometer-change/on-accelerometer-change.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/on-compass-change/on-compass-change.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/on-network-status-change/on-network-status-change.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/scan-code/scan-code.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/screen-brightness/screen-brightness.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/vibrate/vibrate.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/device/wifi/wifi.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/framework/resizable/resizable.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/framework/two-way-bindings/two-way-bindings.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/framework/wxs/movable.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/framework/wxs/nearby.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/framework/wxs/sidebar.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/framework/wxs/stick-top.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/framework/wxs/wxs.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/location/choose-location/choose-location.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/location/get-location/get-location.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/location/open-location/open-location.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/media/audio/audio.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/media/background-audio/background-audio.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/media/file/file.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/media/image/image.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/media/load-font-face/load-font-face.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/media/media-container/media-container.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/media/video/video.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/media/voice/voice.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/network/download-file/download-file.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/network/mdns/mdns.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/network/request/request.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/network/udp-socket/udp-socket.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/network/upload-file/upload-file.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/network/web-socket/web-socket.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/action-sheet/action-sheet.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/animation/animation.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/canvas/canvas.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/get-wxml-node-info/get-wxml-node-info.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/intersection-observer/intersection-observer.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/modal/modal.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/navigation-bar-loading/navigation-bar-loading.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/navigator/navigator.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/page-scroll/page-scroll.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/pull-down-refresh/pull-down-refresh.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/set-navigation-bar-title/set-navigation-bar-title.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/page/toast/toast.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/performance/get-performance/get-performance.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/storage/get-background-fetch-data/get-background-fetch-data.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/storage/get-background-prefetch-data/get-background-prefetch-data.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/storage/storage/storage.wxml>_<76221>_<7622mp-navigation-bar>_<7622./packageAPI/pages/worker/worker/worker.wxml>_<76221>_<7622mp-navigation-bar",
                "-llw",
                "./packageAPI/pages/api/choose-address/choose-address>_<7622./packageAPI/pages/api/choose-invoice-title/choose-invoice-title>_<7622./packageAPI/pages/api/custom-message/custom-message>_<7622./packageAPI/pages/api/get-user-info/get-user-info>_<7622./packageAPI/pages/api/jump/jump>_<7622./packageAPI/pages/api/login/login>_<7622./packageAPI/pages/api/request-payment/request-payment>_<7622./packageAPI/pages/api/setting/setting>_<7622./packageAPI/pages/api/share/share>_<7622./packageAPI/pages/api/share-button/share-button>_<7622./packageAPI/pages/api/soter-authentication/soter-authentication>_<7622./packageAPI/pages/api/subscribe-message/subscribe-message>_<7622./packageAPI/pages/ar/2dmarker-ar/2dmarker-ar>_<7622./packageAPI/pages/ar/osd-ar/osd-ar>_<7622./packageAPI/pages/ar/plane-ar/plane-ar>_<7622./packageAPI/pages/ar/visionkit-basic/visionkit-basic>_<7622./packageAPI/pages/device/add-contact/add-contact>_<7622./packageAPI/pages/device/bluetooth/bluetooth>_<7622./packageAPI/pages/device/bluetooth/slave/slave>_<7622./packageAPI/pages/device/capture-screen/capture-screen>_<7622./packageAPI/pages/device/clipboard-data/clipboard-data>_<7622./packageAPI/pages/device/get-battery-info/get-battery-info>_<7622./packageAPI/pages/device/get-network-type/get-network-type>_<7622./packageAPI/pages/device/get-system-info/get-system-info>_<7622./packageAPI/pages/device/ibeacon/ibeacon>_<7622./packageAPI/pages/device/make-phone-call/make-phone-call>_<7622./packageAPI/pages/device/on-accelerometer-change/on-accelerometer-change>_<7622./packageAPI/pages/device/on-compass-change/on-compass-change>_<7622./packageAPI/pages/device/on-network-status-change/on-network-status-change>_<7622./packageAPI/pages/device/scan-code/scan-code>_<7622./packageAPI/pages/device/screen-brightness/screen-brightness>_<7622./packageAPI/pages/device/vibrate/vibrate>_<7622./packageAPI/pages/device/wifi/wifi>_<7622./packageAPI/pages/framework/resizable/resizable>_<7622./packageAPI/pages/framework/two-way-bindings/two-way-bindings>_<7622./packageAPI/pages/framework/wxs/movable>_<7622./packageAPI/pages/framework/wxs/nearby>_<7622./packageAPI/pages/framework/wxs/sidebar>_<7622./packageAPI/pages/framework/wxs/stick-top>_<7622./packageAPI/pages/framework/wxs/wxs>_<7622./packageAPI/pages/location/choose-location/choose-location>_<7622./packageAPI/pages/location/get-location/get-location>_<7622./packageAPI/pages/location/open-location/open-location>_<7622./packageAPI/pages/media/audio/audio>_<7622./packageAPI/pages/media/background-audio/background-audio>_<7622./packageAPI/pages/media/file/file>_<7622./packageAPI/pages/media/image/image>_<7622./packageAPI/pages/media/load-font-face/load-font-face>_<7622./packageAPI/pages/media/media-container/media-container>_<7622./packageAPI/pages/media/video/video>_<7622./packageAPI/pages/media/voice/voice>_<7622./packageAPI/pages/network/download-file/download-file>_<7622./packageAPI/pages/network/mdns/mdns>_<7622./packageAPI/pages/network/request/request>_<7622./packageAPI/pages/network/udp-socket/udp-socket>_<7622./packageAPI/pages/network/upload-file/upload-file>_<7622./packageAPI/pages/network/web-socket/web-socket>_<7622./packageAPI/pages/page/action-sheet/action-sheet>_<7622./packageAPI/pages/page/animation/animation>_<7622./packageAPI/pages/page/canvas/canvas>_<7622./packageAPI/pages/page/get-wxml-node-info/get-wxml-node-info>_<7622./packageAPI/pages/page/intersection-observer/intersection-observer>_<7622./packageAPI/pages/page/modal/modal>_<7622./packageAPI/pages/page/navigation-bar-loading/navigation-bar-loading>_<7622./packageAPI/pages/page/navigator/navigator>_<7622./packageAPI/pages/page/page-scroll/page-scroll>_<7622./packageAPI/pages/page/pull-down-refresh/pull-down-refresh>_<7622./packageAPI/pages/page/set-navigation-bar-title/set-navigation-bar-title>_<7622./packageAPI/pages/page/toast/toast>_<7622./packageAPI/pages/performance/get-performance/get-performance>_<7622./packageAPI/pages/storage/get-background-fetch-data/get-background-fetch-data>_<7622./packageAPI/pages/storage/get-background-prefetch-data/get-background-prefetch-data>_<7622./packageAPI/pages/storage/storage/storage>_<7622./packageAPI/pages/worker/worker/worker",
                "./packageAPI/pages/api/choose-address/choose-address.wxml",
                "./packageAPI/pages/api/choose-invoice-title/choose-invoice-title.wxml",
                "./packageAPI/pages/api/custom-message/custom-message.wxml",
                "./packageAPI/pages/api/get-user-info/get-user-info.wxml",
                "./packageAPI/pages/api/jump/jump.wxml",
                "./packageAPI/pages/api/login/login.wxml",
                "./packageAPI/pages/api/request-payment/request-payment.wxml",
                "./packageAPI/pages/api/setting/setting.wxml",
                "./packageAPI/pages/api/share/share.wxml",
                "./packageAPI/pages/api/share-button/share-button.wxml",
                "./packageAPI/pages/api/soter-authentication/soter-authentication.wxml",
                "./packageAPI/pages/api/subscribe-message/subscribe-message.wxml",
                "./packageAPI/pages/ar/2dmarker-ar/2dmarker-ar.wxml",
                "./packageAPI/pages/ar/osd-ar/osd-ar.wxml",
                "./packageAPI/pages/ar/plane-ar/plane-ar.wxml",
                "./packageAPI/pages/ar/visionkit-basic/visionkit-basic.wxml",
                "./packageAPI/pages/device/add-contact/add-contact.wxml",
                "./packageAPI/pages/device/bluetooth/bluetooth.wxml",
                "./packageAPI/pages/device/bluetooth/slave/slave.wxml",
                "./packageAPI/pages/device/capture-screen/capture-screen.wxml",
                "./packageAPI/pages/device/clipboard-data/clipboard-data.wxml",
                "./packageAPI/pages/device/get-battery-info/get-battery-info.wxml",
                "./packageAPI/pages/device/get-network-type/get-network-type.wxml",
                "./packageAPI/pages/device/get-system-info/get-system-info.wxml",
                "./packageAPI/pages/device/ibeacon/ibeacon.wxml",
                "./packageAPI/pages/device/make-phone-call/make-phone-call.wxml",
                "./packageAPI/pages/device/on-accelerometer-change/on-accelerometer-change.wxml",
                "./packageAPI/pages/device/on-compass-change/on-compass-change.wxml",
                "./packageAPI/pages/device/on-network-status-change/on-network-status-change.wxml",
                "./packageAPI/pages/device/scan-code/scan-code.wxml",
                "./packageAPI/pages/device/screen-brightness/screen-brightness.wxml",
                "./packageAPI/pages/device/vibrate/vibrate.wxml",
                "./packageAPI/pages/device/wifi/wifi.wxml",
                "./packageAPI/pages/framework/resizable/resizable.wxml",
                "./packageAPI/pages/framework/two-way-bindings/two-way-bindings.wxml",
                "./packageAPI/pages/framework/wxs/movable.wxml",
                "./packageAPI/pages/framework/wxs/nearby.wxml",
                "./packageAPI/pages/framework/wxs/sidebar.wxml",
                "./packageAPI/pages/framework/wxs/stick-top.wxml",
                "./packageAPI/pages/framework/wxs/wxs.wxml",
                "./packageAPI/pages/location/choose-location/choose-location.wxml",
                "./packageAPI/pages/location/get-location/get-location.wxml",
                "./packageAPI/pages/location/open-location/open-location.wxml",
                "./packageAPI/pages/media/audio/audio.wxml",
                "./packageAPI/pages/media/background-audio/background-audio.wxml",
                "./packageAPI/pages/media/file/file.wxml",
                "./packageAPI/pages/media/image/image.wxml",
                "./packageAPI/pages/media/load-font-face/load-font-face.wxml",
                "./packageAPI/pages/media/media-container/media-container.wxml",
                "./packageAPI/pages/media/video/video.wxml",
                "./packageAPI/pages/media/voice/voice.wxml",
                "./packageAPI/pages/network/download-file/download-file.wxml",
                "./packageAPI/pages/network/mdns/mdns.wxml",
                "./packageAPI/pages/network/request/request.wxml",
                "./packageAPI/pages/network/udp-socket/udp-socket.wxml",
                "./packageAPI/pages/network/upload-file/upload-file.wxml",
                "./packageAPI/pages/network/web-socket/web-socket.wxml",
                "./packageAPI/pages/page/action-sheet/action-sheet.wxml",
                "./packageAPI/pages/page/animation/animation.wxml",
                "./packageAPI/pages/page/canvas/canvas.wxml",
                "./packageAPI/pages/page/get-wxml-node-info/get-wxml-node-info.wxml",
                "./packageAPI/pages/page/intersection-observer/intersection-observer.wxml",
                "./packageAPI/pages/page/modal/modal.wxml",
                "./packageAPI/pages/page/navigation-bar-loading/navigation-bar-loading.wxml",
                "./packageAPI/pages/page/navigator/navigator.wxml",
                "./packageAPI/pages/page/page-scroll/page-scroll.wxml",
                "./packageAPI/pages/page/pull-down-refresh/pull-down-refresh.wxml",
                "./packageAPI/pages/page/set-navigation-bar-title/set-navigation-bar-title.wxml",
                "./packageAPI/pages/page/toast/toast.wxml",
                "./packageAPI/pages/performance/get-performance/get-performance.wxml",
                "./packageAPI/pages/storage/get-background-fetch-data/get-background-fetch-data.wxml",
                "./packageAPI/pages/storage/get-background-prefetch-data/get-background-prefetch-data.wxml",
                "./packageAPI/pages/storage/storage/storage.wxml",
                "./packageAPI/pages/worker/worker/worker.wxml",
                "./packageAPI/pages/framework/resizable/resizable.wxs",
                "./packageAPI/pages/framework/wxs/movable.wxs",
                "./packageAPI/pages/framework/wxs/nearby.wxs",
                "./packageAPI/pages/framework/wxs/sidebar.wxs",
                "./packageAPI/pages/framework/wxs/stick-top.wxs",
                "-gn",
                "$7061636b6167654150492f",
            ];
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            const n = JSON.parse(await node.wcc(args, projectPath, storagePath));
            const w = JSON.parse(await wine.wcc(args, projectPath));
            fs.writeFileSync(
                `${storagePath}/wine-output.json`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.json`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(w, n);
        });
    });
});
