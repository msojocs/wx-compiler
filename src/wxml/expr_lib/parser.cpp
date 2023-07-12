#include "../../include/wxml.h"

namespace WXML
{
    
    namespace EXPRLib
    {
        int off_55F220()
        {
            return 1;
        }
        int off_55F20C()
        {
            return 3;
        }
        int off_55F1E4()
        {
            return 2;
        }
        int off_55F1F8()
        {
            return 4;
        }


        Parser::Parser(/* args */)
        {
        }
        
        Parser::~Parser()
        {
        }
        int Parser::Parse(
            std::string const& a2,
            std::string const& a3,
            int a4,
            int a5,
            std::string& a6,
            bool a7)
        {
            // WXML::EXPRLib::Parser::Parse - 0
            this->offset_0.clear();
            this->offset_40.clear();
            auto ttInstance = WXML::EXPRLib::TransitTable::GetInstance();
            ttInstance->Init();
            WXML::EXPRLib::Tokenizer v77(&a2[0], a3, a4, a5);
            std::vector<WXML::EXPRLib::Token> v74;
            int ret = v77.GetTokens(v74, a6);
            if (ret)
            {
                return ret;
            }

            // WXML::EXPRLib::Parser::Parse - 5
            // tokenList是空的
            if (v74.begin() == v74.end())
            {
                std::shared_ptr<WXML::EXPRLib::ExprSyntaxTree> v8;
                this->offset_80 = v8;
                return 0;
            }

            // WXML::EXPRLib::Parser::Parse - 10
            WXML::EXPRLib::Token v82;
            v82.offset_0 = 5;
            v74.push_back(v82);

            // WXML::EXPRLib::Parser::Parse - 15
            std::shared_ptr<WXML::EXPRLib::Base> v68(new WXML::EXPRLib::Base());
            v68->offset_0 = off_55F220;
            v68->offset_4_str = "$";
            this->offset_0.push_back(v68);
            std::shared_ptr<WXML::EXPRLib::Base> v70(new WXML::EXPRLib::Base());
            v70->offset_0 = off_55F1E4;
            if (a7)
            {
                v70->offset_4_int = WXML::EXPRLib::TransitTable::GetAttrListNTType();
            }
            else
            {
                v70->offset_4_int = WXML::EXPRLib::TransitTable::GetExprNTType();
            }
            this->offset_0.push_back(v70);
            // WXML::EXPRLib::Parser::Parse - 20
            int v49 = 0;
            for(auto cur = this->offset_0.rbegin(); cur != this->offset_0.rend(); cur++)
            {
                auto v72 = *cur;
                WXML::EXPRLib::Token v84 = v74[v49]; // ???
                int v15 = v72->offset_0();
                // WXML::EXPRLib::Parser::Parse - 20-1
                if (v15 == 1)
                {
                    std::string tokenName = v84.GetTokenName();
                    if (v72->offset_4_str != tokenName || v49 >= v74.size())
                    {
                        a6 = "error at token `";
                        a6 += v84.GetLiteral();
                        a6 += "`";
                        return -1;
                    }
                    ++v49;
                    this->offset_0.pop_back();
                    if (v84.offset_0 - 1 <= 3)
                    {
                        std::shared_ptr<WXML::EXPRLib::ExprSyntaxTree> v80(new WXML::EXPRLib::ExprSyntaxTree());
                        
                        std::string v18 = v84.GetTokenName();
                        v80->offset_0 = v18;
                        this->offset_40.push_back(v80);
                        
                    }

                }
                // WXML::EXPRLib::Parser::Parse - 20-2
                else
                {
                    if (v15 == 3)
                    {
                        this->offset_0.pop_back();
                        int v47 = v72->offset_28.offset_0;
                        if (v47 == 2)
                        {
                            if (this->offset_40.begin() == this->offset_40.end())
                            {
                                a6 = "interal error: 1001, expr: `";
                                a6 += a2;
                                a6 += "`";
                                return 1001;
                            }
                            auto v78 = this->offset_40.back();
                            this->offset_40.pop_back();
                            if (this->offset_40.begin() == this->offset_40.end())
                            {
                                a6 = "interal error: 1002, expr: `";
                                a6 += a2;
                                a6 += "`";
                                return 1002;
                            }
                            auto v21 = this->offset_40.back();
                            this->offset_40.pop_back();
                            this->offset_40.push_back(v78);

                        }
                        ///////////////////////
                        else
                        {
                            std::shared_ptr<WXML::EXPRLib::ExprSyntaxTree> v22(new WXML::EXPRLib::ExprSyntaxTree());
                            std::shared_ptr<WXML::EXPRLib::ExprSyntaxTree> v78;
                            v78->offset_0.assign(v72->offset_4_str);
                            for (size_t i = 0; i < v72->offset_32; i++)
                            {
                                if (this->offset_40.begin() == this->offset_40.end())
                                {
                                    a6 = "interal error: 1003, expr: `";
                                    a6 += a2;
                                    a6 += "`";
                                    return 1003;
                                }
                                auto v23 = this->offset_40.back();
                                v78->offset_52.push_back(v23);
                                this->offset_40.pop_back();
                            }

                            if (!v47)
                            {
                                if (v78->offset_52.begin() != v78->offset_52.end())
                                {
                                    auto v51 = v78->offset_52.begin();
                                    for (auto i = v78->offset_52.rbegin(); i <  v78->offset_52.rend(); i++)
                                    {
                                        auto v80 = *v51;
                                        *v51 = *i;
                                        *i = v80;
                                        v51++;
                                    }
                                    
                                }
                            }
                            this->offset_40.push_back(v78);
                            
                        }
                    }
                    // WXML::EXPRLib::Parser::Parse - 20-3
                    if ( v15 == 2)
                    {
                        auto bnfMap = ttInstance->ret[v72->offset_4_int];
                        std::string v78 = v84.GetTokenName();
                        bool isNoBnfList = false;
                        if (bnfMap.find(v78) == bnfMap.end())
                        {
                            isNoBnfList = true;
                        }
                        else
                        {
                            std::string v80 = v84.GetTokenName();
                            std::vector<WXML::EXPRLib::BNF> v32 = bnfMap[v80];
                            isNoBnfList = v32.size() == 0;
                        }
                        if (isNoBnfList)
                        {
                            a6 = "unexpected token `";
                            a6 += v84.GetLiteral();
                            a6 += "`";
                            return -1;
                        }
                        this->offset_0.pop_back();
                        std::string v80 = v84.GetTokenName();
                        std::vector<WXML::EXPRLib::BNF> v53 = bnfMap[v80];
                        for (int i = v53.size() - 1; i >= 0; i--)
                        {
                            auto cur = v53[i];
                            if( v53[i].offset_8() == 4)
                                break;
                            this->offset_0.push_back(v53[i].offset_0[0]);
                        }
                        
                    }

                }
                // while block end

            }
            
            // WXML::EXPRLib::Parser::Parse - 25
            if (this->offset_40.begin() == this->offset_40.end())
            {
                a6 = "interal error: 1004, expr: `" + a2 + "`";
                return 1004;
            }
            else
            {
                auto v37 = this->offset_40.back();
                this->offset_80 = v37;
            }
            // WXML::EXPRLib::Parser::Parse - 30

            return 0;
        }
    }
} // namespace WXML
