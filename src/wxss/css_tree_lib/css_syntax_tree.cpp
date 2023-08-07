#include "../../include/wxss.h"
#include "../../include/wxml.h"
#include <sstream>

namespace WXSS
{
    namespace CSSTreeLib
    {
        CSSSyntaxTree::CSSSyntaxTree(/* args */)
        {
        }
        
        CSSSyntaxTree::~CSSSyntaxTree()
        {
        }

        void CSSSyntaxTree::RenderCode(std::string & a2, bool a3)
        {
            if (this->offset_116)
            {
                if (!this->offset_172)
                {

                }
            }
            throw "not implement";
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
                        std::string v14 = this->offset_148.substr(2, this->offset_148.length() - 7);
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
                        std::string v14 = this->offset_148.substr(2, this->offset_148.length() - 7);
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
    }

} // namespace WXSS