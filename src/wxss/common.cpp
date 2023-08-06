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
    int LintAndParseCSSList(std::map<std::string,std::string> const&, std::string&, std::string&, std::string&, int, bool, bool, bool, std::string const&)
    {
        throw "not implement";
    }
    int NewLintAndParseCSSList(std::map<std::string,std::string> const&, std::vector<std::string> &, std::string&, std::string&, int, bool, std::string const&, std::string const&)
    {
        throw "not implement";
    }
    
}