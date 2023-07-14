#include "../../include/wxml.h"

namespace WXML
{
    
    namespace EXPRLib
    {
        
            ExprSyntaxTree::ExprSyntaxTree(/* args */)
            {

            }
            ExprSyntaxTree::~ExprSyntaxTree()
            {

            }
            void ExprSyntaxTree::RenderAsOps(
                std::stringstream & a2,
                std::string const& a3,
                bool & a4
                )
            {
                // RenderAsOps - 0
                a2 << "[";
                if (this->offset_0[0] == '$')
                {
                    if (this->offset_0 == "$VAR")
                    {
                        std::string v47 = this->offset_24.GetLiteral();
                        WXML::EXPRLib::OutputAsStringOrKeyWord(a2, v47, a3, a4);
                    }
                    else if(this->offset_0 == "$STRING")
                    {
                        a2 << WXML::EXPRLib::OPShort::CONST << ",'";
                        std::string v6 = this->offset_24.GetLiteral();
                        // this->off
                        WXML::Rewrite::ToStringCode(v6.data() + 1, v6.length() - 2,a2);
                        const char off_5542FA[] = {'\'','\0','[','\0'};
                        a2 << off_5542FA;
                    }
                    else
                    {
                        a2 << WXML::EXPRLib::OPShort::CONST << ",'";
                        std::string v33 = this->offset_24.GetLiteral();
                        a2 << v33;

                    }
                    a2 << "]";
                    return ;

                }
                // RenderAsOps - 5
                if (
                    this->offset_0[0] == 'O'
                    && this->offset_0[1] == 'P'
                    && this->offset_0[2] == '_'
                    )
                {
                    if (this->offset_0 == "OP_PATH")
                    {
                        if (this->offset_52.size() != 1)
                        {
                            a2 << "]";
                            return;
                        }
                        a2 << "[" << WXML::EXPRLib::OPShort::GET_FROM_ENV << "],";
                        
                        this->offset_52[0]->RenderAsOps(a2, a3, a4);
                        a2 << "]";
                        return;
                    }
                    if (this->offset_0 == "OP_LIST")
                    {
                        a2 << "[" << WXML::EXPRLib::OPShort::MAKE_LIST << "],";
                        if (this->offset_52.size() == 0)
                        {
                            a2 << "]";
                            return;
                        }
                        this->offset_52[0]->RenderAsOps(a2, a3, a4);
                        a2 << "]";
                        return;
                        
                    }
                    if (this->offset_0 == "OP_LIST_CONCAT")
                    {
                        a2 << "[" << WXML::EXPRLib::OPShort::CON_LIST << "]";
                        for (int i = 0; i < this->offset_52.size(); i++)
                        {
                            a2 << ",";
                            this->offset_52[i]->RenderAsOps(a2, a3, a4);
                        }

                    }
                    else if (this->offset_0 == "OP_DICT_CONCAT")
                    {
                        a2 << "[" << WXML::EXPRLib::OPShort::UNION_KV << "]";
                        for (int i = 0; i < this->offset_52.size(); i++)
                        {
                            a2 << ",";
                            this->offset_52[i]->RenderAsOps(a2, a3, a4);
                        }
                    }
                    else if (this->offset_0 == "OP_MAKE_DICT")
                    {
                        a2 << "[" << WXML::EXPRLib::OPShort::MAKE_KV << "],'";
                        const char off_5542FA[] = {'\'','\0','[','\0'};
                        a2 << off_5542FA;
                        std::string v18 = this->offset_52[0]->offset_24.GetLiteral();
                        a2 << v18 << "',";
                        if (this->offset_52.size() <= 1)
                        {
                            a2 << "[" << "[7],";
                            this->offset_52[0]->RenderAsOps(a2, a3, a4);
                            a2 << "]";
                        }
                        else
                        {
                            this->offset_52[0]->RenderAsOps(a2, a3, a4);
                        }
                    }
                    else
                    {
                        if (this->offset_0 == "OP_EXPAND")
                        {
                            a2 << "[" << WXML::EXPRLib::OPShort::EX_DICT << "],";
                            this->offset_52[0]->RenderAsOps(a2, a3, a4);
                            
                            a2 << "]";
                            return;

                        }
                        if (this->offset_0 == "OP_DICT")
                        {
                            a2 << "[" << WXML::EXPRLib::OPShort::GET_NAME << "]";
                            for (int i = 0; i < this->offset_52.size(); i++)
                            {
                                a2 << ",";
                                this->offset_52[i]->RenderAsOps(a2, a3, a4);
                            
                            }
                        }
                        else if (this->offset_0 == "OP_FUNC")
                        {
                            a2 << "[" << WXML::EXPRLib::OPShort::DO_FUNC << "]";
                            for (int i = 0; i < this->offset_52.size(); i++)
                            {
                                a2 << ",";
                                this->offset_52[i]->RenderAsOps(a2, a3, a4);
                            
                            }
                            
                        }
                    }

                }
                // RenderAsOps - 10
                else
                {
                    a2 << "[" << WXML::EXPRLib::OPShort::AOP;
                    a2 << ",'" << this->offset_0 << "'],";
                    for (int i = 0; i < this->offset_52.size(); i++)
                    {
                        if (i)
                        {
                            a2 << ",";
                        }
                        this->offset_52[i]->RenderAsOps(a2, a3, a4);
                    }
                    
                }
                // RenderAsOps - 15
                a2 << "]";
            }
    }
}