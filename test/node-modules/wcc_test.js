#!/usr/bin/env node

const fs = require('fs')
const path = require('path')
const scan = require('./utils/scan')
const MODE = typeof nw === 'object' ? 'wine' : 'linux'

const run = async (filepath) => {
    const configStr = fs.readFileSync(filepath).toString()
    const options = JSON.parse(configStr)
    options.cwd = path.join(filepath, options.cwd)
    const outputPath = path.dirname(filepath) + '/output'
    console.log('outputPath:', outputPath)
    try {
        fs.mkdirSync(outputPath)
    } catch (err) {
    }
    // process.env.WX_DEBUG_COMPILER_OUTPUT = outputPath
    // console.log(process.env.WX_DEBUG_COMPILER_OUTPUT)
    const wcc = require(`./wcc_${MODE}/lib`).wcc;
    const wcc_result = await wcc(options);
    let result = wcc_result
    if (!!options.lazyloadConfig){
        result = JSON.stringify(wcc_result, null, 4)
        fs.writeFileSync(path.resolve(outputPath, `wcc_node_${MODE}.json`), result)
    }else{
        fs.writeFileSync(path.resolve(outputPath, `wcc_node_${MODE}.js`), result)
    }
    console.log('run done')
};



const init = ()=>{
    const files = scan.scanFiles(`${__dirname}/cases/wcc`)
    console.log(files)
    for (const file of files) {
        run(file)
    }
}
module.exports = {
    init
}