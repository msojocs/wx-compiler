
const keyword = `abstract|arguments|boolean|break|byte|case|catch|char|class|const|continue|debugger|default|delete|do|double|else|enum|eval|export|extends|false|final|finally|float|for|function|goto|if|implements|import|in|instanceof|int|interface|let|long|native|new|null|package|private|protected|public|return|short|static|super|switch|synchronized|this|throw|throws|transient|true|try|typeof|var|void|volatile|while|with|yield|Array|Date|eval|function|hasOwnProperty|Infinity|isFinite|isNaN|isPrototypeOf|length|Math|NaN|name|Number|Object|prototype|String|toString|undefined|valueOf`;
const keywords = keyword.split("|");
function delVariables(code) {
    code = "   " + code + "  ";

    let pos1 = 0,
        pos2 = 0;
    let len = code.length;
    let isVariables = false;
    let ret = "";
    while (pos1 < len) {
        pos2++;
        if (isVariables) {
            if (
                code
                    .substring(pos2, pos2 + 2)
                    .replace(/[0-9a-zA-Z_][^a-zA-Z_0-9]/g, "") == ""
            ) {
                isVariables = false;
                const vv = code.substring(pos1, pos2 + 1);
                if (keywords.includes(vv)) {
                    ret += vv;
                    //System.out.println("vv="+vv);
                }
                pos1 = pos2 + 1;
            }
        } else {
            if (
                code
                    .substring(pos2, pos2 + 2)
                    .replace(/[^\._a-zA-Z][_a-zA-Z]/, "") == ""
            ) {
                isVariables = true;
                ret += code.substring(pos1, pos2 + 1);
                //System.out.println(code.substring(pos1,pos2+1));
                pos1 = pos2 + 1;
            }
        }
        if (pos2 == len) break;
    }

    return ret.toString().trim();
    //return code.replaceAll("(?<=([^\\._a-zA-Z]))[a-zA-Z_]+[0-9_a-zA-Z]*(?=([^a-zA-Z_]))", "");
}
export{
    delVariables
}
