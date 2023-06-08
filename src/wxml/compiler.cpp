#include "../include/wxml.h"
#include "../include/define.h"
#include <iostream>

namespace WXML{
    
    Compiler::Compiler(/* args */)
    {
    }

    Compiler::~Compiler()
    {
    }
    void Compiler::GetVersionInfo(std::string &a1, std::string a2) {
        std::stringstream result;
        result << "/*";
        result << "v0.5vv_20200413_syb_scopedata";
        result << "*/";

        result << a2;
        result << ".__wcc_version__='";
        result << "v0.5vv_20200413_syb_scopedata";
        result << "';";
        result << a2;
        result << ".__wcc_version_info__={\"customComponents\":true,\"fixZeroRpx\":true,\"propValueDeepCopy\":false};";
        result.str(a1);
    }
    void Compiler::WXMLHelperCode(std::string &result) {
        result.assign(aIfThisThisGUnd);
    }
}