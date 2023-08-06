#include "../include/wxss.h"
#include "../include/wxa.h"
#include "../include/wxml.h"

namespace WXSS
{
    
    XCompiler::XCompiler(/* args */)
    {
    }
    
    XCompiler::XCompiler(std::map<std::string, std::string> const& a2, bool a3, std::string const& a4)
    {
        std::map<std::string, int> _v64;
        if (a3)
        {
            // GetInstance
        }
        else
        {
            // GetInstance
        }
        this->offset_0 = 0;
        this->offset_4 = 0;

        std::string v55;
        for (auto i = a2.begin(); i != a2.end(); i++)
        {
            WXSS::CSSTreeLib::Parser v29;
            std::string v61;
            std::string v77;
            int v47 = v29.Parse(i->second, i->first, v61, a4);
            if (v47)
            {
                this->offset_4++;
                v55 += v61 + "\n";
                this->offset_0 = v47;
            }
            else
            {
                std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v57(new WXSS::CSSTreeLib::CSSSyntaxTree());
                WXSS::CSSTreeLib::LexicalChecker v31;
                v31.Traval(v57);
                std::string v42;
                for (int j = 0; j < v57->offset_120.size(); j++)
                {
                    auto cur = v57->offset_120[j];
                    if (cur->offset_0 == "DIRECTIVE")
                    {
                        auto v8 = cur->offset_120;
                        v42 = i->first;
                        if (v8.size() > 1 && v8[0]->offset_0 == "@import")
                        {
                            std::string lit = v8[1]->offset_24.GetLiteral();
                            std::string v64 = WXSS::RemoveQuote(lit);
                            std::string v70;
                            if (v64[0] == '/')
                            {
                                std::string v74 = "." + v64;
                                if (a2.end() != a2.find(v74))
                                {
                                    v70.assign(v74);
                                }
                                v74 += ".wxss";
                                if (a2.end() != a2.find(v74))
                                {
                                    v70.assign(v74);
                                }
                            }
                            if (!v70.length())
                            {
                                MMBizWxaAppComm::PathCombine(i->first, v64, v70);
                            }
                            if (a2.find(v70) == a2.end())
                            {
                                v70 += ".wxss";
                            }
                            if (a2.find(v70) == a2.end())
                            {
                                v55 += "path `" + v64 + "` not found from `" + i->first + "`.\n";
                                this->offset_4++;
                                this->offset_0 = 3;
                            }
                            else
                            {
                                auto v34 = this->offset_56;
                                std::vector<std::string> v10 = v34[i->first];
                                v10.push_back(v70);
                                std::shared_ptr<std::string> v33(new std::string());
                                v33->assign(v70);
                                cur->offset_140 = v33;
                            }

                        }

                    }
                }
                std::string v74 = v42;
                std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v75(new WXSS::CSSTreeLib::CSSSyntaxTree());
                // this->offset_32.
                // todo...
            }
        }
        // end for
        // XCompiler - 5
        if (!this->offset_0)
        {
            for (auto j = a2.begin(); j != a2.end(); j++)
            {
                _v64[j->first] = 0;
            }
            for (auto k = a2.begin(); k != a2.end(); k++)
            {
                std::string v32 = k->first;

            }
            // XCompiler - 5 - 0
            while (true)
            {
                while (true)
                {
                    /* code */
                    break;
                }
                break;
                
            }
            
            // XCompiler - 5 - 5
            if (a2.size() != 0) // todo...
            {
                v55 += "I don't know what will happen if a snake eats its tail, but a file can not import itself.";
                this->offset_0 = 4;
                this->offset_4++;
            }
        }
        
    }
    
    XCompiler::~XCompiler()
    {
    }
    
    void XCompiler::DealRPX(std::string & a1, std::stringstream & a2)
    {
        std::string v3 = WXML::Rewrite::ToStringCode2(a1);
        WXML::GetStrForMakingCSS(v3, a2);
        a1 = "";
    }
    void XCompiler::GetHostRule(std::string &)
    {
        throw "not implement";
    }
    int XCompiler::ShowTree(std::string &)
    {
        throw "not implement";
    }
    int XCompiler::GetCompiled(std::string const&, std::string&)
    {
        throw "not implement";
    }
    void XCompiler::GetJSCompiled(std::string const&, std::string&)
    {
        throw "not implement";
    }
    int XCompiler::GetWellFormattedJSCompiled(std::string const&, std::string&)
    {
        throw "not implement";
    }
    void XCompiler::GenExpr(std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree>, std::stringstream &, std::string &)
    {
        throw "not implement";
    }
    int XCompiler::GetPageCss(std::string const&, std::string&, uint)
    {
        throw "not implement";
    }
    void XCompiler::MarkImported(std::string const&)
    {
        throw "not implement";
    }
    int XCompiler::GetCommHead(std::vector<std::string> &, std::string&, bool, std::string const&)
    {
        throw "not implement";
    }
} // namespace WXSS