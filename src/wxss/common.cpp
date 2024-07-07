#include "../include/wxss.h"
#include "../include/wxml.h"

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
        std::string& errMsg,
        int a5,
        bool a6,
        bool a7,
        bool a8,
        std::string const& a9)
    {
        WXSS::XCompiler v12(a1, a7, a9);
        errMsg.assign(v12.offset_8);
        int ret = v12.offset_0;
        if (!v12.offset_0)
        {
            a3 = "/*v0.4me_20200724_db*/\n";
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
    int NewLintAndParseCSSList(
        std::map<std::string,std::string> const& a1,
        std::vector<std::string> & a2,
        std::string& a3,
        std::string& a4,
        int a5,
        bool a6,
        std::string const& a7,
        std::string const& a8)
    {
        WXSS::XCompiler v32(a1, a6, a7);
        a4.assign(v32.offset_8);
        int ret = v32.offset_0;
        if (!v32.offset_0)
        {
            std::string v21;
            ret = v32.GetCommHead(a2, v21, true, a8);
            if (!ret)
            {
                a3 = "version=v0.4me_20200724_db=";
                std::string v28 = WXML::Rewrite::ToStringCode2(v21);
                v28 = v28.insert(0, "comm=");
                v28.append("=");
                a3 += v28;

                for (int i = 0; i < a2.size(); i++)
                {
                    std::string v23;

                    int pageCss = v32.GetPageCss(a2[i], v23, 2);
                    if (pageCss)
                    {
                        ret = pageCss;
                        break;
                    }
                    std::string v28 = WXML::Rewrite::ToStringCode2(v23);
                    std::string v25 = a2[i];
                    v25.append("=");
                    int v12 = 15;
                    int v14 = 15;
                    int v13 = v25.length() + v28.length();

                    if (v25.length() > 15)
                    {
                        v12 = v25.length();
                    }
                    if (v28.length() > 15)
                    {
                        v14 = v28.length();
                    }
                    std::string v31;
                    if (v13 <= v12 || v13 > v14)
                    {
                        v31 = v25.append(v28);
                    }
                    else
                    {
                        v31 = v28.insert(0, v25);
                    }
                    v31.append("=");
                    a3 += v31;
                }
                
            }
        }
        return ret;
    }
    
}