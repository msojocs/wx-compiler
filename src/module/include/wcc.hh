#ifndef __WCC_HH__
#define __WCC_HH__
#include <vector>
#include <string>
#include <map>
#include <node.h>

struct WCCOptions
{
    std::vector<std::string> files;
    std::vector<std::string> contents;
    std::map<std::string, std::string> replaceContent;
    bool verbose = false;
    bool debug = false;
    bool debugWXS = false;
    bool showNewTree = false;
    bool isPlugin = false;
    bool addTestAttre = false;
    bool independent = false;
    std::string genfuncname;
    bool isCut;
    std::string cwd;
    bool lazyload = false;
    std::string wxmlCompileConfig;
    std::string wxmlCompileConfigSplit;
    std::string lazyloadConfig;
};

bool parse_wcc_options(v8::Isolate *isolate, v8::Local<v8::Object> &src, WCCOptions *result);
#endif