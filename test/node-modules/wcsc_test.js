
const fs = require('fs')
const path = require('path')
const scan = require('./utils/scan')
const MODE = typeof nw === 'object' ? 'wine': 'linux'

const wcsc_options1 = {"pageCount":34,"files":["./packageComponent/pages/view/view/view.wxss","./packageComponent/pages/view/scroll-view/scroll-view.wxss","./packageComponent/pages/view/swiper/swiper.wxss","./packageComponent/pages/view/movable-view/movable-view.wxss","./packageComponent/pages/view/cover-view/cover-view.wxss","./packageComponent/pages/content/text/text.wxss","./packageComponent/pages/content/icon/icon.wxss","./packageComponent/pages/content/progress/progress.wxss","./packageComponent/pages/content/rich-text/rich-text.wxss","./packageComponent/pages/form/button/button.wxss","./packageComponent/pages/form/checkbox/checkbox.wxss","./packageComponent/pages/form/form/form.wxss","./packageComponent/pages/form/input/input.wxss","./packageComponent/pages/form/label/label.wxss","./packageComponent/pages/form/picker/picker.wxss","./packageComponent/pages/form/picker-view/picker-view.wxss","./packageComponent/pages/form/radio/radio.wxss","./packageComponent/pages/form/slider/slider.wxss","./packageComponent/pages/form/switch/switch.wxss","./packageComponent/pages/form/textarea/textarea.wxss","./packageComponent/pages/form/editor/editor.wxss","./packageComponent/pages/nav/navigator/navigator.wxss","./packageComponent/pages/media/image/image.wxss","./packageComponent/pages/media/video/video.wxss","./packageComponent/pages/media/camera/camera.wxss","./packageComponent/pages/media/live-pusher/live-pusher.wxss","./packageComponent/pages/media/live-player/live-player.wxss","./packageComponent/pages/map/map/map.wxss","./packageComponent/pages/canvas/canvas-2d/canvas-2d.wxss","./packageComponent/pages/canvas/webgl/webgl.wxss","./packageComponent/pages/open/ad/ad.wxss","./packageComponent/pages/open/open-data/open-data.wxss","./packageComponent/pages/open/web-view/web-view.wxss","./packageComponent/pages/obstacle-free/aria-component/aria-component.wxss","./app.wxss","./common/lib/weui.wxss","./miniprogram_npm/miniprogram-barrage/index.wxss","./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxss","./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxss","./miniprogram_npm/wxml-to-canvas/index.wxss","./page/API/index.wxss","./page/API/components/set-tab-bar/set-tab-bar.wxss","./page/cloud/index.wxss","./page/common/common.wxss","./page/common/index.wxss","./page/common/lib/weui.wxss","./page/component/index.wxss","./page/extend/index.wxss","./packageComponent/pages/form/editor/assets/iconfont.wxss"],"cwd":"/mnt/disk1/WeChatProjects/miniprogram-demo/miniprogram/","subPackage":"packageComponent/","replaceContent":{"./packageComponent/pages/camera-scan-code/camera-scan-code.wxss":"\n\ncamera {\n  height: 250px;\n}\n\n.btn-area {\n  margin-top: 0;\n}\n\nform {\n  margin-top: 15px;\n}\n\n.weui-cell__bd {\n  display: flex;\n  justify-content: flex-start;\n  align-items: center;\n  padding: 10px 0;\n  min-height: 30px;\n}"},"debug":true}
const wcsc_options2 = {"pageCount":9,"files":["./page/component/index.wxss","./page/API/index.wxss","./page/cloud/index.wxss","./page/extend/index.wxss","./miniprogram_npm/miniprogram-barrage/index.wxss","./miniprogram_npm/miniprogram-recycle-view/recycle-item.wxss","./miniprogram_npm/miniprogram-recycle-view/recycle-view.wxss","./miniprogram_npm/wxml-to-canvas/index.wxss","./page/API/components/set-tab-bar/set-tab-bar.wxss","./app.wxss","./common/lib/weui.wxss","./page/common/common.wxss","./page/common/index.wxss","./page/common/lib/weui.wxss"],"cwd":"/mnt/disk1/WeChatProjects/miniprogram-demo/miniprogram/","replaceContent":{"./packageComponent/pages/camera-scan-code/camera-scan-code.wxss":"\n\ncamera {\n  height: 250px;\n}\n\n.btn-area {\n  margin-top: 0;\n}\n\nform {\n  margin-top: 15px;\n}\n\n.weui-cell__bd {\n  display: flex;\n  justify-content: flex-start;\n  align-items: center;\n  padding: 10px 0;\n  min-height: 30px;\n}"},"debug":true}

const run = async (filepath) => {
    const configStr = fs.readFileSync(filepath).toString()
    const options = JSON.parse(configStr)
    options.cwd = path.join(path.dirname(filepath), options.cwd)
    console.log('cwd:', options.cwd)
    const outputPath = path.dirname(filepath) + '/output'
    console.log('outputPath:', outputPath)
    try {
        fs.mkdirSync(outputPath)
    } catch (err) {
    }
    // process.env.WX_DEBUG_COMPILER_OUTPUT = outputPath
    // console.log(process.env.WX_DEBUG_COMPILER_OUTPUT)
    const wcsc = require(`./wcc_${MODE}/lib`).wcsc;
    const wcsc_result = await wcsc(options);
    let result = wcsc_result
    if (options.lazyload){
        result = JSON.stringify(wcsc_result, null, 4)
        fs.writeFileSync(path.resolve(outputPath, `wcsc_node_${MODE}.json`), result)
    }else{
        fs.writeFileSync(path.resolve(outputPath, `wcsc_node_${MODE}.js`), result)
    }
    console.log('run done')
};


const scanFiles = function(dir) {
    var results = []
    var list = fs.readdirSync(dir)
    list.forEach(function(file) {
    	// 排除static静态目录（可按你需求进行新增）
        // if (file === 'config.json') {
        //     return false
        // }
        const filePath = dir + '/' + file
        var stat = fs.statSync(filePath)
        if (stat && stat.isDirectory()) {
            results = results.concat(scanFiles(filePath))
        } else {
        	// 过滤后缀名（可按你需求进行新增）
            // if (path.extname(filePath) === '.json') {
            //     results.push(path.resolve(__dirname, filePath))
            // }
            if (file === 'config.json') {
                results.push(path.resolve(__dirname, filePath))
            }
        }
    })
    return results
}
const init = ()=>{
    const files = scan.scanFiles(`${__dirname}/cases/wcsc`)
    console.log(files)
    for (const file of files) {
        run(file)
    }
}
module.exports = {
    init
}