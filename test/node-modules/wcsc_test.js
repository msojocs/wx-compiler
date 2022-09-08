
const fs = require('fs')
const path = require('path')
const scan = require('./utils/scan')
const MODE = typeof nw === 'object' ? 'wine': 'linux'
const COMPILER = require(`./wcc_${MODE}/lib`)

const init = async ()=>{
    const configPaths = scan.scanFiles(`${__dirname}/cases/wcsc`);
    for (const configPath of configPaths) {
        const casePath = path.dirname(configPath);
        const caseName = path.basename(casePath);
        const type = path.basename(path.dirname(casePath));
        const config = JSON.parse(fs.readFileSync(configPath).toString());
        // const projectPath = path.join(casePath, config.cwd);
        const storagePath = path.join(casePath, `output`);
        config.cwd = path.join(configPath, config.cwd);
        if(!fs.existsSync(config.cwd)){
            throw new Error('cwd not exists!')
        }

        try {
            fs.mkdirSync(storagePath, { recursive: true });
        } catch (error) {}

        let nodeResult = await COMPILER.wcsc(config);

        if(config.lazyload){
            fs.writeFileSync(`${storagePath}/wine-output.json`, JSON.stringify(nodeResult, null, 4));
        }else{
            // nodeResult = nodeResult.substring(0, nodeResult.length - 1);
            fs.writeFileSync(`${storagePath}/wine-output.js`, nodeResult);
        }
    }
}
module.exports = {
    init
}