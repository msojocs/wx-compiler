#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include "include/file.h"
#include "include/usage.h"
#include "include/string_utils.h"
#include "include/wxml.h"

using namespace std;

int main(int argc, const char **argv) {

    printf("argc: %d\n", argc);

    string gwxMark = "$gwx";
    string splitMarkStr = " ";
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
        int ret = readFile(configPathLocation.c_str(), configData);
        string line;
        if (0 == ret) {
            line = getNextArg(configData, "\n");
            paramList.emplace_back(line);
        }
    }
    int mark = 0;
    bool isReadFromStdin = false;
    bool version = false;
    bool hasXCParam = false;
    bool hasCompleteCodeParam = false;
    bool hasLL = false;
    string xc_Or_completeCode_Param;
    string outputFileName;
    vector<string> temp;
    vector<string> splitedData;
    map<string, string> mapData1;
    map<string, string> fileData;
    for (int i = 0; i < paramList.size(); i++)
    {
        string param = paramList[i];
        if (param[0] != '-') {
            // 不是参数名，跳过
            temp.push_back(param);
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
                temp.push_back(paramList[i + 1]);
                isReadFromStdin = true;
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
                    xc_Or_completeCode_Param.assign(paramList[i + 1]);
                    i++;
                }
                continue;
            }
            break;
        case 'c':
        // -cc: output compelete code for custom component
            /* code */
            if(param[2] == 'c' && i + 1 < paramList.size()) {
                hasCompleteCodeParam = true;
                if(paramList[i + 1][0] != '-') {
                    xc_Or_completeCode_Param.assign(paramList[i + 1]);
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
        // switch end

        if (param == "--split") {
            if (i + 1 < paramList.size()) {
                splitMarkStr = paramList[i + 1];
                i++;
                continue;
            }
        }

        // -cb
        if(param[1] == 'c' && param[2] == 'b') {
            string callbackFile = paramList[i + 1];
            string callbackData;
            readFile(callbackFile.c_str(), callbackData);
            if (!callbackData.empty()) {
                mapData1["life_cycle_callback_content"] = callbackData;
            }
        }
        else {
            if(!param.compare("--pm")) {
                // 参数是--pm
                if (i + 1 < paramList.size()) {
                    mapData1["plain_text_marker"] = paramList[i + 1];
                    continue;
                }
            }
            if (param[1] == 'l' && param[2] == 'l') {
                // -ll
                if (param[3] != 'w') {
                    // 不是 -llw
                    if (param[3] != 'a') {
                        // 不是 -lla
                        printf("Error: expected -llw or -lla, but got %s\n", param.c_str());
                        return -1;
                    }
                }
                string splitMark;
                if (!splitMarkStr.compare(" ")) {
                    // 空格
                    splitMark = ",";
                }else {
                    // 不是空格
                    splitMark = splitMarkStr;
                }
                split(splitedData, paramList[i + 1], splitMark);
                hasLL = true;
            }
        }
    }
    
    if (version) {
        std::string versionInfo;
        WXML::Compiler::GetVersionInfo(versionInfo, "global");
        if (!outputFileName.empty()) {
            FILE *f;
            f = fopen(outputFileName.c_str(), "w");
            fprintf(f, "%s\n", versionInfo.c_str());
            fclose(f);
        }
    }

    if (temp.empty()) {
        usage(argc, argv);
        return 0;
    }

    if (isReadFromStdin) {
        string content;
        readFile(0, content);
        fileData[temp[0]] = content;
    }
    else {

        // 读取文件内容
        for (int i = 0; i < temp.size(); i++)
        {
            string content;
            readFile(temp[i].c_str(), content);
            fileData[temp[i]] = content;
        }
        
    }
    
    if (true) {
        string data;
        data = getNextArg(xc_Or_completeCode_Param, splitMarkStr);
        unsigned long long count = strtoull(&data[0], 0, 10);
        for (unsigned long long i = 0; i < count; i++)
        {
            string data1 = getNextArg(xc_Or_completeCode_Param, splitMarkStr);
            data = getNextArg(xc_Or_completeCode_Param, splitMarkStr);
            unsigned long long jCount = strtoull(&data[0], 0, 10);
            vector<string> list;
            for (unsigned long long i = 0; i < jCount; i++)
            {
                string data2 = getNextArg(xc_Or_completeCode_Param, splitMarkStr);
                list.push_back(data2);
                vector<string>::iterator it = find(splitedData.begin(), splitedData.end(), data2);
                if (it == splitedData.end()) {
                    splitedData.push_back(data2);
                }
            }
            auto fileContent = fileData.lower_bound(data1);
            if (fileContent == fileData.end()) {
                // fileData.ins(data1, 5)
            }
            //TODO...
            
        }
        
    }

    //
    if (hasLL) {
        for (int i = 0; i < 999; i++)
        {
            /* code */
        }
        map<string, string> outputMap;
        const char off_5403C3[] = {'s','\0','e','\0'};
        int compilerResult = 0;
        // compilerResult = WXML::Compiler::CompileLazy(
        //            &v107,
        //            (int *)v111,
        //            outputMap,
        //            &v101,
        //            &v121,
        //            v126,
        //            (int *)&v92,
        //            &v105,
        //            v53,
        //            (int)gwxMark,
        //            mark,
        //            10,
        //            &off_5403C3[2],
        //            off_5403C3,
        //            "gg",
        //            "e_",
        //            "d_",
        //            "p_",
        //            "\0",
        //            "boxofchocolate",
        //            "$gdwx",
        //            "f_");
        // while()

        // if()
        if (1) {
            string helperCode;
            WXML::Compiler::WXMLHelperCode(helperCode);
            string data = "var __wxAppData=__wxAppData||{};var __wxAppCode__=__wxAppCode__||{};var global=global||{};var __WXML_GLOBAL__="
            "__WXML_GLOBAL__||{entrys:{},defines:{},modules:{},ops:[],wxs_nf_init:undefined,total_ops:0};var Component=Comp"
            "onent||function(){};var definePlugin=definePlugin||function(){};var requirePlugin=requirePlugin||function(){};"
            "var Behavior=Behavior||function(){};var __vd_version_info__=__vd_version_info__||{};var __GWX_GLOBAL__=__GWX_G"
            "LOBAL__||{};var __globalThis=(typeof __vd_version_info__!=='undefined'&&typeof __vd_version_info__.globalThis!"
            "=='undefined')?__vd_version_info__.globalThis:(typeof window!=='undefined'?window:globalThis);";
            data = data + helperCode;
            outputMap["__COMMON__"] = data;
        }
        else {
            string helperCode;
            WXML::Compiler::WXMLHelperCode(helperCode);
            string commonData = "var __wxAppData=__wxAppData||{};var __wxAppCode__=__wxAppCode__||{};var global=global||{};var __WXML_GLOBAL__="
            "__WXML_GLOBAL__||{entrys:{},defines:{},modules:{},ops:[],wxs_nf_init:undefined,total_ops:0};var Component=Comp"
            "onent||function(){};var definePlugin=definePlugin||function(){};var requirePlugin=requirePlugin||function(){};"
            "var Behavior=Behavior||function(){};var __vd_version_info__=__vd_version_info__||{};var __GWX_GLOBAL__=__GWX_G"
            "LOBAL__||{};var __globalThis=(typeof __vd_version_info__!=='undefined'&&typeof __vd_version_info__.globalThis!"
            "=='undefined')?__vd_version_info__.globalThis:(typeof window!=='undefined'?window:globalThis);";
            commonData += helperCode;
            commonData = commonData.append(outputMap["__COMMON__"]);

            outputMap["__COMMON__"] = commonData;
        }

        string dep = ";var __WXML_DEP__=__WXML_DEP__||{};";
        // TODO: 起始并不是0
        for (string j = ""; ; )
        {
            /* code */
            if (j == "") break;

            if (j[11] != j[10]) {
                stringstream dep;
                dep << "__WXML_DEP__[\"";
                dep << "\"]=[";

                for (int k = 0; k < 10; k++)
                {
                    /* code */
                    dep << "\"";
                    dep << "\",";
                }
                
                dep << "];";
            }
        }
        // ???
        outputMap["__COMMON__"].append("");
        if (compilerResult) {
            // CompileLazy出现异常
            // 标准错误输出
            fprintf(stderr, "Error %d: %s\n", 1, "123");
        }
        else {
            FILE *f = stdout;
            if (!outputFileName.empty())
                f = fopen(outputFileName.c_str(), "w");
            // DictToJsonString
            // DictToJsonString
            fprintf(f, " {\"generateFunctionContent\":%s,\"generateFunctionName\":%s} ", "", "");
            fclose(f);
        }
        
    }
    else {
        const char off_5403C3[] = { 's', '\0', 'e', '\0' };
        int compilerResult = 0;
        // compilerResult = WXML::Compiler::Compile(
        //            v3,
        //            &v107,
        //            (int *)v111,
        //            (unsigned __int8 **)v113,
        //            v126,
        //            &v105,
        //            v53,
        //            (int *)gwxMark,
        //            mark,
        //            10,
        //            off_5403C3[2],   // off_5403C3[2]
        //            off_5403C3,   // off_5403C3
        //            "gg",    // "gg"
        //            "e_",    // "e_"
        //            "d_",          // "d_"
        //            "p_",  // "p_"
        //            '\0',   // '\0'
        //           "boxofchocolate",   // "boxofchocolate"
        //             "$gdwx",   // "$gdwx"
        //            "f_"); // "f_"
        FILE *f;
        if (compilerResult) {
            f = stderr;
            fprintf(f, "%s\n", "error...");
        }else {
            f = stdout;
            if (!outputFileName.empty()) {
                f = fopen(outputFileName.c_str(), "w");
            }
            fprintf(f, "%s\n", "result...");
            fclose(f);
        }
    }
    return 0;
}