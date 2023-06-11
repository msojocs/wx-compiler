#ifndef __STRING_UTILS_H__
#define __STRING_UTILS_H__
#include <iostream>
#include <vector>

std::string& trim(std::string &s);
void split(std::vector<std::string> &result, std::string source, std::string mark);

#endif