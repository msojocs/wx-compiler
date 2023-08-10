#include "../../include/wxss.h"

namespace WXSS
{
    namespace CSSTreeLib
    {
        LexicalChecker::LexicalChecker(/* args */)
        {
        }
        LexicalChecker::~LexicalChecker(/* args */)
        {
        }
        LexicalChecker* LexicalChecker::instance = NULL;
        std::mutex LexicalChecker::m;
        LexicalChecker* LexicalChecker::GetInstance(bool a2)
        {
            std::lock_guard<std::mutex> lock(m);
            if (instance == NULL) {
                instance = new WXSS::CSSTreeLib::LexicalChecker();
                instance->Init(a2);
            }
            return instance;
        }
        void LexicalChecker::Init(bool a3)
        {
            // Init - 0
            if (!this->offset_0)
            {
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v3(new WXSS::CSSTreeLib::Rule());
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v4(new WXSS::CSSTreeLib::Rule());
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v5(new WXSS::CSSTreeLib::Rule());
                // Init - 5
                this->offset_4 = v5;
                auto v44 = &this->offset_4->offset_4_vecPtr;
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v57(new WXSS::CSSTreeLib::Rule());
                
                v44->push_back(v57);
                v44->push_back(v3);
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v59(new WXSS::CSSTreeLib::Rule());
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v61(new WXSS::CSSTreeLib::Rule());
                // Init - 10
                v61->offset_4_vecPtr.push_back(v59);
                if (a3) {
                    std::shared_ptr<WXSS::CSSTreeLib::Rule> v92(new WXSS::CSSTreeLib::Rule());
                    // off_519AA0
                    v61->offset_4_vecPtr.push_back(v92);
                }
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v63(new WXSS::CSSTreeLib::Rule());
                // off_519A58
                v61->offset_4_vecPtr.push_back(v63);
                v57->offset_4_vecPair.emplace_back("RULE", v61);
                // Init - 15
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v65(new WXSS::CSSTreeLib::Rule());
                // off_519B84
                v57->offset_4_vecPair.emplace_back("MULTIRULE", v65);
                v65->offset_4_vecPair.emplace_back("RULES", this->offset_4);
                // Init - 20
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v67(new WXSS::CSSTreeLib::Rule());
                // off_519BB4

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v69(new WXSS::CSSTreeLib::Rule());
                // off_519B84
                
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v71(new WXSS::CSSTreeLib::Rule());
                // off_519AD0

                v67->offset_4_vecPtr.push_back(v69);
                v67->offset_4_vecPtr.push_back(v71);

                v59->offset_4_vecPair.emplace_back("SELECTORS", v67);
                // Init - 25
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v77(new WXSS::CSSTreeLib::Rule());
                // off_519B84
                v69->offset_4_vecPair.emplace_back("SELECTOR", v77);

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v79(new WXSS::CSSTreeLib::Rule());
                // off_519B84
                v77->offset_4_vecPair.emplace_back("$NAME", v79);
                // Init - 30
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v81(new WXSS::CSSTreeLib::Rule());
                // off_519B40
                v69->offset_4_vecPair.emplace_back("F_SELECTOR", v81);

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v83(new WXSS::CSSTreeLib::Rule());
                // off_519B84
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v85(new WXSS::CSSTreeLib::Rule());
                // off_519BCC
                // v85->
                v81->offset_4_vecPtr.push_back(v83);
                v81->offset_4_vecPtr.push_back(v85);
                
                // Init - 35
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v87(new WXSS::CSSTreeLib::Rule());
                // off_519A88
                v87->offset_4_vecStr.push_back("root");
                v83->offset_4_vecPair.emplace_back("$NAME", v87); 
                v77->offset_4_vecPair.emplace_back("SELECTOR", v77);

                // Init - 40
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v73(new WXSS::CSSTreeLib::Rule());
                // off_519BB4
                v59->offset_4_vecPair.emplace_back("ATTRS", v73);

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v75(new WXSS::CSSTreeLib::Rule());
                // off_519B84
                v73->offset_4_vecPtr.push_back(v75);
                v73->offset_4_vecPtr.push_back(v3);

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v24(new WXSS::CSSTreeLib::Rule());
                // off_519BB4
                v75->offset_4_vecPair.emplace_back("ATTR", v24);

                // Init - 45
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v25(new WXSS::CSSTreeLib::Rule());
                // off_519B40
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v26(new WXSS::CSSTreeLib::Rule());
                // off_519B84
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v27(new WXSS::CSSTreeLib::Rule());
                // off_519AB8
                v26->offset_4_vecPair.emplace_back("$ESV", v27);

                v25->offset_4_vecPtr.push_back(v26);
                if (a3)
                {
                    std::shared_ptr<WXSS::CSSTreeLib::Rule> v28(new WXSS::CSSTreeLib::Rule());
                    // off_519A70
                    v25->offset_4_vecPtr.push_back(v28);
                }
                v24->offset_4_vecPtr.push_back(v25);

                // Init - 50
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v29(new WXSS::CSSTreeLib::Rule());
                // off_519B84
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v30(new WXSS::CSSTreeLib::Rule());
                // off_519AE8
                v29->offset_4_vecPair.emplace_back("$ESV", v29);

                v24->offset_4_vecPtr.push_back(v29);
                v24->offset_4_vecPtr.push_back(v3);

                // Init - 55
                this->offset_0 = true;
            }
        }
        void LexicalChecker::Traval(std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> & a2)
        {
            if (this->offset_0)
            {
                
            }
            throw "not implement";
        }
            
    }

} // namespace WXSS