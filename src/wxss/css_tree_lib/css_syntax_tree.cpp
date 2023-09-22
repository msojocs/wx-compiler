#include "../../include/wxss.h"
#include "../../include/wxml.h"
#include <sstream>

namespace WXSS
{
    namespace CSSTreeLib
    {
        CSSSyntaxTree::CSSSyntaxTree(/* args */)
        {
            this->offset_24.offset_0 = 1;
        }
        
        CSSSyntaxTree::~CSSSyntaxTree()
        {
        }

        int RenderCode_i = 0;
        void CSSSyntaxTree::RenderCode(std::string & a2, bool a3)
        {
            RenderCode_i++;
            int inner_RenderCode_i = RenderCode_i;
            if (this->offset_116)
            {
                if (!this->offset_172)
                {
                    if (this->offset_132.get() && a3)
                    {
                        a2 += *this->offset_132;
                    }
                    else
                    {
                        a2 += this->offset_24.GetLiteral();
                    }
                    for (int i = 0; i < this->offset_120.size(); i++)
                    {
                        auto cur = this->offset_120[i];
                        if (
                            i
                            && cur->offset_164 > this->offset_120[i - 1]->offset_168
                            && a2[a2.length() - 1] != '\n'
                        )
                        {
                            a2 += " ";
                        }
                        cur->RenderCode(a2, a3);
                    }
                    if (this->offset_0 == "MEDIA_RULE" || this->offset_0 == "RULE" || this->offset_0 == "DIRECTIVE")
                    {
                        a2 += "\n";
                    }
                    
                }
            }
        }
        
        /**
         * offset_116等需要修正
        */
        void CSSSyntaxTree::Print2Stream(int a2, std::stringstream & a3)
        {
            std::string v14;
            for (int i = 0; i < a2; i++)
            {
                if (this->offset_116)
                {
                    v14 = "  ";
                }
                else
                {
                    v14 = "- ";
                }
                a3 << v14;
            }
            if (this->offset_132)
            {
                a3 << this->offset_0 << ": " << this->offset_132;
            }
            else
            {
                a3 << this->offset_0 << ": ";
                a3 << this->offset_24.GetLiteral();
            }
            a3 << std::endl;
            for (int i = 0; i < this->offset_120.size(); i++)
            {
                this->offset_120[i]->Print2Stream(a2 + 1, a3);
            }
            
        }
        
        void CSSSyntaxTree::GetHostRule(std::string & a2)
        {
            if (this->offset_172 == 1)
            {
                for (int i = 0; i < this->offset_120.size(); i++)
                {
                    auto cur = this->offset_120[i];
                    if (cur->offset_0 == "SELECTORS")
                    {
                        auto v148 = *this->offset_148;
                        std::string v14 = v148[0].substr(2, v148[0].length() - 7);
                        std::string v15 = WXML::Rewrite::ToStringCode2(v14);
                        v15.insert(0, "[is=\"");
                        v15.append("\"]");
                        a2 += v15;
                    }
                    else
                    {
                        cur->RenderCode(a2, true);
                    }
                }
                a2 += "\n";
                return;
            }
            if (this->offset_172 == 2)
            {
                for (int i = 0; i < this->offset_120.size(); i++)
                {
                    auto cur = this->offset_120[i];
                    if (cur->offset_0 != "SELECTORS")
                    {
                        cur->RenderCode(a2, true);
                    }
                    else
                    {
                        cur->RenderCode(a2, true);
                        auto v148 = *this->offset_148;
                        std::string v14 = v148[0].substr(2, v148[0].length() - 7);
                        auto v15 = WXML::Rewrite::ToStringCode2(v14);
                        v15.insert(0, "[is=\"");
                        v15.append("\"]");
                        a2 += v15;
                    }
                }
                a2 += "\n";
                return;
                
            }
            for (int i = 0; i < this->offset_120.size(); i++)
            {
                auto cur = this->offset_120[i];
                cur->GetHostRule(a2);
            }
            
        }
        
        CSSSyntaxTree& CSSSyntaxTree::operator=(CSSSyntaxTree& old)
        {
            this->offset_0 = old.offset_0;
            this->offset_24 = old.offset_24;
            this->offset_116 = old.offset_116;
            this->offset_120 = old.offset_120;
            this->offset_132 = old.offset_132;
            this->offset_140 = old.offset_140;
            this->offset_148 = old.offset_148;
            this->offset_156 = old.offset_156;
            this->offset_164 = old.offset_164;
            this->offset_168 = old.offset_168;
            this->offset_172 = old.offset_172;
            return *this;
        }
    }

} // namespace WXSS