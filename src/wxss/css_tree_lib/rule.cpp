#include "../../include/wxss.h"
#include <sstream>
namespace WXSS
{
    namespace CSSTreeLib
    {
        namespace RuleDebugRule
        {
            void InsertOriginSelectorInfo(
                std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> & a1,
                int a2,
                std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> & a3)
            {
                std::string v13, v15;
                
                a1->RenderCode(v13, 0);
                a1->RenderCode(v15, 1);
                if (v13 != v15)
                {
                    std::stringstream v17;
                    v17 << ";wxcs_originclass: ";
                    v17 << v13 << ";";

                    std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> lt(new WXSS::CSSTreeLib::CSSSyntaxTree());
                    lt->offset_0 = "FAKE_ATTR";
                    std::shared_ptr<std::string> str(new std::string());
                    *str = v17.str();
                    lt->offset_24.offset_4 = str;
                    lt->offset_164 = a2;
                    lt->offset_168 = a2 + 1;
                    lt->offset_24.offset_0 = 3;
                    a3->offset_120.push_back(lt);
                }
            }
        }
    }
    
}