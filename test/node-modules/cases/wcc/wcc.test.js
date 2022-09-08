const assert = require("assert");
const ASTHelper = require("../../../runner/ast-helper");
const path = require("path");
const scan = require("../../utils/scan");
const fs = require("fs");
const COMPILER = require("../../wcc_node/lib/index");

const originDE = assert.deepEqual;
assert.deepEqual = function () {
    // console.log(arguments[0])
    try {
        originDE.apply(this, arguments);
    } catch (error) {
        console.log("\t默认deepEqual检测失败，尝试检测语法");
        const dw = ASTHelper.code2ast(JSON.stringify(arguments[0]));
        const dn = ASTHelper.code2ast(JSON.stringify(arguments[1]));
        originDE(dw, dn);
    }
};

describe("module wcc", function () {
    const configPaths = scan.scanFiles(__dirname);
    for (const configPath of configPaths) {
        const casePath = path.dirname(configPath);
        const caseName = path.basename(casePath);
        const type = path.basename(path.dirname(casePath));
        const config = JSON.parse(fs.readFileSync(configPath).toString());
        describe(`${type}: node output should deep equal or equal with wine`, function () {
            it(`${type} - ${caseName}`, async function () {
                // const projectPath = path.join(casePath, config.cwd);
                const storagePath = path.join(casePath, `output`);
                config.cwd = path.join(configPath, config.cwd);
                if(!fs.existsSync(config.cwd)){
                    throw new Error('cwd not exists!')
                }

                try {
                    fs.mkdirSync(storagePath, { recursive: true });
                } catch (error) {}

                let nodeResult = await COMPILER.wcc(config);

                if(!!config.lazyloadConfig){
                    const wineResult = JSON.parse(fs.readFileSync(
                        `${casePath}/output/wine-output.json`
                    ));
                    fs.writeFileSync(`${storagePath}/node-output.json`, JSON.stringify(nodeResult, null, 4));
                    assert.deepEqual(wineResult, nodeResult);
                }else{
                    nodeResult = nodeResult.substring(0, nodeResult.length - 1);
                    const wineResult = fs.readFileSync(
                        `${casePath}/output/wine-output.js`
                    );
                    fs.writeFileSync(`${storagePath}/node-output.js`, nodeResult);
                    assert.equal(wineResult, nodeResult);
                }
            });
        });
    }
});
