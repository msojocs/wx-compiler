const assert = require("assert");
const ASTHelper = require("../../runner/ast-helper");
const path = require("path");
const fs = require("fs");
const COMPILER = require('../wcc_node/lib/index')

const originDE = assert.deepEqual
assert.deepEqual = function(){
    // console.log(arguments[0])
    try {
        originDE.apply(this, arguments)
    } catch (error) {
        console.log('\t默认deepEqual检测失败，尝试检测语法')
        const dw = ASTHelper.code2ast(JSON.stringify(arguments[0]))
        const dn = ASTHelper.code2ast(JSON.stringify(arguments[1]))
        originDE(dw, dn);
    }
}

describe("wcc - lla", function () {
    describe("lla: node output should deep equal with wine", function () {
        it("case1", async function () {
            const casePath = path.resolve(__dirname, './wcc/case1')
            const configPath = path.resolve(__dirname, './wcc/case1/config.json')
            const projectPath = path.resolve(
                __dirname,
                "../../examples/miniprogram-demo/miniprogram"
            );
            const storagePath = path.resolve(
                __dirname,
                `wcc/case1/output`
            );
            const config = JSON.parse(fs.readFileSync(configPath).toString());
            config.cwd = path.join(configPath, config.cwd)
            try {
                fs.mkdirSync(storagePath, { recursive: true });
            } catch (error) {}

            let nodeResult = await COMPILER.wcc(config);
            nodeResult = nodeResult.substring(0, nodeResult.length - 1)
            
            const wineResult = fs.readFileSync(`${casePath}/output/wcc_node_wine.js`)
            fs.writeFileSync(
                `${storagePath}/node-output.js`,
                nodeResult
            );
            assert.equal(wineResult, nodeResult);
        });
        
    });
});