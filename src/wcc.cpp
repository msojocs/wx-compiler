#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include "include/file.h"
#include "include/usage.h"
#include "include/string_utils.h"
#include "include/wxml.h"

using namespace std;

int main(int argc, const char **argv)
{

    try
    {

        string gwxMark = "$gwx";
        string splitMarkStr = " ";
        bool hasConfigParam = false;
        string configPathLocation;
        vector<string> paramList;
        string configData;

        // 第一个参数是程序路径，忽略
        for (int i = 1; i < argc; i++)
        {

            if (!string("--config-path").compare(argv[i]))
            {
                hasConfigParam = i + 1 < argc;
            }
            if (hasConfigParam)
            {
                // 有--config-path参数，下一个参数是路径，跳过
                i++;
                configPathLocation = argv[i];
            }
            else
            {
                paramList.emplace_back(argv[i]);
            }
        }

        // 有配置文件，从配置文件解析
        if (hasConfigParam)
        {
            int ret = readFile(configPathLocation.c_str(), configData);
            string line;
            if (0 == ret)
            {
                while ((line = getNextArg(configData, "\n")).size() > 0)
                {
                    paramList.emplace_back(line);
                }
            }
        }
        int mark = 0;
        bool isReadFromStdin = false;
        bool version = false;
        bool hasXCParam = false;
        bool hasCompleteCodeParam = false;
        bool isLLA = false;
        bool hasLL = false;
        string xc_Or_completeCode_Param;
        string outputFileName;
        vector<string> fileList;
        vector<string> splitedData;
        map<string, string> mapData1;
        map<string, string> fileContentMap;
        map<string, vector<string>> componentListMap;
        for (int i = 0; i < paramList.size(); i++)
        {
            string param = paramList[i];
            if (param[0] != '-')
            {
                // 不是参数名，跳过
                fileList.push_back(param);
                continue;
            }

            // 是参数名-xxx
            switch (param[1])
            {
            case 'd':
                // output code for debug
                /* code */
                if (!param[2])
                {
                    mark |= 2u;
                    continue;
                }
                if (param[2] == 's')
                {
                    mark |= 4u;
                    continue;
                }
                break;
            case 's':
                // read from stdin
                /* code */
                if (param[2] == 't')
                {
                    mark |= 8u;
                    continue;
                }
                if (i + 1 < paramList.size())
                {
                    fileList.push_back(paramList[i + 1]);
                    isReadFromStdin = true;
                    continue;
                }
                break;
            case 'v':
                // 版本信息
                /* code */
                if (param[2] == 'b')
                    mark |= 0x10u;
                else
                    version = true;
                continue;
                break;
            case 'x':
                // -xc output simplified code for custom component
                /* code */
                if (param[2] == 'c' && i + 1 < paramList.size())
                {
                    hasXCParam = true;
                    if (paramList[i + 1][0] != '-')
                    {
                        xc_Or_completeCode_Param.assign(paramList[i + 1]);
                        i++;
                    }
                    continue;
                }
                break;
            case 'c':
                // -cc: output compelete code for custom component
                /* code */
                if (param[2] == 'c' && i + 1 < paramList.size())
                {
                    hasCompleteCodeParam = true;
                    if (paramList[i + 1][0] != '-')
                    {
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
                if (i + 1 < paramList.size())
                {
                    outputFileName = paramList[i + 1];
                    i++;
                    continue;
                }
                break;
            case 'g':
                // -gn gwxMark
                /* code */
                if (param[2] == 'n' && i + 1 < paramList.size())
                {
                    gwxMark.assign(paramList[i + 1]);
                    i++;
                    continue;
                }
                break;

            case 'p':
                /* code */
                mark |= 0x20u;
                continue;
                break;

            case 't':
                /* code */
                mark |= 1u;
                continue;
                break;

            case 'i':
                /* code */
                mark |= 0x40u;
                continue;
                break;

            default:
                break;
            }
            // switch end

            if (param == "--split")
            {
                if (i + 1 < paramList.size())
                {
                    splitMarkStr = paramList[i + 1];
                    i++;
                    continue;
                }
            }

            // -cb
            if (param[1] == 'c' && param[2] == 'b')
            {
                string callbackFile = paramList[i + 1];
                string callbackData;
                readFile(callbackFile.c_str(), callbackData);
                if (!callbackData.empty())
                {
                    mapData1["life_cycle_callback_content"] = callbackData;
                }
            }
            else
            {
                if (!param.compare("--pm"))
                {
                    // 参数是--pm
                    if (i + 1 < paramList.size())
                    {
                        mapData1["plain_text_marker"] = paramList[i + 1];
                        continue;
                    }
                }
                if (param[1] == 'l' && param[2] == 'l')
                {
                    // -ll
                    if (param[3] != 'w')
                    {
                        // 不是 -llw
                        if (param[3] != 'a')
                        {
                            // 不是 -lla
                            printf("Error: expected -llw or -lla, but got %s\n", param.c_str());
                            return -1;
                        }
                        isLLA = true;
                    }
                    string splitMark;
                    if (!splitMarkStr.compare(" "))
                    {
                        // 空格
                        splitMark = ",";
                    }
                    else
                    {
                        // 不是空格
                        splitMark = splitMarkStr;
                    }
                    // 分割 -llw -lla 接下来的一个参数
                    split(splitedData, paramList[i + 1], splitMark);
                    i++;
                    hasLL = true;
                }
            }
        }

        if (version)
        {
            std::string versionInfo;
            WXML::Compiler::GetVersionInfo(versionInfo, "global");
            if (!outputFileName.empty())
            {
                FILE *f;
                f = fopen(outputFileName.c_str(), "w");
                fprintf(f, "%s\n", versionInfo.c_str());
                fclose(f);
            }
        }

        if (fileList.empty())
        {
            usage(argc, argv);
            return 0;
        }

        if (isReadFromStdin)
        {
            string content;
            readFile(0, content);
            fileContentMap[fileList[0]] = content;
        }
        else
        {

            // 读取文件内容
            for (int i = 0; i < fileList.size(); i++)
            {
                string content;
                readFile(fileList[i].c_str(), content);
                fileContentMap[fileList[i]] = content;
            }
        }

        // 此if条件x64dbg得出
        if (!xc_Or_completeCode_Param.empty())
        {
            string data;
            vector<string> allComponentList;
            data = getNextArg(xc_Or_completeCode_Param, splitMarkStr);
            unsigned long long count = strtoull(&data[0], 0, 10);
            for (unsigned long long i = 0; i < count; i++)
            {
                vector<string> componentList;
                string arg1 = getNextArg(xc_Or_completeCode_Param, splitMarkStr);
                data = getNextArg(xc_Or_completeCode_Param, splitMarkStr);
                unsigned long long jCount = strtoull(&data[0], 0, 10);
                for (unsigned long long i = 0; i < jCount; i++)
                {
                    string componentName = getNextArg(xc_Or_completeCode_Param, splitMarkStr);
                    componentList.push_back(componentName);
                    // TODO: 确认逻辑是否正确
                    auto it = std::find(allComponentList.begin(), allComponentList.end(), componentName);
                    if (it == allComponentList.end())
                    {
                        allComponentList.push_back(componentName);
                    }
                }
                auto it = componentListMap.lower_bound(arg1);
                if (it == componentListMap.end() || arg1 < it->first)
                {
                    componentListMap.emplace(arg1, componentList);
                }
            }
            componentListMap["ALL"] = allComponentList;
        }

        //
        if (hasLL)
        {
            // 处理文件路径
            for (int i = 0; i < splitedData.size(); i++)
            {
                string path = splitedData[i];
                if (path[0] == '.' && path[1] == '/')
                {
                    // 以"./"开头，去掉前两个字符
                    splitedData[i] = path.substr(2);
                }
            }
            map<string, string> outputMap1;
            map<string, string> outputMap2;
            map<string, vector<string>> vecFileContentMap2;
            const char off_5403C3[] = {'s', '\0', 'e', '\0'};
            int compilerResult = 0;
            string errorMessage;

            compilerResult = WXML::Compiler::CompileLazy(
                fileContentMap,
                errorMessage,
                outputMap1,
                outputMap2,         // map<string, string>
                vecFileContentMap2, // std::map<std::string,std::vector<std::string>>
                componentListMap,  // componentListMap
                splitedData,
                mapData1,
                isLLA,
                gwxMark,
                mark,
                10,
                &off_5403C3[2],
                off_5403C3,
                "gg",
                "e_",
                "d_",
                "p_",
                "\0",
                "boxofchocolate",
                "$gdwx",
                "f_");
            // while(!outputMap1.empty())
            // {
            //     /**
            //      * v60可能值： 0xF30D70:0xF30DB8:"miniprogram_npm/miniprogram-recycle-view/recycle-view"
            //     */
            //     // if(v60 == "__COMMON__")
            //     // {

            //     // }
            // }

            // if()
            if (1)
            {
                string helperCode;
                WXML::Compiler::WXMLHelperCode(helperCode);
                string data = "var __wxAppData=__wxAppData||{};var __wxAppCode__=__wxAppCode__||{};var global=global||{};var __WXML_GLOBAL__="
                              "__WXML_GLOBAL__||{entrys:{},defines:{},modules:{},ops:[],wxs_nf_init:undefined,total_ops:0};var Component=Comp"
                              "onent||function(){};var definePlugin=definePlugin||function(){};var requirePlugin=requirePlugin||function(){};"
                              "var Behavior=Behavior||function(){};var __vd_version_info__=__vd_version_info__||{};var __GWX_GLOBAL__=__GWX_G"
                              "LOBAL__||{};var __globalThis=(typeof __vd_version_info__!=='undefined'&&typeof __vd_version_info__.globalThis!"
                              "=='undefined')?__vd_version_info__.globalThis:(typeof window!=='undefined'?window:globalThis);";
                data = data + helperCode;
                outputMap1["__COMMON__"] = data;
            }
            else
            {
                string helperCode;
                WXML::Compiler::WXMLHelperCode(helperCode);
                string commonData = "var __wxAppData=__wxAppData||{};var __wxAppCode__=__wxAppCode__||{};var global=global||{};var __WXML_GLOBAL__="
                                    "__WXML_GLOBAL__||{entrys:{},defines:{},modules:{},ops:[],wxs_nf_init:undefined,total_ops:0};var Component=Comp"
                                    "onent||function(){};var definePlugin=definePlugin||function(){};var requirePlugin=requirePlugin||function(){};"
                                    "var Behavior=Behavior||function(){};var __vd_version_info__=__vd_version_info__||{};var __GWX_GLOBAL__=__GWX_G"
                                    "LOBAL__||{};var __globalThis=(typeof __vd_version_info__!=='undefined'&&typeof __vd_version_info__.globalThis!"
                                    "=='undefined')?__vd_version_info__.globalThis:(typeof window!=='undefined'?window:globalThis);";
                commonData += helperCode;
                commonData = commonData.append(outputMap1["__COMMON__"]);

                outputMap1["__COMMON__"] = commonData;
            }

            string dep = ";var __WXML_DEP__=__WXML_DEP__||{};";
            // TODO: 起始并不是0
            for (string j = "";;)
            {
                /* code */
                if (j == "")
                    break;

                if (j[11] != j[10])
                {
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
            outputMap1["__COMMON__"].append("");
            if (compilerResult)
            {
                // CompileLazy出现异常
                // 标准错误输出
                fprintf(stderr, "Error %d: %s\n", 1, "123");
            }
            else
            {
                FILE *f = stdout;
                if (!outputFileName.empty())
                    f = fopen(outputFileName.c_str(), "w");
                // DictToJsonString
                // DictToJsonString
                fprintf(f, " {\"generateFunctionContent\":%s,\"generateFunctionName\":%s} ", "", "");
                fclose(f);
            }
        }
        else
        {
            const char off_5403C3[] = {'s', '\0', 'e', '\0'};
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
            //            '\n',
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
            if (compilerResult)
            {
                f = stderr;
                fprintf(f, "%s\n", "error...");
            }
            else
            {
                f = stdout;
                if (!outputFileName.empty())
                {
                    f = fopen(outputFileName.c_str(), "w");
                }
                fprintf(f, "%s\n", "result...");
                fclose(f);
            }
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}