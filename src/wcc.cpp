#include <iostream>
#include <vector>
#include "include/file.h"
#include "include/usage.h"

using namespace std;

int main(int argc, char **argv) {

    string gwxMark = "$gwx";
    string blankStr = " ";
    bool hasConfigParam = false;
    string configPathData;
    vector<string> fileList;
    string configData;

    for (int i = 1; i < argc; i++)
    {
        
        if (!string("--cofig-path").compare(argv[i])) {
            hasConfigParam = i + 1 < argc;
        }
        if (hasConfigParam) {
            // 有--config-path参数，下一个参数是路径，跳过
            i++;
            configPathData = argv[i];
        }else {
            fileList.emplace_back(argv[i]);
        }

    }

    // 有配置文件，从配置文件解析
    if (hasConfigParam) {
        int ret = readFile(configPathData, configData);
        string line;
        if (0 == ret) {
            getNextArg(line, configData, '\n');
            fileList.emplace_back(line);
        }
    }
    

    return 0;
}