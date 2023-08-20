
#include <iostream>
#include <vector>
#include <map>
#include "./include/usage.h"
#include "include/file.h"
#include "include/wxss.h"
#include "include/wxml.h"
#include "include/json.h"

int main(int argc, const char **argv) {
    
    // main - 0
    if (argc <= 1)
    {
        return usage(argc, argv);
    }
    // main - 5
    std::string configFilePath = "";
    std::vector<std::string> v69;
    for (int i = 1; i < argc; i++)
    {
        bool isUseConfigFile = false;
        std::string configPath = "--config-path";
        if (!configPath.compare(argv[i]))
        {
            isUseConfigFile = true;
        }
        if (isUseConfigFile)
        {
            i++;
            configFilePath = argv[i];
        }
        else
        {
            v69.emplace_back(argv[i]);
        }
    }
    // main - 10
    if (configFilePath.length() > 0)
    {
        // 使用配置文件
        std::string configData = "";
        readFile(configFilePath.data(), configData);
        while (configData.length() > 0) {
            std::string v104;
            v104 = getNextArg(configData, "\n");
            v69.emplace_back(v104);
        }
    }
    
    // main - 15
    bool v56 = false;
    /**
     * 文件列表
    */
    std::vector<std::string> v66;
    std::string v75, v83;
    int v29 = 0;
    bool v30 = false;
    bool v31 = false;
    bool v32 = false;
    bool v34 = false;
    bool v35 = false;
    bool v36 = false;
    bool v37 = false;
    std::string fileName;
    std::string v76;
    for (int i = 0; i < v69.size(); i++) {
        std::string cur = v69[i];
        if (cur[0] != '-')
        {
            if (!v56)
            {
                v66.emplace_back(v69[i]);
                continue;
            }
            v75 = i;
            v56 = false;
            continue;
        }
        switch(cur[1])
        {
            case 'o':
            {
                if (v69.size() > i + 1)
                {
                    i++;
                    fileName = v69[i];
                    v56 = false;
                    continue;
                }
            }
            break;
            case 's':
            {
                if (cur[2] == 't')
                {
                    v56 = false;
                    v34 = true;
                    continue;
                }
                if (cur[2] == 'd')
                {
                    if (v69.size() > i + 1)
                    {
                        i++;
                        v56 = false;
                        v83 = v69[i + 1];
                        v35 = true;
                        continue;
                    }
                }
                else if (v69.size() > i + 1)
                {
                    v56 = false;
                    i++;
                    v32 = true;
                    continue;
                }
            }
            break;
            case 'l':
                if (cur[2] == 'c')
                {
                    v56 = false;
                    continue;
                }
                if (cur[2] == 'l')
                {
                    v36 = true;
                    v56 = false;
                    continue;
                }
            break;
            case 'd':
                if (cur[2] == 'b')
                {
                    v56 = false;
                    v37 = true;
                    continue;
                }
            break;
            case 'j':
                if (cur[2] == 's')
                {
                    v56 = false;
                    v31 = true;
                    continue;
                }
            break;
            case 'c':
                if (cur[2] == 'p')
                {
                    v56 = true;
                    continue;
                }
            break;
            default:
                if (cur[1] == 'p' && cur[2] == 'c')
                {
                    v30 = true;
                    v29 = atoi(v69[i + 1].data());
                    i++;
                    v56 = false;
                    continue;
                }
            break;
        }
        v56 = false;
        if (!v69[i].compare("--subpackage") && v69.size() > i)
        {
            std::string v101 = "";
            v101.reserve();
            v101.append("./", 2);
            v101.append(v69[i + 1]);
            // TODO... 待检验
            v76 = v101;
        }
    }
    // main - 20
    if (v66.begin() == v66.end() && !v32 && !v35)
    {
        return usage(argc, argv);
    }
    FILE * f = stdout;
    if (fileName.length())
    {
        f = fopen(fileName.data(), "w");
    }
    /**
     * 文件内容map filename -> fileContent
    */
    std::map<std::string, std::string> v77;
    if (!v35)
    {
        for (int j=0; j < v66.size(); j++)
        {
            std::string fileContent;
            if (readFile(v66[j].data(), fileContent))
            {
                fprintf(stderr, "%s not found\n", v66[j].data());
                return 1;
            }
            v77[v66[j]] = fileContent;
        }
    }

    // main - 25
    std::string v88, v90;
    std::vector<std::string> v72;
    if (!v30)
    {
        if (!v36)
        {
            int v25;
            v25 = WXSS::LintAndParseCSSList(v77, v66[0], v88, v90, 0, v31, v37, v34, v75);
            if (v25)
            {
                fprintf(stderr, "ERR: %s\nerror file count: %d\n", v90.data(), 0);
                return 1;
            }
            return 0;
        }
        LABEL_102:

        std::string v96;

        std::string v94;
        WXSS::XCompiler lt(v77, v37, v75);
        // lt.offset_136.erase()
        // lt.offset_136.erase()

        v96.assign(lt.offset_8);
        std::map<std::string, std::string> v92;
        if (!lt.offset_0)
        {
            int ret = lt.GetCommHead(v72, v94, true, v76);
            if (ret)
            {
                fprintf(stderr, "ERR: GetCommHead ret %d", ret);
            }
            for (int i = 0; i < v72.size(); i++)
            {
                std::string v98;
                std::string cur = v72[i];
                std::string v101 = WXML::Rewrite::ToStringCode(cur);
                ret = lt.GetPageCss(v101, v98, 0);
                if (ret)
                {
                    fprintf(stderr, "INFO: GetPageCss fail ret %d", ret);
                }
                v92.emplace(cur, v98);
            }
            std::stringstream v104;
            v104 << "{\"common\":\"";
            v104 << EscapeToJsonString(v94);

            v104 << "\",\"pageWxss\":";
            v104 << DictToJsonString(v92);
            v104 << "}";
            std::string v101 = v104.str();
            
            if (ret)
            {
                fprintf(stderr, "ERR: %s\nerror file count: %d\n", v90.data(), 0);
                return 1;
            }
            fprintf(f, "%s", v101.data());
            fclose(f);
            // main - 25 - 9
            return 0;
        }
        fprintf(stderr, "ERR: wxss GetCompiledResult: %s, error file count: %d, ret %d", v96.data(), lt.offset_4, lt.offset_0);
        return 1;
    }
    // main - 30
    for (int i = 0; i < v29; i++)
    {
        v72.push_back(v66[i]);
    }
    // TODO...

    // main - 35
    
    // main - 40
    if (v36)
    {
        goto LABEL_102;
    }
    int v25 = WXSS::NewLintAndParseCSSList(v77, v72, v88, v90, 0, v37, v75, v76);
    
    if (v25)
    {
        fprintf(stderr, "ERR: %s\nerror file count: %d\n", v90.data(), 0);
        return 1;
    }
    fprintf(f, "%s", v88.data());
    fclose(f);
    // main - 45
    return 0;
}