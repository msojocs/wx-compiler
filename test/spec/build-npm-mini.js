const ci = require('miniprogram-ci');
const path = require('path')

/**
 * 这是用于构建小程序npm的脚本
 */
const argv = process.argv.slice(2);
const projectPath = argv[0];
(async () => {
    const project = new ci.Project({
        appid: 'wxsomeappid',
        type: 'miniProgram',
        projectPath: projectPath,
        privateKeyPath: path.resolve(__dirname, 'empty-key'),
        ignores: ['node_modules/**/*'],
    })
    // 在有需要的时候构建npm
    const warning = await ci.packNpm(project, {
        ignores: ['pack_npm_ignore_list'],
        reporter: (infos) => { console.log(infos) }
    })
    console.warn(warning)
    // 可对warning进行格式化
    /*
        warning.map((it, index) => {
                return `${index + 1}. ${it.msg}
        \t> code: ${it.code}
        \t@ ${it.jsPath}:${it.startLine}-${it.endLine}`
            }).join('---------------\n')
    */
    // 完成构建npm之后，可用ci.preview或者ci.upload
})()