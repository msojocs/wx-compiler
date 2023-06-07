#include "../include/wxml.h"
#include "../include/define.h"

namespace WXML{
    void Compiler::GetVersionInfo(int a1, int *a2) {
        std::ostream& result = std::cout;
        result << "/*";
        result << "v0.5vv_20200413_syb_scopedata";
        result << "*/";

        result << a2;
        result << ".__wcc_version__='";
        result << "v0.5vv_20200413_syb_scopedata";
        result << "';";
        result << a2;
        result << ".__wcc_version_info__={\"customComponents\":true,\"fixZeroRpx\":true,\"propValueDeepCopy\":false};";
    }
    void Compiler::WXMLHelperCode(std::string &result) {
        result.assign(aIfThisThisGUnd);
    }
}