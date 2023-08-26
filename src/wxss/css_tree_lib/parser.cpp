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
            this->offset_0 = le;
            le->offset_0 = "RULES";
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
            v102->offset_0 = off_519B58;
            v102->offset_4_str = "$";
            v102->offset_28 = 1;
            this->offset_8.push_back(v102);
            
            // off_519A44
            std::shared_ptr<WXSS::CSSTreeLib::Base> v104(new WXSS::CSSTreeLib::Base());
            v104->offset_0 = off_519A44;
            v104->offset_4_int = instance->GetTopType();
            this->offset_8.push_back(v104);

            // Parse - 15
            std::shared_ptr<std::string[3]> v9(new std::string[3]());
            v9[0].assign(a3);
            v9[1].assign(a5);
            std::shared_ptr<WXSS::Token> v14(new WXSS::Token());
            v14->offset_4.reset(new std::string());
            *v14->offset_4 = a3;
            v14->offset_12 = -1;

            // Parse - 20
            int v75 = 0;
            while (true)
            {
                if (this->offset_8.begin() == this->offset_8.end() || v75 >= v118.size())
                {
                    break;
                }
                // this->offset_8.back()
                auto v116 = this->offset_8.back();
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
                if (v116->offset_0() == 1)
                {
                    auto v27 = v116->offset_4_str;
                    if (str[0] != v27[0] || str != v27)
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
                                    if (cur.offset_4.get() != nullptr)
                                    {
                                        v41 = cur.offset_4.get()->data();
                                    }
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
                        v82->offset_0 = str;
                        v82->offset_24 = cur;
                        v82->offset_148 = v9;
                        v82->offset_156 = v14;
                        v82->offset_164 = cur.offset_12;
                        v82->offset_168 = cur.offset_16 + cur.offset_12;
                        this->offset_48.push_back(v82);
                    }
                }
                // Parse - 20-5
                else if (v116->offset_0() == 3)
                {
                    this->offset_8.pop_back();
                    if (v116->offset_28 == 2)
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
                        v45->offset_168 = v44->offset_168;
                        v45->offset_120.push_back(v44);

                    }
                    else
                    {
                        int stra = v116->offset_32;
                        std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> lh(new WXSS::CSSTreeLib::CSSSyntaxTree());
                        std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v123(new WXSS::CSSTreeLib::CSSSyntaxTree());
                        v123->offset_0.assign(v116->offset_4_str);
                        for (int j = 0; j < stra; j++)
                        {
                            if (this->offset_48.begin() == this->offset_48.end())
                            {
                                a4 = "interal error: 1003";
                                return 1003;
                            }
                            auto v47 = this->offset_48.back();
                            v123->offset_120.push_back(v47);
                            this->offset_48.pop_back();
                        }
                        if (stra > 0)
                        {
                            auto v48 = v123->offset_120;
                            auto v49 = v48[stra - 1];
                            v123->offset_164 = v49->offset_164;
                            v123->offset_168 = v48[0]->offset_168;
                            v123->offset_148 = v9;
                            v123->offset_156 = v14;
                        }
                        if (!v116->offset_28)
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
                else if (v116->offset_0() == 2)
                {
                    // off_519A44
    
                    int v52 = v116->offset_4_int;
                    
                    std::string v135 = str;
                    auto v86 = instance->offset_0[v52];
                    auto strc = v86.find(v135);
                    if ( strc == v86.end() || strc->second.size() == 0)
                    {
                        std::stringstream v135;
                        v135 << a3 << "(" << cur.offset_20;
                        v135 << cur.offset_24 << "): unexpected token `";
                        std::string v63 = cur.offset_28;
                        if (cur.offset_0 != 1)
                        {
                            v63 = "$";
                            if (cur.offset_0 != 8)
                            {
                                v63 = "UNKNOWN";
                                if (cur.offset_4.get() != nullptr)
                                {
                                    v63 = *cur.offset_4.get();
                                }
                            }
                        }
                        v135 << v63 << "`";
                        a4 = v135.str();
                        return -1;
                    }
                    this->offset_8.pop_back();

                    for (int i = strc->second[0].size() - 1; i >= 0; i--)
                    {
                        auto cur = strc->second[0][i];
                        if (cur->offset_0() == 4)
                            break;
                        this->offset_8.push_back(cur);
                        
                    }
                    
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
            return 0;
        }
    }

} // namespace WXSS