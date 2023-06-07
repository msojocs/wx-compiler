#!/usr/bin/env node
const fs = require('fs')
const path = require('path')
console.log("---index.js----")

const WCC = require('./wcc_test')
WCC.init();
const WCSC = require('./wcsc_test')
WCSC.init();

// const WCSC = require('./wcsc_test')
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
    console.log(__dirname)
    const files = scanFiles(__dirname)
    console.log(files)
}
init()