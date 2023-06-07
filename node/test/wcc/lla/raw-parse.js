
const path = require("path");
const fs = require("fs");
const { spawn } = require("child_process");

const wxmlParser = (()=>{
    const getFileArr = (code)=>{
        // 获取x数组并解析
        const indexArr = eval(code.match(/var x=(\[.*\]);/)[1]);
        return indexArr;
    }
    const parseGZFuncMap = (code)=>{
        const exp = `function gz\\$(.*?)\\(\\)\\{[\\s\\S]*?__WXML_GLOBAL__\\.ops_cached\\.\\$.*?\n}`;
        const gzs = code.matchAll(new RegExp(exp, 'g'));
        const gzFunc = {}
        for (const gz of gzs) {
            gzFunc[`gz$${gz[1]}`] = gz[0];
        }
        return gzFunc;
    }
    const parseDepsMap = (code, fileArr)=>{

        // 获取所有依赖 _ai函数 被引入的文件, 文件
        // _ai(i, depPath, e, mainPath, r, c)
        const deps = code.matchAll(
            /_ai\(.*?,x\[(\d+)\],.*?,x\[(\d+)\],\d+,\d+\)/g
        );
        // 处理依赖
        const depsResult = {}
        for (let dep of deps) {
            const file = fileArr[dep[2]]
            let depFile = fileArr[dep[1]]
            depFile = `./${path.join(path.dirname(file), depFile)}`
            if(depsResult[file]){
                depsResult[file].push(depFile)
            }else{
                depsResult[file] = [depFile]
            }
        }
        return depsResult
    }
    const parseDMEMap = (code)=>{
        // ti: import依赖引入
        const regExp = /d_\[x\[(\d+)\]\]={}[\s\S]*?e_\[x\[\d+\]\]={f:m\d+,j:\[.*?\],i:\[.*?\],ti:\[(.*?)\],ic:\[.*?\]}/g;
        const ms = code.matchAll(regExp);
        const mFunc = {}
        for (const m of ms) {
            mFunc[`x[${m[1]}]`] = m[0]
        }
        return mFunc
    }
    const parseNvRequireCode = (code)=>{
        const ret = code.match(/(__WXML_GLOBAL__\.ops_set\.\$.*?=[\s\S]*)var x=\[/)
        return ret[1]
    }
    const parseCSCode = (code)=>{
        const cs = code.match(/var cs([\s\S]*?)function gz/);
        return cs[1];
    }
    const parse = (data, code)=>{
        data.nv_require = parseNvRequireCode(code)
        data.cs = parseCSCode(code)
        data.gz = parseGZFuncMap(code)
        data.fileArr = getFileArr(code);
        data.deps = parseDepsMap(code, data.fileArr)
        data.dme = parseDMEMap(code)
    }
    return {
        parse
    }
})()

const data = fs.readFileSync('/home/msojocs/Documents/Work/compiler/test/wcc/lla/miniprogram-demo/初次加载1/linux_output.js')
const code = data.toString();

const fileArr = wxmlParser.getFileArr(code)
// console.log(fileArr)
const gzFunc = wxmlParser.parseGZFuncMap(code)
// console.log(gzFunc)
const deps = wxmlParser.parseDepsMap(code, fileArr)
// console.log(deps)
const mFunc = wxmlParser.parseDMEMap(code)
const nvRequire = wxmlParser.parseNvRequireCode(code)
console.log(nvRequire)