import assert from "assert";
import path from "path";
import linux from '../../../runner/binary-linux'
import windows from '../../../runner/binary-windows'
import * as fs from 'fs'

describe("wcsc", function () {
    describe("LazyLoad: node output should deep equal with wine", function () {
        // afterEach(function(){
        //   if(this.currentTest.state === 'failed'){
        //     console.error('failed', this.currentTest)
        //   }
        // })
        it("主界面", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../../projects/miniprogram-demo/miniprogram"
            );
            const args: string[] = [
                "-db",
                "-pc",
                "12",
                "./page/component/index.wxss",
                "./page/API/index.wxss",
                "./page/cloud/index.wxss",
                "./page/extend/index.wxss",
                "./component/navigation-bar/navigation-bar.wxss",
                "./components/navigation-bar/index.wxss",
                "./components/page-scroll/index.wxss",
                "./page/API/components/set-tab-bar/set-tab-bar.wxss",
                "./miniprogram_npm/miniprogram-barrage/index.wxss",
                "./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxss",
                "./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxss",
                "./miniprogram_npm/wxml-to-canvas/index.wxss",
                "./app.wxss",
                "./common/common-skyline.wxss",
                "./common/reset.wxss",
                "./common/lib/weui.wxss",
                "./page/common/index-skyline.wxss",
                "-ll",
            ];
            const w = JSON.parse(await windows.wcsc(args, projectPath));
            const n = JSON.parse(await linux.wcsc(args, projectPath));
            const storagePath = path.resolve(__dirname, `miniprogram-demo/${this.test?.title}`)
            try {
                fs.mkdirSync(storagePath, {recursive: true});
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
        it("接口-设置界面标题", async function () {
            const projectPath = path.resolve(
                __dirname,
                "../../../projects/miniprogram-demo/miniprogram/"
            );
            const args = ["-db","-pc","74","./packageAPI/pages/api/login/login.wxss","./packageAPI/pages/api/get-user-info/get-user-info.wxss","./packageAPI/pages/api/request-payment/request-payment.wxss","./packageAPI/pages/api/jump/jump.wxss","./packageAPI/pages/api/share/share.wxss","./packageAPI/pages/api/share-button/share-button.wxss","./packageAPI/pages/api/custom-message/custom-message.wxss","./packageAPI/pages/api/subscribe-message/subscribe-message.wxss","./packageAPI/pages/api/choose-address/choose-address.wxss","./packageAPI/pages/api/choose-invoice-title/choose-invoice-title.wxss","./packageAPI/pages/api/soter-authentication/soter-authentication.wxss","./packageAPI/pages/api/setting/setting.wxss","./packageAPI/pages/ar/visionkit-basic/visionkit-basic.wxss","./packageAPI/pages/ar/plane-ar/plane-ar.wxss","./packageAPI/pages/ar/2dmarker-ar/2dmarker-ar.wxss","./packageAPI/pages/ar/osd-ar/osd-ar.wxss","./packageAPI/pages/page/set-navigation-bar-title/set-navigation-bar-title.wxss","./packageAPI/pages/page/navigation-bar-loading/navigation-bar-loading.wxss","./packageAPI/pages/page/navigator/navigator.wxss","./packageAPI/pages/page/pull-down-refresh/pull-down-refresh.wxss","./packageAPI/pages/page/animation/animation.wxss","./packageAPI/pages/page/action-sheet/action-sheet.wxss","./packageAPI/pages/page/modal/modal.wxss","./packageAPI/pages/page/toast/toast.wxss","./packageAPI/pages/page/canvas/canvas.wxss","./packageAPI/pages/page/get-wxml-node-info/get-wxml-node-info.wxss","./packageAPI/pages/page/page-scroll/page-scroll.wxss","./packageAPI/pages/page/intersection-observer/intersection-observer.wxss","./packageAPI/pages/device/clipboard-data/clipboard-data.wxss","./packageAPI/pages/device/bluetooth/bluetooth.wxss","./packageAPI/pages/device/bluetooth/slave/slave.wxss","./packageAPI/pages/device/screen-brightness/screen-brightness.wxss","./packageAPI/pages/device/vibrate/vibrate.wxss","./packageAPI/pages/device/add-contact/add-contact.wxss","./packageAPI/pages/device/wifi/wifi.wxss","./packageAPI/pages/device/get-network-type/get-network-type.wxss","./packageAPI/pages/device/on-network-status-change/on-network-status-change.wxss","./packageAPI/pages/device/get-system-info/get-system-info.wxss","./packageAPI/pages/device/on-compass-change/on-compass-change.wxss","./packageAPI/pages/device/make-phone-call/make-phone-call.wxss","./packageAPI/pages/device/scan-code/scan-code.wxss","./packageAPI/pages/device/on-accelerometer-change/on-accelerometer-change.wxss","./packageAPI/pages/device/capture-screen/capture-screen.wxss","./packageAPI/pages/device/ibeacon/ibeacon.wxss","./packageAPI/pages/device/get-battery-info/get-battery-info.wxss","./packageAPI/pages/media/image/image.wxss","./packageAPI/pages/media/voice/voice.wxss","./packageAPI/pages/media/file/file.wxss","./packageAPI/pages/media/load-font-face/load-font-face.wxss","./packageAPI/pages/media/background-audio/background-audio.wxss","./packageAPI/pages/media/video/video.wxss","./packageAPI/pages/media/audio/audio.wxss","./packageAPI/pages/media/media-container/media-container.wxss","./packageAPI/pages/location/get-location/get-location.wxss","./packageAPI/pages/location/open-location/open-location.wxss","./packageAPI/pages/location/choose-location/choose-location.wxss","./packageAPI/pages/network/request/request.wxss","./packageAPI/pages/network/web-socket/web-socket.wxss","./packageAPI/pages/network/upload-file/upload-file.wxss","./packageAPI/pages/network/download-file/download-file.wxss","./packageAPI/pages/network/mdns/mdns.wxss","./packageAPI/pages/network/udp-socket/udp-socket.wxss","./packageAPI/pages/storage/storage/storage.wxss","./packageAPI/pages/storage/get-background-fetch-data/get-background-fetch-data.wxss","./packageAPI/pages/storage/get-background-prefetch-data/get-background-prefetch-data.wxss","./packageAPI/pages/performance/get-performance/get-performance.wxss","./packageAPI/pages/worker/worker/worker.wxss","./packageAPI/pages/framework/two-way-bindings/two-way-bindings.wxss","./packageAPI/pages/framework/wxs/wxs.wxss","./packageAPI/pages/framework/resizable/resizable.wxss","./packageAPI/pages/framework/wxs/movable.wxss","./packageAPI/pages/framework/wxs/sidebar.wxss","./packageAPI/pages/framework/wxs/stick-top.wxss","./packageAPI/pages/framework/wxs/nearby.wxss","./app.wxss","./common/common-skyline.wxss","./common/reset.wxss","./common/lib/weui.wxss","./component/navigation-bar/navigation-bar.wxss","./components/navigation-bar/index.wxss","./components/page-scroll/index.wxss","./page/API/index.wxss","./page/API/components/set-tab-bar/set-tab-bar.wxss","./page/cloud/index.wxss","./page/common/index-skyline.wxss","./page/component/index.wxss","./page/extend/index.wxss","./miniprogram_npm/miniprogram-barrage/index.wxss","./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxss","./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxss","./miniprogram_npm/wxml-to-canvas/index.wxss","--subpackage","packageAPI","-ll"]
            const w = JSON.parse(await windows.wcsc(args, projectPath));
            const n = JSON.parse(await linux.wcsc(args, projectPath));
            const storagePath = path.resolve(__dirname, `miniprogram-demo/${this.test?.title}`)
            try {
                fs.mkdirSync(storagePath, {recursive: true});
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
    });
});
