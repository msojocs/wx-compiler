#ifndef __WCC_H__
#define __WCC_H__
#include <iostream>
#include <map>

std::string DictToJsonString(std::map<std::string,std::string> const&);

std::string EscapeToJsonString(std::string const&);
#endif