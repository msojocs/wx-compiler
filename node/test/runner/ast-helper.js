
const parser = require("@babel/parser");
const tool = require('./tool')


const code2ast = (str)=>{

    const nodeData = JSON.parse(str)
    
    for(let key in nodeData.generateFunctionContent){
        const nData = nodeData.generateFunctionContent[key]
    
        let nodeAST = JSON.parse(JSON.stringify(parser.parse(nData)))
        nodeAST = tool.removeVariables(nodeAST)
        nodeData.generateFunctionContent[key] = nodeAST
    }
    return nodeData
}
module.exports = {
    code2ast
}