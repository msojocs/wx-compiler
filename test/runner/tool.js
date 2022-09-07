
const clearNum = ["start", "end", "line", "column", "index", 'parenStart']

const FUNC = {
    '[object Object]': (ast)=>{
        for(let key in ast){
            const type = Object.prototype.toString.call(ast[key])
            // console.log(key, ' - ', type)
            if(clearNum.includes(key))ast[key] = 0
            else if(FUNC[type]){
                ast[key] = FUNC[type](ast[key])
            }else{
                // console.log('无法识别的类型:', type)
            }
        }
        if(ast.type && ast.type === 'Identifier'){
            ast.name = ''
            ast.loc.identifierName = ''
        }
        return ast
    },
    '[object Array]': (arr)=>{
        for (let i = 0; i < arr.length; i++) {
            const ele = arr[i];
            const type = Object.prototype.toString.call(ele)
            arr[i] = FUNC[type](ele)
        }
        return arr
    }

}
const removeVariables = (ast)=>{
    const type = Object.prototype.toString.call(ast)
    // console.log(type)
    if(FUNC[type]){
        return FUNC[type](ast)
    }
    return null
}

module.exports = {
    removeVariables
}