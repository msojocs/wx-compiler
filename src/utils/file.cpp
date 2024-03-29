#include <iostream>
#include <cstring>
#include "../include/file.h"
#include "../include/string_utils.h"

/**
 * 读取文件内容
 * 
 * @param fileName 文件名
 * @param result 用于存储文件内容
 * 
 * @return int 0成功 | -1失败
*/
int readFile (const char* fileName, std::string &result) {
    FILE *f = stdin;
    char temp[1020];
    char buf[1024];
    unsigned int len;

    result = "";
    if (fileName)
        f = fopen(fileName, "r");
    if (!f) {
        return -1;
    }
    buf[0] = 0;

    memset(buf, 0, sizeof(buf));
    while (fgets(buf, 1024, f))
    {
        len = strlen(buf);
        for (int i = 0; i < len; i++)
        {
            if (buf[i] != '\r')
                result.push_back(buf[i]);
        }
        
    }
    if (f) {
        fclose(f);
    }
    
    return 0;
}

/**
 * 
 * @param line 存储行数据的容器
 * @param data 配置内容数据
 * @param splitdMark 分割标志
*/
std::string getNextArg(std::string &data, std::string const & splitMark) {
    int pos = data.find(splitMark, 0);
    std::string lineData;
    if (pos == -1) {
        lineData.assign(data);
        data = "\0";
    }
    else {
        lineData = data.substr(0, pos);
        data = data.substr(pos + splitMark.length());
    }
    trim(lineData);
    return lineData;
}