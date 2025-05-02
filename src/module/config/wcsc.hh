#ifndef __WCC_HH__
#define __WCC_HH__
#include <vector>
#include <string>
#include <map>
#include <napi.h>

struct WCSCOptions
{
    std::vector<std::string> files;
    std::vector<std::string> contents;
    std::map<std::string, std::string> replaceContent;
    int pageCount = 0;
    std::string cwd;
    bool debug = false;
    std::string classPrefix;
    bool lazyload = false;
};

namespace wcsc_options
{
    bool parse_wcsc_options(Napi::Env &env, Napi::Object &src, WCSCOptions *result);
}
#endif