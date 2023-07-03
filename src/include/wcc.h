#ifndef __MAIN_H__
#define __MAIN_H__
#include <iostream>
#include <map>

std::string DictToJsonString(std::map<std::string,std::string> const&);

std::string EscapeToJsonString(std::string const&);
#endif