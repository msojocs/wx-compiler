#include "../../include/wxss.h"
#include <sstream>
namespace WXSS
{
    namespace CSSTreeLib
    {
        
        Parser::Parser(/* args */)
        {
        }
        
        Parser::~Parser()
        {
        }
        
        int Parser::Parse(std::string const& a2, std::string const& a3, std::string& a4, std::string const& a5)
        {
            // Parse - 0
            WXSS::Tokenizer v125(a2.data(), a3);
            std::vector<WXSS::Token> v118;
            int ret = v125.GetTokens(v118, a4, -1);
            if (ret)
            {
                return ret;
            }

            this->offset_8.clear();
            this->offset_48.clear();

            TransitTable * instance = TransitTable::GetInstance();
            instance->Init();

            // Parse - 5
            std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> le(new WXSS::CSSTreeLib::CSSSyntaxTree());
            
            if (v118.begin() == v118.end())
            {
                return 0;
            }
            
            WXSS::Token v127;
            v127.offset_0 = 8;
            v127.offset_20 = v118.back().offset_20;
            v127.offset_24 = v118.back().offset_24;
            v127.offset_28[0] = 0;
            v118.push_back(v127);
            // Parse - 10

            std::shared_ptr<WXSS::CSSTreeLib::Base> v102(new WXSS::CSSTreeLib::Base());
            v102->offset_4_str = "$";
            this->offset_8.push_back(v102);
            
            // off_519A44
            std::shared_ptr<WXSS::CSSTreeLib::Base> v104(new WXSS::CSSTreeLib::Base());
            // v104->offset_0 = off_519A44;
            v104->offset_4_str = instance->GetTopType();
            this->offset_8.push_back(v104);

            // Parse - 15
            // 一堆东西

            // Parse - 20
            int v75 = 0;
            while (true)
            {
                if (/* ??? || */v75 >= v118.size())
                {
                    break;
                }
                auto cur = v118[v75];
                std::string str;
                switch (cur.offset_0)
                {
                case 1:
                    /* code */
                    str = cur.offset_28;
                    break;
                
                case 2:
                    /* code */
                    str = "$VALUE";
                    break;
                
                case 3:
                    /* code */
                    str = "$STRING";
                    break;
                
                case 4:
                    /* code */
                    str = "$NAME";
                    break;
                
                case 5:
                    /* code */
                    str = "$ID";
                    break;
                
                case 6:
                    /* code */
                    str = "$MULTI_EXPR";
                    break;
                
                case 7:
                    /* code */
                    str = "$$";
                    break;

                case 9:
                    /* code */
                    str = "$ESV";
                    break;
                
                default:
                    str = "$";
                    break;
                }
                // Parse - 20-0
                if (true)
                {
                    if (true)
                    {
                        std::stringstream v135;
                        if (str[0] != '$' || str[1])
                        {
                            v135 << a3 << "(";
                            v135 << cur.offset_20;
                            v135 << ":";
                            v135 << cur.offset_24;
                            v135 << "): error at token `";
                            std::string v41;
                            if (cur.offset_0 != 1)
                            {
                                v41 = "$";
                                if (cur.offset_0 != 8)
                                {
                                    v41 = "UNKNOWN";
                                    // if (cur.offset_4)
                                    // {
                                    //     v41 = cur.offset_4;
                                    // }
                                }
                            }
                            v135 << v41;
                            v135 << "`";
                            a4 = v135.str();
                        }
                        else
                        {
                            v135 << a3 << "(";
                            v135 << cur.offset_20;
                            v135 << ":";
                            v135 << cur.offset_24;
                            v135 << "): unexpected end of input or bad input";
                            a4 = v135.str();
                        }
                        return -1;
                    }
                    v75++;
                    this->offset_8.pop_back();
                    if (str[0] != '$' || str[1])
                    {
                        std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v82(new WXSS::CSSTreeLib::CSSSyntaxTree());
                        
                        this->offset_48.push_back(v82);
                    }
                }
                // Parse - 20-5
                else if (true)
                {
                    this->offset_8.pop_back();
                    if (2)
                    {
                        if (this->offset_48.begin() == this->offset_48.end())
                        {
                            a4 = "interal error: 1001";
                            return 1001;
                        }
                        auto v44 = this->offset_48.back();
                        this->offset_48.pop_back();
                        if (this->offset_48.begin() == this->offset_48.end())
                        {
                            a4 = "interal error: 1002";
                            return 1002;
                        }
                        auto v45 = this->offset_48.back();
                        if (v45->offset_120.begin() == v45->offset_120.end())
                        {
                            v45->offset_164 = v44->offset_164;
                        }
                        v45->offset_120.push_back(v44);

                    }
                    else
                    {
                        int stra = 1;
                        std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> lh(new WXSS::CSSTreeLib::CSSSyntaxTree());
                        std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v123(new WXSS::CSSTreeLib::CSSSyntaxTree());
                        // v123->offset_0.assign(v84->offset_4);
                        for (int j = 0; j < stra; j++)
                        {
                            if (this->offset_48.begin() == this->offset_48.end())
                            {
                                a4 = "interal error: 1003";
                                return 1003;
                            }
                            auto v47 = this->offset_48.back();
                            // lb->offset_120.push_back(v47);
                            this->offset_48.pop_back();
                        }
                        if (stra > 0)
                        {

                        }
                        int v76 = 1;
                        if (!v76)
                        {
                            if (v123->offset_120.begin() != v123->offset_120.end())
                            {
                                int sb = 0;
                                for (auto lc = v123->offset_120.size() - 1; lc > sb; lc--)
                                {
                                    auto t = v123->offset_120[sb];
                                    v123->offset_120[sb] = v123->offset_120[lc];
                                    v123->offset_120[lc] = t;
                                    sb++;
                                }
                            }
                        }
                        this->offset_48.push_back(v123);
                        
                    }

                }
                // Parse - 20-10
                else if (true)
                {
                    
                }
                // Parse - 20-15
            }
            
            // Parse - 25
            if (this->offset_48.begin() == this->offset_48.end())
            {
                a4 = "interal error: 1004";
                return 1004;
            }
            else
            {
                auto v68 = this->offset_48.back();
                this->offset_0 = v68;
            }
            // Parse - 30
            throw "not implement";
        }
    }

} // namespace WXSS