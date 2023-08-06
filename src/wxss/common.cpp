#include "../include/wxss.h"

namespace WXSS
{
    
    std::string RemoveQuote(std::string const& a2)
    {
        std::string a1;
        if (a2.length() <= 2)
        {
            a1 = "";
        }
        else
        {
            if (a2[0] == '\'' || a2[0] == '"')
            {
                a1 = a2.substr(1, a2.length() - 2);
            }
            else
            {
                a1 = a2;
            }
        }
        return a1;
    }
    int LintAndParseCSSList(
        std::map<std::string,std::string> const& a1,
        std::string& a2,
        std::string& a3,
        std::string& a4,
        int a5,
        bool a6,
        bool a7,
        bool a8,
        std::string const& a9)
    {
        WXSS::XCompiler v12(a1, a7, a9);
        a4.assign(v12.offset_8);
        int ret = v12.offset_0;
        if (!v12.offset_0)
        {
            a3 = "/*v0.4me_20190328_db*/\n";
            if (a8)
            {
                ret = v12.ShowTree(a3);
            }
            else if(a6)
            {
                ret = v12.GetWellFormattedJSCompiled(a2, a3);
            }
            else
            {
                ret = v12.GetCompiled(a2, a3);
            }
        }
        return ret;
    }
    int NewLintAndParseCSSList(std::map<std::string,std::string> const&, std::vector<std::string> &, std::string&, std::string&, int, bool, std::string const&, std::string const&)
    {
        throw "not implement";
    }
    
}