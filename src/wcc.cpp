#include <iostream>
#include <vector>
#include "include/file.h"
#include "include/usage.h"

using namespace std;

int main(int argc, char **argv) {

    string gwxMark = "$gwx";
    string blankStr = " ";
    bool hasConfigParam = false;
    string configPathLocation;
    vector<string> paramList;
    string configData;

    for (int i = 1; i < argc; i++)
    {
        
        if (!string("--cofig-path").compare(argv[i])) {
            hasConfigParam = i + 1 < argc;
        }
        if (hasConfigParam) {
            // 有--config-path参数，下一个参数是路径，跳过
            i++;
            configPathLocation = argv[i];
        }else {
            paramList.emplace_back(argv[i]);
        }

    }

    // 有配置文件，从配置文件解析
    if (hasConfigParam) {
        int ret = readFile(configPathLocation, configData);
        string line;
        if (0 == ret) {
            getNextArg(line, configData, '\n');
            paramList.emplace_back(line);
        }
    }
    int mark = 0;
    bool end = false;
    bool version = false;
    bool hasXCParam = false;
    string xcParam;
    bool hasCallbackParam = false;
    string callbackParam;
    string outputFileName;
    vector<char> temp;
    for (int i = 0; i < paramList.size(); i++)
    {
        string param = paramList[i];
        if (param[0] != '-') {
            // 不是参数名，跳过
            temp.push_back(param[0]);
            continue;
        }

        // 是参数名-xxx
        switch (param[1])
        {
        case 'd':
        // output code for debug
            /* code */
            if(!param[2]){
                mark |= 2u;
                continue;
            }
            if(param[2] == 's') {
                mark |= 4u;
                continue;
            }
            break;
        case 's':
        // read from stdin
            /* code */
            if(param[2] == 't') {
                mark |= 8u;
                continue;
            }
            if (i + 1 < paramList.size()) {
                temp.push_back(param[2]);
                end = true;
            }
            break;
        case 'v':
        // 版本信息
            /* code */
            if (param[2] == 'b')
                mark |= 0x10u;
            else
                version = true;
            break;
        case 'x':
        // -xc output simplified code for custom component
            /* code */
            if(param[2] == 'c' && i < paramList.size()) {
                hasXCParam = true;
                if(paramList[i + 1][0] != '-') {
                    xcParam.assign(paramList[i + 1]);
                    i++;
                }
                continue;
            }
            break;
        case 'c':
        // -cc: output compelete code for custom component
        // -cb [callback.js...]
            /* code */
            if(param[2] == 'c' && i + 1 < paramList.size()) {
                hasCallbackParam = true;
                if(paramList[i + 1][0] != '-') {
                    callbackParam.assign(paramList[i + 1]);
                    i++;
                }
                continue;
            }
            break;
        case 'o':
        // -o: output destination (default stdout)
        // -om XComponentDefine
            /* code */
            if (i + 1 < paramList.size()) {
                outputFileName = paramList[i + 1];
                i++;
            }
            break;
        case 'g':
        // -gn gwxMark
            /* code */
            if (param[2] == 'n' && i + 1 < paramList.size()) {
                gwxMark.assign(paramList[i + 1]);
                i++;
            }
            break;
        
        case 'p':
            /* code */
            mark |= 0x20u;
            break;
        
        case 't':
            /* code */
            mark |= 1u;
            break;
        
        case 'i':
            /* code */
            mark |= 0x40u;
            break;
        
        default:
            break;
        }
    }
    
    

    return 0;
}