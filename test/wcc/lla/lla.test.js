const assert = require("assert");
const node = require("../../runner/node");
const wine = require("../../runner/wine");
const path = require("path");
const fs = require("fs");

describe("wcc - lla", function () {
    describe("lla: node output should deep equal with wine", function () {
        // afterEach(function(){
        //   if(this.currentTest.state === 'failed'){
        //     console.error('failed', this.currentTest)
        //   }
        // })
        it("初次加载1", async function () {
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
            const w = JSON.parse(await wine.wcc(args, projectPath));
            const n = JSON.parse(await node.wcc(args, projectPath));
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
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
                ">_<3343",
                "-xc",
                "37>_<3343./packageComponent/pages/canvas/canvas-2d/canvas-2d.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/canvas/webgl/webgl.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/content/icon/icon.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/content/progress/progress.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/content/rich-text/rich-text.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/content/text/text.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/doc-web-view/doc-web-view.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/button/button.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/checkbox/checkbox.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/editor/editor.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/form/form.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/input/input.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/label/label.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/picker/picker.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/picker-view/picker-view.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/radio/radio.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/slider/slider.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/switch/switch.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/form/textarea/textarea.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/map/map/map.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/media/camera/camera.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/media/image/image.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/media/live-player/live-player.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/media/live-pusher/live-pusher.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/media/video/video.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/nav/navigator/navigate.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/nav/navigator/navigator.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/nav/navigator/redirect.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/obstacle-free/aria-component/aria-component.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/open/ad/ad.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/open/open-data/open-data.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/open/web-view/web-view.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/view/cover-view/cover-view.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/view/movable-view/movable-view.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/view/scroll-view/scroll-view.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/view/swiper/swiper.wxml>_<33431>_<3343mp-navigation-bar>_<3343./packageComponent/pages/view/view/view.wxml>_<33431>_<3343mp-navigation-bar",
                "-lla",
                "./packageComponent/pages/canvas/canvas-2d/canvas-2d>_<3343./packageComponent/pages/canvas/webgl/webgl>_<3343./packageComponent/pages/content/icon/icon>_<3343./packageComponent/pages/content/progress/progress>_<3343./packageComponent/pages/content/rich-text/rich-text>_<3343./packageComponent/pages/content/text/text>_<3343./packageComponent/pages/doc-web-view/doc-web-view>_<3343./packageComponent/pages/form/button/button>_<3343./packageComponent/pages/form/checkbox/checkbox>_<3343./packageComponent/pages/form/editor/editor>_<3343./packageComponent/pages/form/form/form>_<3343./packageComponent/pages/form/input/input>_<3343./packageComponent/pages/form/label/label>_<3343./packageComponent/pages/form/picker/picker>_<3343./packageComponent/pages/form/picker-view/picker-view>_<3343./packageComponent/pages/form/radio/radio>_<3343./packageComponent/pages/form/slider/slider>_<3343./packageComponent/pages/form/switch/switch>_<3343./packageComponent/pages/form/textarea/textarea>_<3343./packageComponent/pages/map/map/map>_<3343./packageComponent/pages/media/camera/camera>_<3343./packageComponent/pages/media/image/image>_<3343./packageComponent/pages/media/live-player/live-player>_<3343./packageComponent/pages/media/live-pusher/live-pusher>_<3343./packageComponent/pages/media/video/video>_<3343./packageComponent/pages/nav/navigator/navigate>_<3343./packageComponent/pages/nav/navigator/navigator>_<3343./packageComponent/pages/nav/navigator/redirect>_<3343./packageComponent/pages/obstacle-free/aria-component/aria-component>_<3343./packageComponent/pages/open/ad/ad>_<3343./packageComponent/pages/open/open-data/open-data>_<3343./packageComponent/pages/open/web-view/web-view>_<3343./packageComponent/pages/view/cover-view/cover-view>_<3343./packageComponent/pages/view/movable-view/movable-view>_<3343./packageComponent/pages/view/scroll-view/scroll-view>_<3343./packageComponent/pages/view/swiper/swiper>_<3343./packageComponent/pages/view/view/view",
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
            const w = JSON.parse(await wine.wcc(args, projectPath));
            const n = JSON.parse(await node.wcc(args, projectPath));
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(
                `${storagePath}/wine-output.js`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.js`,
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
                ">_<3893",
                "-xc",
                "7>_<3893./packageSkyline/pages/flutter/half-page/index.wxml>_<38933>_<3893navigation-bar>_<3893page-scroll>_<3893mp-navigation-bar>_<3893./packageSkyline/pages/flutter/scale-page/index.wxml>_<38933>_<3893navigation-bar>_<3893page-scroll>_<3893mp-navigation-bar>_<3893./packageSkyline/pages/share-element/card/index.wxml>_<38933>_<3893navigation-bar>_<3893page-scroll>_<3893mp-navigation-bar>_<3893./packageSkyline/pages/share-element/list/index.wxml>_<38933>_<3893navigation-bar>_<3893page-scroll>_<3893mp-navigation-bar>_<3893./packageSkyline/pages/worklet/animation/index.wxml>_<38933>_<3893navigation-bar>_<3893page-scroll>_<3893mp-navigation-bar>_<3893./packageSkyline/pages/worklet/bottom-sheet/index.wxml>_<38933>_<3893navigation-bar>_<3893page-scroll>_<3893mp-navigation-bar>_<3893./packageSkyline/pages/worklet/gesture/index.wxml>_<38933>_<3893navigation-bar>_<3893page-scroll>_<3893mp-navigation-bar",
                "-lla",
                "./packageSkyline/pages/flutter/half-page/index>_<3893./packageSkyline/pages/flutter/scale-page/index>_<3893./packageSkyline/pages/share-element/card/index>_<3893./packageSkyline/pages/share-element/list/index>_<3893./packageSkyline/pages/worklet/animation/index>_<3893./packageSkyline/pages/worklet/bottom-sheet/index>_<3893./packageSkyline/pages/worklet/gesture/index",
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
            const w = JSON.parse(await wine.wcc(args, projectPath));
            const n = JSON.parse(await node.wcc(args, projectPath));
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(
                `${storagePath}/wine-output.js`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.js`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(w, n);
        });
        it("组件 - skyline - 自定义路由", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../examples/miniprogram-demo/miniprogram/"
            );
            const args = [
                "-d",
                "--split",
                ">_<7060",
                "-xc",
                "12>_<7060./component/navigation-bar/navigation-bar.wxml>_<70601>_<7060mp-navigation-bar>_<7060./components/navigation-bar/index.wxml>_<70601>_<7060mp-navigation-bar>_<7060./components/page-scroll/index.wxml>_<70601>_<7060mp-navigation-bar>_<7060./miniprogram_npm/miniprogram-barrage/index.wxml>_<70600>_<7060./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxml>_<70600>_<7060./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxml>_<70600>_<7060./miniprogram_npm/wxml-to-canvas/index.wxml>_<70600>_<7060./page/API/index.wxml>_<70602>_<7060set-tab-bar>_<7060mp-navigation-bar>_<7060./page/API/components/set-tab-bar/set-tab-bar.wxml>_<70601>_<7060mp-navigation-bar>_<7060./page/cloud/index.wxml>_<70601>_<7060mp-navigation-bar>_<7060./page/component/index.wxml>_<70601>_<7060mp-navigation-bar>_<7060./page/extend/index.wxml>_<70601>_<7060mp-navigation-bar",
                "-lla",
                "./component/navigation-bar/navigation-bar>_<7060./components/navigation-bar/index>_<7060./components/page-scroll/index>_<7060./miniprogram_npm/miniprogram-barrage/index>_<7060./miniprogram_npm/miniprogram-recycle-view/recycle-item>_<7060./miniprogram_npm/miniprogram-recycle-view/recycle-view>_<7060./miniprogram_npm/wxml-to-canvas/index>_<7060./page/API/index>_<7060./page/API/components/set-tab-bar/set-tab-bar>_<7060./page/cloud/index>_<7060./page/component/index>_<7060./page/extend/index",
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
            const w = JSON.parse(await wine.wcc(args, projectPath));
            const n = JSON.parse(await node.wcc(args, projectPath));
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(
                `${storagePath}/wine-output.js`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.js`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(w, n);
        });
        it("扩展能力 - 表单 - cell", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../examples/miniprogram-demo/miniprogram/"
            );
            const args = [
                "-ds",
                "-d",
                "--split",
                ">_<7801",
                "-xc",
                "55>_<7801./packageExtend/components/col/index.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/components/emoji/emoji.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/components/grids/grids.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/components/index-list/index-list.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/components/row/index.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/components/select-text/select-text.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/components/sticky/sticky.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/components/tabs/tabs.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/components/video-swiper/video-swiper.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/components/vtabs/vtabs.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/components/vtabs-content/vtabs-content.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/pages/adapt/freelayout/freelayout.wxml>_<78013>_<7801mp-col>_<7801mp-row>_<7801mp-navigation-bar>_<7801./packageExtend/pages/adapt/horizontalexpansion/horizontalexpansion.wxml>_<78013>_<7801mp-col>_<7801mp-row>_<7801mp-navigation-bar>_<7801./packageExtend/pages/adapt/layeredpresentation/layeredpresentation.wxml>_<78013>_<7801mp-col>_<7801mp-row>_<7801mp-navigation-bar>_<7801./packageExtend/pages/adapt/linebreak/linebreak.wxml>_<78013>_<7801mp-col>_<7801mp-row>_<7801mp-navigation-bar>_<7801./packageExtend/pages/adapt/pagination/pagination.wxml>_<78013>_<7801mp-col>_<7801mp-row>_<7801mp-navigation-bar>_<7801./packageExtend/pages/adapt/sidenavigation/sidenavigation.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/pages/adapt/telescopic/telescopic.wxml>_<78013>_<7801mp-col>_<7801mp-row>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/article/article.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/badge/badge.wxml>_<78014>_<7801mp-cells>_<7801mp-cell>_<7801mp-badge>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/flex/flex.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/footer/footer.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/gallery/gallery.wxml>_<78012>_<7801mp-gallery>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/grid/grid.wxml>_<78012>_<7801mp-grids>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/icons/icons.wxml>_<78012>_<7801mp-icon>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/loading/loading.wxml>_<78012>_<7801mp-loading>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/loadmore/loadmore.wxml>_<78012>_<7801mp-loading>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/panel/panel.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/pages/base/preview/preview.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/pages/extend/barrage/barrage.wxml>_<78012>_<7801barrage>_<7801mp-navigation-bar>_<7801./packageExtend/pages/extend/emoji/emoji.wxml>_<78012>_<7801mp-emoji>_<7801mp-navigation-bar>_<7801./packageExtend/pages/extend/index-list/index-list.wxml>_<78012>_<7801mp-indexList>_<7801mp-navigation-bar>_<7801./packageExtend/pages/extend/recycle-view/recycle-view.wxml>_<78013>_<7801recycle-view>_<7801recycle-item>_<7801mp-navigation-bar>_<7801./packageExtend/pages/extend/select-text/select-text.wxml>_<78012>_<7801mp-select-text>_<7801mp-navigation-bar>_<7801./packageExtend/pages/extend/sticky/sticky.wxml>_<78012>_<7801mp-sticky>_<7801mp-navigation-bar>_<7801./packageExtend/pages/extend/tabs/tabs.wxml>_<78012>_<7801mp-tabs>_<7801mp-navigation-bar>_<7801./packageExtend/pages/extend/video-swiper/video-swiper.wxml>_<78012>_<7801mp-video-swiper>_<7801mp-navigation-bar>_<7801./packageExtend/pages/extend/vtabs/vtabs.wxml>_<78013>_<7801mp-vtabs>_<7801mp-vtabs-content>_<7801mp-navigation-bar>_<7801./packageExtend/pages/extend/wxml-to-canvas/wxml-to-canvas.wxml>_<78012>_<7801wxml-to-canvas>_<7801mp-navigation-bar>_<7801./packageExtend/pages/form/cell/cell.wxml>_<78014>_<7801mp-cells>_<7801mp-cell>_<7801mp-slideview>_<7801mp-navigation-bar>_<7801./packageExtend/pages/form/form/form.wxml>_<78018>_<7801mp-form-page>_<7801mp-toptips>_<7801mp-cells>_<7801mp-cell>_<7801mp-checkbox>_<7801mp-checkbox-group>_<7801mp-form>_<7801mp-navigation-bar>_<7801./packageExtend/pages/form/slideview/slideview.wxml>_<78014>_<7801mp-cells>_<7801mp-cell>_<7801mp-slideview>_<7801mp-navigation-bar>_<7801./packageExtend/pages/form/uploader/uploader.wxml>_<78014>_<7801mp-uploader>_<7801mp-cells>_<7801mp-cell>_<7801mp-navigation-bar>_<7801./packageExtend/pages/navigation/navigation/navigation.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/pages/navigation/tabbar/tabbar.wxml>_<78012>_<7801mp-tabbar>_<7801mp-navigation-bar>_<7801./packageExtend/pages/operate/actionsheet/actionsheet.wxml>_<78013>_<7801mp-actionSheet>_<7801mp-icon>_<7801mp-navigation-bar>_<7801./packageExtend/pages/operate/dialog/dialog.wxml>_<78012>_<7801mp-dialog>_<7801mp-navigation-bar>_<7801./packageExtend/pages/operate/half-screen-dialog/half-screen-dialog.wxml>_<78012>_<7801mp-halfScreenDialog>_<7801mp-navigation-bar>_<7801./packageExtend/pages/operate/msg/msg.wxml>_<78011>_<7801mp-navigation-bar>_<7801./packageExtend/pages/operate/msg/msg_fail.wxml>_<78012>_<7801mp-msg>_<7801mp-navigation-bar>_<7801./packageExtend/pages/operate/msg/msg_success.wxml>_<78012>_<7801mp-msg>_<7801mp-navigation-bar>_<7801./packageExtend/pages/operate/msg/msg_text.wxml>_<78012>_<7801mp-msg>_<7801mp-navigation-bar>_<7801./packageExtend/pages/operate/msg/msg_text_primary.wxml>_<78012>_<7801mp-msg>_<7801mp-navigation-bar>_<7801./packageExtend/pages/operate/toptips/toptips.wxml>_<78012>_<7801mp-toptips>_<7801mp-navigation-bar>_<7801./packageExtend/pages/search/searchbar/searchbar.wxml>_<78012>_<7801mp-searchbar>_<7801mp-navigation-bar",
                "-lla",
                "./packageExtend/components/col/index>_<7801./packageExtend/components/emoji/emoji>_<7801./packageExtend/components/grids/grids>_<7801./packageExtend/components/index-list/index-list>_<7801./packageExtend/components/row/index>_<7801./packageExtend/components/select-text/select-text>_<7801./packageExtend/components/sticky/sticky>_<7801./packageExtend/components/tabs/tabs>_<7801./packageExtend/components/video-swiper/video-swiper>_<7801./packageExtend/components/vtabs/vtabs>_<7801./packageExtend/components/vtabs-content/vtabs-content>_<7801./packageExtend/pages/adapt/freelayout/freelayout>_<7801./packageExtend/pages/adapt/horizontalexpansion/horizontalexpansion>_<7801./packageExtend/pages/adapt/layeredpresentation/layeredpresentation>_<7801./packageExtend/pages/adapt/linebreak/linebreak>_<7801./packageExtend/pages/adapt/pagination/pagination>_<7801./packageExtend/pages/adapt/sidenavigation/sidenavigation>_<7801./packageExtend/pages/adapt/telescopic/telescopic>_<7801./packageExtend/pages/base/article/article>_<7801./packageExtend/pages/base/badge/badge>_<7801./packageExtend/pages/base/flex/flex>_<7801./packageExtend/pages/base/footer/footer>_<7801./packageExtend/pages/base/gallery/gallery>_<7801./packageExtend/pages/base/grid/grid>_<7801./packageExtend/pages/base/icons/icons>_<7801./packageExtend/pages/base/loading/loading>_<7801./packageExtend/pages/base/loadmore/loadmore>_<7801./packageExtend/pages/base/panel/panel>_<7801./packageExtend/pages/base/preview/preview>_<7801./packageExtend/pages/extend/barrage/barrage>_<7801./packageExtend/pages/extend/emoji/emoji>_<7801./packageExtend/pages/extend/index-list/index-list>_<7801./packageExtend/pages/extend/recycle-view/recycle-view>_<7801./packageExtend/pages/extend/select-text/select-text>_<7801./packageExtend/pages/extend/sticky/sticky>_<7801./packageExtend/pages/extend/tabs/tabs>_<7801./packageExtend/pages/extend/video-swiper/video-swiper>_<7801./packageExtend/pages/extend/vtabs/vtabs>_<7801./packageExtend/pages/extend/wxml-to-canvas/wxml-to-canvas>_<7801./packageExtend/pages/form/cell/cell>_<7801./packageExtend/pages/form/form/form>_<7801./packageExtend/pages/form/slideview/slideview>_<7801./packageExtend/pages/form/uploader/uploader>_<7801./packageExtend/pages/navigation/navigation/navigation>_<7801./packageExtend/pages/navigation/tabbar/tabbar>_<7801./packageExtend/pages/operate/actionsheet/actionsheet>_<7801./packageExtend/pages/operate/dialog/dialog>_<7801./packageExtend/pages/operate/half-screen-dialog/half-screen-dialog>_<7801./packageExtend/pages/operate/msg/msg>_<7801./packageExtend/pages/operate/msg/msg_fail>_<7801./packageExtend/pages/operate/msg/msg_success>_<7801./packageExtend/pages/operate/msg/msg_text>_<7801./packageExtend/pages/operate/msg/msg_text_primary>_<7801./packageExtend/pages/operate/toptips/toptips>_<7801./packageExtend/pages/search/searchbar/searchbar",
                "./packageExtend/components/col/index.wxml",
                "./packageExtend/components/emoji/emoji.wxml",
                "./packageExtend/components/grids/grids.wxml",
                "./packageExtend/components/index-list/index-list.wxml",
                "./packageExtend/components/row/index.wxml",
                "./packageExtend/components/select-text/select-text.wxml",
                "./packageExtend/components/sticky/sticky.wxml",
                "./packageExtend/components/tabs/tabs.wxml",
                "./packageExtend/components/video-swiper/video-swiper.wxml",
                "./packageExtend/components/vtabs/vtabs.wxml",
                "./packageExtend/components/vtabs-content/vtabs-content.wxml",
                "./packageExtend/pages/adapt/freelayout/freelayout.wxml",
                "./packageExtend/pages/adapt/horizontalexpansion/horizontalexpansion.wxml",
                "./packageExtend/pages/adapt/layeredpresentation/layeredpresentation.wxml",
                "./packageExtend/pages/adapt/linebreak/linebreak.wxml",
                "./packageExtend/pages/adapt/pagination/pagination.wxml",
                "./packageExtend/pages/adapt/sidenavigation/sidenavigation.wxml",
                "./packageExtend/pages/adapt/telescopic/telescopic.wxml",
                "./packageExtend/pages/base/article/article.wxml",
                "./packageExtend/pages/base/badge/badge.wxml",
                "./packageExtend/pages/base/flex/flex.wxml",
                "./packageExtend/pages/base/footer/footer.wxml",
                "./packageExtend/pages/base/gallery/gallery.wxml",
                "./packageExtend/pages/base/grid/grid.wxml",
                "./packageExtend/pages/base/icons/icons.wxml",
                "./packageExtend/pages/base/loading/loading.wxml",
                "./packageExtend/pages/base/loadmore/loadmore.wxml",
                "./packageExtend/pages/base/panel/panel.wxml",
                "./packageExtend/pages/base/preview/preview.wxml",
                "./packageExtend/pages/extend/barrage/barrage.wxml",
                "./packageExtend/pages/extend/emoji/emoji.wxml",
                "./packageExtend/pages/extend/index-list/index-list.wxml",
                "./packageExtend/pages/extend/recycle-view/recycle-view.wxml",
                "./packageExtend/pages/extend/select-text/select-text.wxml",
                "./packageExtend/pages/extend/sticky/sticky.wxml",
                "./packageExtend/pages/extend/tabs/tabs.wxml",
                "./packageExtend/pages/extend/video-swiper/video-swiper.wxml",
                "./packageExtend/pages/extend/vtabs/vtabs.wxml",
                "./packageExtend/pages/extend/wxml-to-canvas/wxml-to-canvas.wxml",
                "./packageExtend/pages/form/cell/cell.wxml",
                "./packageExtend/pages/form/form/form.wxml",
                "./packageExtend/pages/form/slideview/slideview.wxml",
                "./packageExtend/pages/form/uploader/uploader.wxml",
                "./packageExtend/pages/navigation/navigation/navigation.wxml",
                "./packageExtend/pages/navigation/tabbar/tabbar.wxml",
                "./packageExtend/pages/operate/actionsheet/actionsheet.wxml",
                "./packageExtend/pages/operate/dialog/dialog.wxml",
                "./packageExtend/pages/operate/half-screen-dialog/half-screen-dialog.wxml",
                "./packageExtend/pages/operate/msg/msg.wxml",
                "./packageExtend/pages/operate/msg/msg_fail.wxml",
                "./packageExtend/pages/operate/msg/msg_success.wxml",
                "./packageExtend/pages/operate/msg/msg_text.wxml",
                "./packageExtend/pages/operate/msg/msg_text_primary.wxml",
                "./packageExtend/pages/operate/toptips/toptips.wxml",
                "./packageExtend/pages/search/searchbar/searchbar.wxml",
                "./packageExtend/components/select-text/select-text.wxs",
                "./packageExtend/components/sticky/sticky.wxs",
                "-gn",
                "$7061636b616765457874656e642f",
            ];
            const w = JSON.parse(await wine.wcc(args, projectPath));
            const n = JSON.parse(await node.wcc(args, projectPath));
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(
                `${storagePath}/wine-output.js`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.js`,
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
                ">_<1815",
                "-xc",
                "74>_<1815./packageAPI/pages/api/choose-address/choose-address.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/choose-invoice-title/choose-invoice-title.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/custom-message/custom-message.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/get-user-info/get-user-info.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/jump/jump.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/login/login.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/request-payment/request-payment.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/setting/setting.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/share/share.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/share-button/share-button.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/soter-authentication/soter-authentication.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/api/subscribe-message/subscribe-message.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/ar/2dmarker-ar/2dmarker-ar.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/ar/osd-ar/osd-ar.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/ar/plane-ar/plane-ar.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/ar/visionkit-basic/visionkit-basic.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/add-contact/add-contact.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/bluetooth/bluetooth.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/bluetooth/slave/slave.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/capture-screen/capture-screen.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/clipboard-data/clipboard-data.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/get-battery-info/get-battery-info.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/get-network-type/get-network-type.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/get-system-info/get-system-info.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/ibeacon/ibeacon.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/make-phone-call/make-phone-call.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/on-accelerometer-change/on-accelerometer-change.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/on-compass-change/on-compass-change.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/on-network-status-change/on-network-status-change.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/scan-code/scan-code.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/screen-brightness/screen-brightness.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/vibrate/vibrate.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/device/wifi/wifi.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/framework/resizable/resizable.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/framework/two-way-bindings/two-way-bindings.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/framework/wxs/movable.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/framework/wxs/nearby.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/framework/wxs/sidebar.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/framework/wxs/stick-top.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/framework/wxs/wxs.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/location/choose-location/choose-location.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/location/get-location/get-location.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/location/open-location/open-location.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/media/audio/audio.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/media/background-audio/background-audio.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/media/file/file.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/media/image/image.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/media/load-font-face/load-font-face.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/media/media-container/media-container.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/media/video/video.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/media/voice/voice.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/network/download-file/download-file.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/network/mdns/mdns.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/network/request/request.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/network/udp-socket/udp-socket.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/network/upload-file/upload-file.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/network/web-socket/web-socket.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/action-sheet/action-sheet.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/animation/animation.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/canvas/canvas.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/get-wxml-node-info/get-wxml-node-info.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/intersection-observer/intersection-observer.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/modal/modal.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/navigation-bar-loading/navigation-bar-loading.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/navigator/navigator.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/page-scroll/page-scroll.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/pull-down-refresh/pull-down-refresh.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/set-navigation-bar-title/set-navigation-bar-title.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/page/toast/toast.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/performance/get-performance/get-performance.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/storage/get-background-fetch-data/get-background-fetch-data.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/storage/get-background-prefetch-data/get-background-prefetch-data.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/storage/storage/storage.wxml>_<18151>_<1815mp-navigation-bar>_<1815./packageAPI/pages/worker/worker/worker.wxml>_<18151>_<1815mp-navigation-bar",
                "-lla",
                "./packageAPI/pages/api/choose-address/choose-address>_<1815./packageAPI/pages/api/choose-invoice-title/choose-invoice-title>_<1815./packageAPI/pages/api/custom-message/custom-message>_<1815./packageAPI/pages/api/get-user-info/get-user-info>_<1815./packageAPI/pages/api/jump/jump>_<1815./packageAPI/pages/api/login/login>_<1815./packageAPI/pages/api/request-payment/request-payment>_<1815./packageAPI/pages/api/setting/setting>_<1815./packageAPI/pages/api/share/share>_<1815./packageAPI/pages/api/share-button/share-button>_<1815./packageAPI/pages/api/soter-authentication/soter-authentication>_<1815./packageAPI/pages/api/subscribe-message/subscribe-message>_<1815./packageAPI/pages/ar/2dmarker-ar/2dmarker-ar>_<1815./packageAPI/pages/ar/osd-ar/osd-ar>_<1815./packageAPI/pages/ar/plane-ar/plane-ar>_<1815./packageAPI/pages/ar/visionkit-basic/visionkit-basic>_<1815./packageAPI/pages/device/add-contact/add-contact>_<1815./packageAPI/pages/device/bluetooth/bluetooth>_<1815./packageAPI/pages/device/bluetooth/slave/slave>_<1815./packageAPI/pages/device/capture-screen/capture-screen>_<1815./packageAPI/pages/device/clipboard-data/clipboard-data>_<1815./packageAPI/pages/device/get-battery-info/get-battery-info>_<1815./packageAPI/pages/device/get-network-type/get-network-type>_<1815./packageAPI/pages/device/get-system-info/get-system-info>_<1815./packageAPI/pages/device/ibeacon/ibeacon>_<1815./packageAPI/pages/device/make-phone-call/make-phone-call>_<1815./packageAPI/pages/device/on-accelerometer-change/on-accelerometer-change>_<1815./packageAPI/pages/device/on-compass-change/on-compass-change>_<1815./packageAPI/pages/device/on-network-status-change/on-network-status-change>_<1815./packageAPI/pages/device/scan-code/scan-code>_<1815./packageAPI/pages/device/screen-brightness/screen-brightness>_<1815./packageAPI/pages/device/vibrate/vibrate>_<1815./packageAPI/pages/device/wifi/wifi>_<1815./packageAPI/pages/framework/resizable/resizable>_<1815./packageAPI/pages/framework/two-way-bindings/two-way-bindings>_<1815./packageAPI/pages/framework/wxs/movable>_<1815./packageAPI/pages/framework/wxs/nearby>_<1815./packageAPI/pages/framework/wxs/sidebar>_<1815./packageAPI/pages/framework/wxs/stick-top>_<1815./packageAPI/pages/framework/wxs/wxs>_<1815./packageAPI/pages/location/choose-location/choose-location>_<1815./packageAPI/pages/location/get-location/get-location>_<1815./packageAPI/pages/location/open-location/open-location>_<1815./packageAPI/pages/media/audio/audio>_<1815./packageAPI/pages/media/background-audio/background-audio>_<1815./packageAPI/pages/media/file/file>_<1815./packageAPI/pages/media/image/image>_<1815./packageAPI/pages/media/load-font-face/load-font-face>_<1815./packageAPI/pages/media/media-container/media-container>_<1815./packageAPI/pages/media/video/video>_<1815./packageAPI/pages/media/voice/voice>_<1815./packageAPI/pages/network/download-file/download-file>_<1815./packageAPI/pages/network/mdns/mdns>_<1815./packageAPI/pages/network/request/request>_<1815./packageAPI/pages/network/udp-socket/udp-socket>_<1815./packageAPI/pages/network/upload-file/upload-file>_<1815./packageAPI/pages/network/web-socket/web-socket>_<1815./packageAPI/pages/page/action-sheet/action-sheet>_<1815./packageAPI/pages/page/animation/animation>_<1815./packageAPI/pages/page/canvas/canvas>_<1815./packageAPI/pages/page/get-wxml-node-info/get-wxml-node-info>_<1815./packageAPI/pages/page/intersection-observer/intersection-observer>_<1815./packageAPI/pages/page/modal/modal>_<1815./packageAPI/pages/page/navigation-bar-loading/navigation-bar-loading>_<1815./packageAPI/pages/page/navigator/navigator>_<1815./packageAPI/pages/page/page-scroll/page-scroll>_<1815./packageAPI/pages/page/pull-down-refresh/pull-down-refresh>_<1815./packageAPI/pages/page/set-navigation-bar-title/set-navigation-bar-title>_<1815./packageAPI/pages/page/toast/toast>_<1815./packageAPI/pages/performance/get-performance/get-performance>_<1815./packageAPI/pages/storage/get-background-fetch-data/get-background-fetch-data>_<1815./packageAPI/pages/storage/get-background-prefetch-data/get-background-prefetch-data>_<1815./packageAPI/pages/storage/storage/storage>_<1815./packageAPI/pages/worker/worker/worker",
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
            const w = JSON.parse(await wine.wcc(args, projectPath));
            const n = JSON.parse(await node.wcc(args, projectPath));
            const storagePath = path.resolve(
                __dirname,
                `miniprogram-demo/${this.test.title}`
            );
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}
            fs.writeFileSync(
                `${storagePath}/wine-output.js`,
                JSON.stringify(w, null, 4)
            );
            fs.writeFileSync(
                `${storagePath}/node-output.js`,
                JSON.stringify(n, null, 4)
            );
            assert.deepEqual(w, n);
        });
    });
});
