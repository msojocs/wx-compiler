#include <iostream>
#include <cstring>
#include "../include/file.h"

/**
 * 读取文件内容
 * 
 * @param fileName 文件名
 * @param result 用于存储文件内容
 * 
 * @return int 0成功 | -1失败
*/
int readFile (std::string fileName, std::string &result) {
    FILE *f = NULL;
    char temp[1020];
    char buf[1024];
    unsigned int len;

    result = "\0";
    if (fileName.empty()) {
        return -1;
    }
    f = fopen(fileName.c_str(), "r");
    if (!f) {
        return -1;
    }
    buf[0] = 0;

    memset(buf, 0, sizeof(buf));
    while (fgets(buf, 1024, f))
    {
        len = strlen(buf);
        result.append(buf, len);
    }
    if (f) {
        fclose(f);
    }
    
    return 0;
}

std::string& trim(std::string &s) 
{
    if (s.empty()) 
    {
        return s;
    }
 
    s.erase(0,s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);
    return s;
}

/**
 * 
 * @param line 存储行数据的容器
 * @param data 配置内容数据
 * @param lineEndMark 行结束标志 \n
*/
void getNextArg(std::string &line, std::string &data, char lineEndMark) {
    int pos = data.find(lineEndMark, 0);
    std::string lineData;
    if (pos == -1) {
        lineData.assign(data);
        data = "\0";
    }
    else {
        lineData = data.substr(0, pos);
        data = data.substr(pos);
    }
    trim(lineData);
    line = lineData;
}