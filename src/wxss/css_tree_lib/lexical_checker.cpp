#include "../../include/wxss.h"
#include "../../include/wxml.h"
#include <cstring>
#include <memory>
#include <sstream>
#include <strings.h>

namespace WXSS
{
    namespace CSSTreeLib
    {
        
        int off_519A58(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            // WXSS::CSSTreeLib::MarkHostRule::MarkGood
            for (auto lt = a2->offset_120.begin(); lt != a2->offset_120.end(); lt++)
            {
                if (lt->get()->offset_0 == "SELECTORS")
                {
                    auto v2 = lt->get()->offset_120;
                    if (v2.size() == 1)
                    {
                        auto v3 = v2.front().get();
                        if (v3->offset_0 == "F_SELECTOR")
                        {
                            auto v4 = v2.front()->offset_120;
                            if (v4.size() > 1)
                            {
                                auto v12 = v4[1];
                                if (v12->offset_0 == "$NAME")
                                {
                                    auto lit = v12->offset_24.GetLiteral();
                                    if (!strncmp(lit.data(), "host", 4))
                                    {
                                        a2->offset_172 = 1;
                                        if (v4.size() == 5)
                                        {
                                            auto lb = v4[3].get();
                                            if (lb->offset_0 == "SELECTOR")
                                            {
                                                auto v13 = lb->offset_120;
                                                if (v13.end() != v13.begin())
                                                {
                                                    auto lc = v13[0];
                                                    if (
                                                        lc->offset_0 == "$NAME"
                                                        && lc->offset_24.GetLiteral()[0] == '.'
                                                    )
                                                    {
                                                        a2->offset_172 = 2;
                                                        if (nullptr == v13[0]->offset_132.get())
                                                        {
                                                            std::shared_ptr<std::string> v6(new std::string());
                                                            
                                                            v13[0]->offset_132 = v6;
                                                        }
                                                        auto v7 = v13[0]->offset_24.GetLiteral();
                                                        auto v23 = v7.substr(1);
                                                        v23.insert(0, ".%%HERESUFFIX%%");
                                                        *v13[0]->offset_132 = v23;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                            return 1;
                        }
                    }
                }
            }
            
            return 1;
        }
        int off_519A70(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            // WXSS::CSSTreeLib::AttrDebugRule::MarkGood
            auto v9 = a2->offset_168;
            std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> la(new WXSS::CSSTreeLib::CSSSyntaxTree());
            std::stringstream v26;
            bool v11 = false;
            bool v12 = false;
            std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v20;
            std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v22;
            for(int i = 0; i < a2->offset_120.size(); i++)
            {
                auto cur = a2->offset_120[i];
                if (!v12)
                {
                    v12 = cur->offset_0 == "$NAME";
                    if (v12)
                    {
                        v20 = cur;
                    }
                }
                if (!v11)
                {
                    v11 = cur->offset_0 == "$ESV";
                    if (v11)
                    {
                        v22 = cur;
                    }
                }
            }
            bool v13 = v11 && v12;
            if (v13)
            {
                v26 << ";wxcs_style_";
                std::string lit = v20->offset_24.GetLiteral();
                v26 << lit << " : ";
                v26 << v22->offset_24.GetLiteral();
                v26 << ";";
                std::shared_ptr<CSSSyntaxTree> v18(new CSSSyntaxTree());
                v18->offset_0 = "FAKE_ATTR";

                std::shared_ptr<std::string> v24(new std::string());
                *v24 = v26.str();
                
                v18->offset_24.offset_4 = v24;
                v18->offset_164 = v9 + 1;
                v18->offset_168 = v9 + 2;

                a2->offset_120.push_back(v18);
                a2->offset_116 = 1;
            }
            else
            {
                a2->offset_116 = 0;
            }
            return v13;
        }
        int off_519A88(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            // WXSS::CSSTreeLib::BlackListRule::MarkGood
            auto lit = a2->offset_24.GetLiteral();
            for (int i = 0; i < a1->offset_4_vecStr.size(); i++) {
                std::string cur = a1->offset_4_vecStr[i];
                if (!strcasecmp(cur.data(), lit.data()))
                {
                    a2->offset_116 = 0;
                    return 0;
                }
            }
            return a2->offset_116;
        }
        int off_519AA0(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            // WXSS::CSSTreeLib::RuleDebugRule::MarkGood
            std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v21;
            std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v23;
            std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v25;
            for (int i = 0; i < a2->offset_120.size(); i++)
            {
                auto cur = a2->offset_120[i];
                if (cur->offset_0 == "ATTRS")
                {
                    v21 = cur;
                }
                else if (cur->offset_0 == "{")
                {
                    v23 = cur;
                }
            }
            auto v11 = v21->offset_168;
            auto v17 = a2->offset_120[0];
            bool la = false;
            for (auto cur = a2->offset_120.begin(); cur != a2->offset_120.end(); cur++)
            {
                if ((*cur)->offset_0 == "SELECTORS")
                {
                    WXSS::CSSTreeLib::RuleDebugRule::InsertOriginSelectorInfo(v17, v11 + 1, v21);
                    auto v15 = v17->offset_120;
                    for (auto v15_i = v15.begin(); v15_i != v15.end(); v15_i++)
                    {
                        if (
                            (*v15_i)->offset_0 == "SELECTOR"
                            || (*v15_i)->offset_0 == "U_SELECTOR"
                            || (*v15_i)->offset_0 == "F_SELECTOR"
                        )
                        {
                            v25 = (*v15_i)->offset_120[0];
                            la = true;
                            break;
                        }
                    }
                    break;
                }
            }
            if (la)
            {
                std::stringstream v31;
                v31 << ";wxcs_fileinfo: ";
                v31 << a2->offset_148[0];
                v31 << " " << v25->offset_24.offset_20;
                v31 << " " << v25->offset_24.offset_24 << ";";

                std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v18(new WXSS::CSSTreeLib::CSSSyntaxTree());
                v18->offset_0 = "FAKE_ATTR";
                std::shared_ptr<std::string> v29(new std::string());
                *v29 = v31.str();
                v18->offset_24.offset_4 = v29;
                v18->offset_24.offset_0 = 3;
                v18->offset_164 = v11 + 2;
                v18->offset_168 = v11 + 3;

                v21->offset_120.push_back(v18);
                a2->offset_116 = 1;
            }
            else
            {
                a2->offset_116 = 0;
            }
            return la;
        }
        int off_519AB8(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            // WXSS::CSSTreeLib::ReWriteRpxRule::MarkGood
            auto lit = a2->offset_24.GetLiteral();
            std::string v9;
            if (WXML::Rewrite::RewriteRPX(lit, v9, "%%?", "?%%"))
            {
                std::shared_ptr<std::string> str(new std::string());
                *str = v9;
                a2->offset_132 = str;
                return 1;
            }
            return 0;
        }
        int off_519AD0(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            // WXSS::CSSTreeLib::MarkSelectorRule::MarkGood
            throw "not implement";
        }
        int off_519AE8(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            // WXSS::CSSTreeLib::RewriteImgUrlRule::MarkGood
            std::string lit = a2->offset_24.GetLiteral();
            std::string v10;
            auto la = a2->offset_24.offset_24;
            int v5 = WXML::Rewrite::RewriteImg(lit, v10, a2->offset_148[0], a2->offset_24.offset_20, la);
            if (!v5)
            {
                return 1;
            }
            if (v5 == 1)
            {
                std::shared_ptr<std::string> str(new std::string());
                *str = v10;
                a2->offset_132 = str;
                return 1;
            }
            return 0;
        }
        int off_519B40(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            // WXSS::CSSTreeLib::AndRules::MarkGood
            for (int i=0; i < a1->offset_4_vecPtr.size(); i++)
            {
                auto cur = a1->offset_4_vecPtr[i];
                int ret = cur->offset_0(cur, a2);
                if (!ret)
                {
                    a2->offset_116 = 0;
                    return 0;
                }
            }
            a2->offset_116 = 1;
            return 1;
        }

        int off_519B6C(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            // WXSS::CSSTreeLib::TrueRule::MarkGood
            a2->offset_116 = 1;
            return 1;
        }
        /**
         * WXSS::CSSTreeLib::ChildRule::MarkGood
        */
        int off_519B84(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            int v8 = 1;
            for (int j = 0; j < a2->offset_120.size(); j++)
            {
                auto v6 = a2->offset_120[j];
                for (auto i = a1->offset_4_vecPair.begin(); i != a1->offset_4_vecPair.end(); i++)
                {
                    if (i->first == v6->offset_0)
                    {
                        v8 &= i->second->offset_0(i->second, v6);
                    }
                }
                
            }
            a2->offset_116 = v8;
            return v8;
        }
        int off_519B9C(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            throw "not implement";
        }
        /**
         * 00519BB4 - WXSS::CSSTreeLib::RuleChain::MarkGood
         * 
        */
        int off_519BB4(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            int ret = 0;
            for (int i = 0; i < a1->offset_4_vecPtr.size(); i++)
            {
                auto cur = a1->offset_4_vecPtr[i];
                ret = cur->offset_0(cur, a2);
            }
            
            a2->offset_116 = ret;
            return ret;
        }
        int off_519BCC(std::shared_ptr<WXSS::CSSTreeLib::Rule>& a1, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &a2)
        {
            throw "not implement";
        }

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
            /**
             * 00519BB4 - WXSS::CSSTreeLib::RuleChain::MarkGood
             * 
            */
            // Init - 0
            if (!this->offset_0)
            {
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v3(new WXSS::CSSTreeLib::Rule());
                v3->offset_0 = off_519B6C;

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v4(new WXSS::CSSTreeLib::Rule());
                v4->offset_0 = off_519B9C;

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v5(new WXSS::CSSTreeLib::Rule());
                v5->offset_0 = off_519BB4;

                // Init - 5
                this->offset_4 = v5;
                auto v44 = &this->offset_4->offset_4_vecPtr;
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v57(new WXSS::CSSTreeLib::Rule());
                v57->offset_0 = off_519B84;
                v44->push_back(v57);
                v44->push_back(v3);
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v59(new WXSS::CSSTreeLib::Rule());
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v61(new WXSS::CSSTreeLib::Rule());
                // Init - 10
                v61->offset_4_vecPtr.push_back(v59);
                if (a3) {
                    std::shared_ptr<WXSS::CSSTreeLib::Rule> v92(new WXSS::CSSTreeLib::Rule());
                    v92->offset_0 = off_519AA0;
                    v61->offset_4_vecPtr.push_back(v92);
                }
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v63(new WXSS::CSSTreeLib::Rule());
                v63->offset_0 = off_519A58;
                v61->offset_4_vecPtr.push_back(v63);
                v57->offset_4_vecPair.emplace_back("RULE", v61);
                // Init - 15
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v65(new WXSS::CSSTreeLib::Rule());
                v65->offset_0 = off_519B84;

                v57->offset_4_vecPair.emplace_back("MULTIRULE", v65);
                v65->offset_4_vecPair.emplace_back("RULES", this->offset_4);
                // Init - 20
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v67(new WXSS::CSSTreeLib::Rule());
                v67->offset_0 = off_519BB4;

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v69(new WXSS::CSSTreeLib::Rule());
                v69->offset_0 = off_519B84;
                
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v71(new WXSS::CSSTreeLib::Rule());
                v71->offset_0 = off_519AD0;

                v67->offset_4_vecPtr.push_back(v69);
                v67->offset_4_vecPtr.push_back(v71);

                v59->offset_4_vecPair.emplace_back("SELECTORS", v67);
                // Init - 25
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v77(new WXSS::CSSTreeLib::Rule());
                v77->offset_0 = off_519B84;
                v69->offset_4_vecPair.emplace_back("SELECTOR", v77);

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v79(new WXSS::CSSTreeLib::Rule());
                v79->offset_0 = off_519B84;
                v77->offset_4_vecPair.emplace_back("$NAME", v79);
                // Init - 30
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v81(new WXSS::CSSTreeLib::Rule());
                v81->offset_0 = off_519B40;
                v69->offset_4_vecPair.emplace_back("F_SELECTOR", v81);

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v83(new WXSS::CSSTreeLib::Rule());
                v83->offset_0 = off_519B84;
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v85(new WXSS::CSSTreeLib::Rule());
                v85->offset_0 = off_519BCC;
                // v85->
                v81->offset_4_vecPtr.push_back(v83);
                v81->offset_4_vecPtr.push_back(v85);
                
                // Init - 35
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v87(new WXSS::CSSTreeLib::Rule());
                v87->offset_0 = off_519A88;
                v87->offset_4_vecStr.push_back("root");
                v83->offset_4_vecPair.emplace_back("$NAME", v87); 
                v77->offset_4_vecPair.emplace_back("SELECTOR", v77);

                // Init - 40
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v73(new WXSS::CSSTreeLib::Rule());
                
                v73->offset_0 = off_519BB4;
                v59->offset_4_vecPair.emplace_back("ATTRS", v73);

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v75(new WXSS::CSSTreeLib::Rule());
                v75->offset_0 = off_519B84;
                v73->offset_4_vecPtr.push_back(v75);
                v73->offset_4_vecPtr.push_back(v3);

                std::shared_ptr<WXSS::CSSTreeLib::Rule> v24(new WXSS::CSSTreeLib::Rule());
                v24->offset_0 = off_519BB4;
                v75->offset_4_vecPair.emplace_back("ATTR", v24);

                // Init - 45
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v25(new WXSS::CSSTreeLib::Rule());
                v25->offset_0 = off_519B40;
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v26(new WXSS::CSSTreeLib::Rule());
                v26->offset_0 = off_519B84;
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v27(new WXSS::CSSTreeLib::Rule());
                v27->offset_0 = off_519AB8;
                v26->offset_4_vecPair.emplace_back("$ESV", v27);

                v25->offset_4_vecPtr.push_back(v26);
                if (a3)
                {
                    std::shared_ptr<WXSS::CSSTreeLib::Rule> v28(new WXSS::CSSTreeLib::Rule());
                    v28->offset_0 = off_519A70;
                    v25->offset_4_vecPtr.push_back(v28);
                }
                v24->offset_4_vecPtr.push_back(v25);

                // Init - 50
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v29(new WXSS::CSSTreeLib::Rule());
                v29->offset_0 = off_519B84;
                std::shared_ptr<WXSS::CSSTreeLib::Rule> v30(new WXSS::CSSTreeLib::Rule());
                v30->offset_0 = off_519AE8;
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
                this->offset_4->offset_4_vecPtr.front()->offset_0(this->offset_4, a2);
            }
        }
            
    }

} // namespace WXSS