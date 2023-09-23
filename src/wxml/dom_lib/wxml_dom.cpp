
#include "../../include/wxml.h"
#include <algorithm>

namespace WXML {
    
    
    namespace DOMLib
    {
        static const char *szWXIFControlAttrs[4] = { "wx-if", "wx:if", "wx:elif", "wx:else" };
        WXMLDom::WXMLDom(/* args */)
        {
        }
        
        WXMLDom::~WXMLDom()
        {
        }

        int DealSingleTokenToOps_i = 0;
        int WXMLDom::DealSingleTokenToOps(
            std::string const& a1,
            std::string& a2,
            std::stringstream & a3,
            std::map<std::string,WXML::DOMLib::RVMOpCodePosition> & a4,
            WXML::DOMLib::Token * a5,
            bool a6,
            int a7,
            bool a8,
            WXML::DOMLib::RVMOpCodePositionRecorder * a9,
            bool a10,
            const std::map<std::string,std::string> & a11
            )
        {
            DealSingleTokenToOps_i++;
            int inner_DealSingleTokenToOps_i = DealSingleTokenToOps_i;
            // DealSingleTokenToOps - 0
            std::string v11;
            if (a8)
            {
                v11 = a5->ToString();
            }
            else
            {
                v11 = a5->ToAttrContent();
            }
            std::vector<WXML::StringTemplating::Token> v77;
            bool v77_b;
            int d = WXML::StringTemplating::Deal(&v11[0], a2, v77, v77_b);
            if (d)
            {
                throw this->Error(a1, *a5, "", "did you forget }}, ' or \"");
            }
            // DealSingleTokenToOps - 10
            if ( a8) 
            {
                auto ptm = a11.find("plain_text_marker");
                if (ptm != a11.end())
                {
                    
                    WXML::StringTemplating::Token v85;
                    v85.offset_0 = false;
                    v85.offset_4 = ptm->second;
                    
                    if (v77.begin() != v77.end() && v77[0].offset_0)
                    {
                        v77.insert(v77.begin(), v85);
                    }
                    if (v77.begin() != v77.end() && v77.back().offset_0)
                    {
                        v77.push_back(v85);
                    }
                    std::string v80 = ptm->second;
                    for (int i = 1; i < v77.size(); i++)
                    {
                        WXML::StringTemplating::Token curToken = v77[i];
                        if (curToken.offset_0)
                        {
                            if (!v77[i - 1].offset_0)
                            {
                                v77[i - 1].offset_4.append(v80);
                            }
                        }
                        else if (v77[i - 1].offset_0)
                        {
                            curToken.offset_4 = v80 + curToken.offset_4;
                        }
                    }
                }
                
            } // end a8
            // DealSingleTokenToOps - 15
            if (a7)
            {
                int v26 = 0;
                for (auto &&i : v77)
                {
                    v26 -= (i.offset_0 == 0) - 1;
                }
                
                if (v26 != a7)
                {
                    a5->offset_56 = -3;
                    a5->offset_60 = "the very attr must be an expression (surrouned by `{{..}}`)";
                    return -1;
                }

            }
            // DealSingleTokenToOps - 20
            if (v77.begin() == v77.end())
            {
                WXML::StringTemplating::Token token;
                token.offset_0 = false;
                token.offset_4 = "";
                v77.push_back(token);
            }
            // DealSingleTokenToOps - 25
            int v52 = 1;
            if (v77.size() <= 1)
            {
                v52 = 0;
                if (v77.size() == 1)
                {
                    v52 = a8 & (v77[0].offset_0 == true);
                }
            }
            a3 << "Z(";
            if (v52)
            {
                a3 << "[a,";
                a9->offset_4++;
            }
            std::vector<std::pair<std::string,WXML::DOMLib::RVMOpCodePosition>> v80;
            // DealSingleTokenToOps - 30
            std::string v27 = "nt_";
            if (a8)
                v27 = "t_";
            std::string v28 = "";
            if (a6)
            {
                v28 = "_d";
            }
            for (int i = 0; i < v77.size(); i++)
            {
                if (i)
                    a3 << ",";
                auto v62 = v77[i];
                std::string v29 = "s_";
                if (v62.offset_0)
                    v29 = "e_";
                v29.append(v27);
                v29.append(v62.offset_4);
                v29.append(v28);
                auto v63 = a4.find(v29);
                if (v63 == a4.end())
                {

                    if (v77[i].offset_0)
                    {
                        WXML::EXPRLib::Parser vp;
                        std::string v85 = "";
                        int ret = vp.Parse(v77[i].offset_4, v85, 1, 1, a2, a6);
                        if (ret)
                        {
                            a5->offset_56 = -3;
                            a5->offset_60.assign(a2);
                            a3 << "undefined";
                            break;
                        }
                        // WXML::EXPRLib::ExprSyntaxTree v70;
                        // v70.offset_0 = vp.offset_80->offset_0;
                        // v70.offset_52.push_back();
                        // v70.offset_0 = v77[i].offset_4;
                        vp.offset_80->RenderAsOps(a3, v85, v77_b);
                    }
                    else
                    {
                        a3 << "[3,'";
                        std::string r = WXML::DOMLib::removern(v77[i].offset_4);
                        WXML::Rewrite::ToStringCode(r, a3);
                        a3 << "']";
                    }
                    int v68 = a9->offset_0;
                    int v43 = -1;
                    if (v52)
                    {
                        v43 = a9->offset_4;
                    }
                    WXML::DOMLib::RVMOpCodePosition pos;
                    pos.offset_0 = a9->offset_0;
                    pos.offset_4 = v43;
                    v80.push_back({v29, pos});
                }
                else
                {
                    if (v63->second.offset_4 == -1 )
                    {
                        if (a10)
                        {

                            a3 << "z[";
                            a3 << v63->second.offset_0;
                            a3 << "][1]";
                            a9->offset_4++;
                            continue;
                        }

                        a3 << "z[";
                        a3 << v63->second.offset_0;
                    }
                    else
                    {
                        
                        a3 << "z[";
                        a3 << v63->second.offset_0;
                        if (a10)
                        {
                            a3 << "][1][";
                        }
                        else
                        {
                            a3 << "][";
                        }
                        a3 << v63->second.offset_4;
                    }
                    a3 << "]";
                }
                a9->offset_4++;
            }
            // DealSingleTokenToOps - 35
            if (v52)
                a3 << "]";
            if (a5->offset_56 == -1)
                a5->offset_56 = a9->offset_0;
            a9->offset_4 = 0;
            a9->offset_0++;
            for (auto i = v80.begin(); i != v80.end(); i++)
            {
                a4.emplace(i->first, i->second);
            }
            
            if (a10)
            {
                a3 << ",['" << WXML::Rewrite::ToStringCode(a1);
                a3 << "'," << a5->offset_8;
                a3 << "," << a5->offset_12;
                a3 << "])\n";
            }
            else
            {
                a3 << ")\n";
            }
            return 0;
        }
        int RenderAllOpsAndRecord_i = 0;
        void WXMLDom::RenderAllOpsAndRecord(
            std::string const& a2,
            std::string& a3,
            std::stringstream & a4,
            std::map<std::string, WXML::DOMLib::RVMOpCodePosition> &a5,
            WXML::DOMLib::RVMOpCodePositionRecorder *a6,
            bool a7,
            const std::map<std::string,std::string> & a8
            )
        {
            RenderAllOpsAndRecord_i++;
            int inner_RenderAllOpsAndRecord_i = RenderAllOpsAndRecord_i;
            if (this->offset_0 == "TEXTNODE")
            {
                this->DealSingleTokenToOps(a2, a3, a4, a5, &this->offset_84, 0, 0, 1, a6, a7, a8);
            }
            else
            {
                for (auto i = this->offset_48.begin(); i != this->offset_48.end(); i++)
                {
                    if (
                        i->second.offset_20
                        && this->offset_0 != "import"
                        && this->offset_0 != "include"
                    )
                    {
                        if (
                            (this->offset_0 == "wx-template" && i->first == "data")
                            || (this->offset_0 == "wx-scope" && i->first == "wx:scope-data")
                        )
                        {
                            this->DealSingleTokenToOps(a2, a3, a4, a5, &i->second, 1, 1, 0, a6, a7, a8);
                        }
                        else
                        {
                            this->DealSingleTokenToOps(a2, a3, a4, a5, &i->second, 0, 0, 0, a6, a7, a8);
                        }
                    }
                }
                for (int i = 0; i < this->offset_72.size(); i++)
                {
                    this->offset_72[i]->RenderAllOpsAndRecord(a2, a3, a4, a5, a6, a7, a8);
                }
                
            }
            return;
        }
        int RenderMeAsFunction_i = 0;
        void WXMLDom::RenderMeAsFunction(
            std::string const& a2,
            std::string const& a3,
            std::string& a4,
            std::string const& a5,
            std::stringstream & a6,
            WXML::NameAllocator * a7,
            std::string const& a8,
            std::string const& a9,
            std::string const& a10,
            std::string const& a11,
            std::string const& a12,
            char a13,
            std::string const& a14,
            bool a15,
            bool a16,
            uint a17,
            std::string const& a18
            )
        {
            RenderMeAsFunction_i++;
            int inner_RenderMeAsFunction_i = RenderMeAsFunction_i;
            // try
            // {
                std::string name;
                a7->GetNextName(name);
                if (a15)
                {
                    a6 << a12 << "[x[";
                    int id = offset_248->GetStrID(a2);
                    a6 << id;
                    a6 << "]][\"";
                    WXML::Rewrite::ToStringCode(a5, a6);
                    a6 << "\"]";
                }
                else
                {
                    a6 << "var " << a5;
                }
                a6 << "=function(";
                a6 << a8 << ",";
                a6 << a9 << ",";
                a6 << a11 << ",";
                a6 << a10 << "){";
                a6 << a13;
                if (a18.size())
                {
                    a6 << "var z=" << a18 << "()" << a13;
                }
                if (a15)
                {
                    a6 << "var " << name;
                    a6 << "=x[";
                    int id = this->offset_248->GetStrID(a2);
                    a6 << id << "]";
                    a6 << "+':";
                    WXML::Rewrite::ToStringCode(a5, a6);
                    a6 << "'" << a13 << a11 << ".wxVkey=";
                    a6 << name << a13 << a10 << ".f=$gdc(f_[\"";
                    a6 << WXML::Rewrite::ToStringCode(a2);
                    a6 << "\"],\"\",1)";
                    a6 << a13;
                    a6 << "if(" << a14 << "[" << name << "]){_wl(";
                    a6 << name << ",x[";
                    id = this->offset_248->GetStrID(a2);
                    a6 << id << "]);return}" << a13;

                    a6 << a14 << "[" << name << "]=true";
                    a6 << a13 << "try{" << a13;
                }
                std::map<std::string,std::string> v79;
                this->RenderChildren(a2, a3, a4, a11, a6, a7, a8, a9, a10, a12, a13, a16, a17, &v79);
                if (a15)
                {
                    a6 << "}catch(err){" << a13;
                    a6 << a14 << "[" << name << "]=false";
                    a6 << a13 << "throw err" << a13 << "}";
                    a6 << a13 << a14 << "[" << name << "]=false" << a13;
                }
                a6 << "return " << a11 << a13 << "}" << a13;
            // }
            // catch(const std::exception& e)
            // {
            //     std::cerr << e.what() << '\n';
            // }
            

        }
        int RewriteTree_i = 0;
        void WXMLDom::RewriteTree(void)
        {
            RewriteTree_i++;
            int inner_RewriteTree_i = RewriteTree_i;
            // RewriteTree - 0
            for (int i = 0; i < this->offset_72.size(); i++)
            {
                auto cur = this->offset_72[i];
                auto forItem = cur->offset_48.find("wx:for");
                if (forItem != cur->offset_48.end())
                {
                    WXML::DOMLib::Token v4 = forItem->second;
                    // token.offset_0 = "wx:for-items";
                    cur->offset_48.emplace("wx:for-items", v4);
                    cur->offset_48.erase("wx:for");
                }
            }

            // RewriteTree - 5
            for (int i = 0; i < this->offset_72.size(); i++)
            {
                auto cur = this->offset_72[i];
                auto forItems = cur->offset_48.find("wx:for-items");
                if (forItems == cur->offset_48.end() && cur->offset_0 != "block")
                {
                    const char **v38 = WXML::DOMLib::szWXIFControlAttrs;
                    for (size_t j = 0; j < 4; j++)
                    {
                        std::string v101 = v38[j];
                        auto v9 = cur->offset_48.find(v101);
                        if (v9 != cur->offset_48.end())
                        {
                            std::shared_ptr<WXML::DOMLib::WXMLDom> v98(new WXML::DOMLib::WXMLDom());
                            auto v11 = v9->second;
                            v98->offset_48.emplace(v101, v9->second);
                            v98->offset_0 = "block";
                            v98->offset_24.assign(cur->offset_24);
                            v98->offset_84 = cur->offset_84;
                            cur->offset_48.erase(v101);
                            v98->offset_72.push_back(cur);
                            this->offset_72[i] = v98;
                            break;
                        }
                    }
                    
                }
            }
            
            // RewriteTree - 10
            for (int i = 0; i < this->offset_72.size(); i++)
            {
                std::string v35;
                bool v52 = false;
                auto cur = this->offset_72[i];
                if (cur->offset_0 != "template")
                {
                    continue;
                }
                if (cur->offset_48.end() == cur->offset_48.find("is"))
                {
                    v52 = false;
                }
                else
                {
                    v52 = cur->offset_48.end() == cur->offset_48.find("name");
                }
                if (v52)
                {
                    v35 = "wx-template";
                }
                else
                {
                    v35 = "wx-define";
                }
                this->offset_72[i]->offset_0 = v35;
            }
            
            // RewriteTree - 15
            for (int i = 0; i < this->offset_72.size(); i++)
            {
                auto cur = this->offset_72[i];
                if (cur->offset_0 == "block")
                {
                    // this->offset_72[i]
                    // throw "not implement";
                }
            }

            // RewriteTree - 20
            for (int i = 0; i < this->offset_72.size(); i++)
            {
                auto cur = this->offset_72[i];
                if (cur->offset_0 != "wx-repeat")
                {
                    if (cur->offset_0 != "wx-define")
                    {
                        if (cur->offset_0 != "wx-import")
                        {
                            if (cur->offset_0 != "import")
                            {
                                auto v19 = cur->offset_48.find("wx:for-items");
                                if (v19 != cur->offset_48.end())
                                {
                                    std::shared_ptr<WXML::DOMLib::WXMLDom> v91(new WXML::DOMLib::WXMLDom());
                                    v91->offset_0 = "wx-repeat";
                                    v91->offset_24.assign(cur->offset_24);
                                    v91->offset_84 = cur->offset_84;
                                    v91->offset_72.push_back(cur);
                                    WXML::DOMLib::Token v21 = cur->offset_48["wx:for-items"];
                                    v91->offset_48.emplace("wx:for-items", v21);
                                    cur->offset_48.erase("wx:for-items");
                                    auto v59 = cur->offset_48.find("wx:for-item");
                                    if (cur->offset_48.end() != v59)
                                    {
                                        WXML::DOMLib::Token v22 = v59->second;
                                        v91->offset_48.emplace("wx:for-item", v22);
                                        cur->offset_48.erase("wx:for-item");
                                    }

                                    //////////////////////////////"wx:for-index"
                                    auto v63 = cur->offset_48.find("wx:for-index");
                                    if (v63 != cur->offset_48.end())
                                    {
                                        WXML::DOMLib::Token v102 = v63->second;
                                        v91->offset_48.emplace("wx:for-index", v102);
                                        cur->offset_48.erase("wx:for-index");
                                    }

                                    ///////////////////////////////"wx:key"
                                    auto v67 = cur->offset_48.find("wx:key");
                                    if (cur->offset_48.end() != v67)
                                    {
                                        WXML::DOMLib::Token v24 = v67->second;
                                        v91->offset_48.emplace("wx:key", v24);
                                        cur->offset_48.erase("wx:key");
                                    }
                                    this->offset_72[i] = v91;
                                }
                            }
                        }
                    }
                }
            }

            // RewriteTree - 25
            for (int i = 0; i < this->offset_72.size(); i++)
            {
                auto cur = this->offset_72[i];
                auto v28 = cur->offset_48.find("wx:scope-data");
                if (v28 != cur->offset_48.end())
                {
                    std::shared_ptr<WXML::DOMLib::WXMLDom> v71(new WXML::DOMLib::WXMLDom());
                    v71->offset_0 = "wx-scope";
                    v71->offset_24.assign(cur->offset_24);
                    v71->offset_84 = cur->offset_84;
                    v71->offset_72.push_back(cur);
                    WXML::DOMLib::Token v30 = cur->offset_48["wx:scope-data"];
                    v71->offset_48.emplace("wx:scope-data", v30);
                    cur->offset_48.erase("wx:scope-data");
                    this->offset_72[i] = v71;
                }
            }

            // RewriteTree - 30
            for (int i = 0; i < this->offset_72.size(); i++)
            {
                this->offset_72[i]->RewriteTree();
            }
            return;
        }
        
        void WXMLDom::RenderChildren(
            std::string const& a2,
            std::string const& a3,
            std::string& a4,
            std::string const& a5,
            std::stringstream & a6,
            WXML::NameAllocator * a7,
            std::string const& a8,
            std::string const& a9,
            std::string const& a10,
            std::string const& a11,
            char a12,
            bool a13,
            uint a14,
            std::map<std::string,std::string> * a15
            )
        {
            // RenderChildren - 0
            auto size = a6.tellp();
            if (size > 52428800)
            {
                throw "RenderException Interal error: generated code (>10M) will be too heavy to fly in a narrow wind.";
            }
            int v109 = 0;
            int v110 = 0;
            std::string v145;
            std::string v147;
            for (int i = 0; i < this->offset_72.size(); i++)
            {
                std::shared_ptr<WXML::DOMLib::WXMLDom> cur = this->offset_72[i];
                auto srcToken = cur->offset_48.find("src");
                if (
                    (cur->offset_0 == "import"
                    || cur->offset_0 == "wx-import")
                    && ( srcToken != cur->offset_48.end())
                )
                {
                    if (!v110)
                    {
                        a7->GetNextName(v145);
                        a6 << "var " << v145 << "=" << a3 << "[x[";
                        int StrID = this->offset_248->GetStrID(a2);
                        a6 << StrID << "]].i" << a12;
                    }
                    v110++;
                }
                else if (cur->offset_0 == "include")
                {
                    if (srcToken != cur->offset_48.end())
                    {
                        if (!v109)
                        {
                            a7->GetNextName(v147);
                            a6 << "var " << v147 << "=" << a3;
                            a6 << "[x[" << this->offset_248->GetStrID(a2) << "]].j" << a12;
                        }
                        v109++;
                    }
                }
            }
            // RenderChildren - 5
            std::string v149;
            int Stra = 0;
            for (int v127 = 0; v127 < this->offset_72.size(); v127++)
            {
                auto cur = this->offset_72[v127];
                int Str = 1;
                if (cur->offset_48.find("wx-if") == cur->offset_48.end())
                {
                    Str = cur->offset_48.end() != cur->offset_48.find("wx:if");
                }
                if (Str)
                {
                    a7->GetNextName(v149);
                    cur->offset_220.assign(v149);
                    Stra = 2;
                    cur->offset_244 = 1;
                }
                else
                {
                    if (cur->offset_48.find("wx:elif") == cur->offset_48.end())
                    {
                        if (cur->offset_48.find("wx:else") != cur->offset_48.end())
                        {
                            if (Stra == 0)
                            {
                                throw this->Error(a2, cur->offset_84, "wx:else", "`wx:if not found, then something must be wrong`");
                            }
                            cur->offset_244 = Stra;
                            cur->offset_220.assign(v149);
                        }
                        Stra = 0;
                    }
                    else
                    {
                        if (Stra == 0)
                        {
                            throw this->Error(a2, cur->offset_84, "wx:elif", "`wx:if not found, then something must be wrong`");
                        }
                        cur->offset_244 = Stra;
                        Stra++;
                        cur->offset_220.assign(v149);
                    }
                }

            }
            // RenderChildren - 10
            std::string v151;
            std::vector<std::pair<std::string,int>> v142;
            for (int j = 0; j < this->offset_72.size(); j++)
            {
                v151.assign(a5); // 不能提到外面
                std::shared_ptr<WXML::DOMLib::WXMLDom> cur = this->offset_72[j];
                std::string v153;
                const char **v98 = szWXIFControlAttrs;
                if (cur->offset_244 <= 0)
                {
                    goto LABEL_56;
                }
                for (size_t i = 0; i < 4; i++)
                {
                    auto v97 = cur->offset_48.find(v98[i]);
                    if (v97 != cur->offset_48.end())
                    {
                        v153 = v98[i];
                        break;
                    }
                }
                if(cur->offset_48[v153].offset_56 == -3)
                {
                    throw this->Error(a2, cur->offset_48[v153], v153, cur->offset_48[v153].offset_60);
                }
                if(cur->offset_48[v153].offset_56 == -1 && v153 != "wx:else")
                {
                    throw this->Error(a2, cur->offset_84, v153, "value not set");
                }
                if (v153 == "wx-if" || v153 == "wx:if")
                {
                    // if (cur->offset_220 == "f3E")
                    // {
                    //     std::string test = a6.str();
                    //     printf("\n");
                    // }
                    a6 << "var " << cur->offset_220 << "=_v()" << a12;
                    a6 << "_(" << a5 << "," << cur->offset_220 << ")" << a12;
                    a6 << "if(_oz(z," << cur->offset_48[v153].offset_56 << "," << a8 << ",";
                    a6 << a9 << "," << a10 << ")){" << cur->offset_220 << ".wxVkey=";
                    a6 << cur->offset_244 << a12;
                    v142.emplace_back(cur->offset_220, 1);
                    if (cur->offset_256)
                        goto LABEL_54;
                }
                else
                {
                    if (v153 != "wx:elif")
                    {
                        a6 << "else{" << cur->offset_220 << ".wxVkey=" << cur->offset_244 << a12;
                        if (!cur->offset_256)
                            goto LABEL_55;
                        LABEL_54:
                        v142.emplace_back(cur->offset_220, 3);
                        goto LABEL_55;
                    }
                    a6 << "else if(_oz(z," << cur->offset_48[v153].offset_56 << "," << a8 << "," << a9 << "," << a10 << ")){";
                    a6 << cur->offset_220 << ".wxVkey=" << cur->offset_244 << a12;

                    if (cur->offset_256)
                        goto LABEL_54;
                }
                LABEL_55:
                v151.assign(cur->offset_220);
                LABEL_56:
                if (
                    cur->offset_0 == "import"
                    || cur->offset_0 == "wx-import"
                )
                {
                    auto srcToken = cur->offset_48.find("src");
                    if (srcToken != cur->offset_48.end())
                    {
                        a6 << "_ai(" << v145 << ",x[";
                        std::string v66 = srcToken->second.ToAttrContent();
                        int v67 = this->offset_248->GetStrID(v66);
                        a6 << v67 << "]," << a3 << ",x[" << this->offset_248->GetStrID(a2) << "],";
                        a6 << cur->offset_84.offset_8 << "," << cur->offset_84.offset_12 << ")" << a12;
                        goto LABEL_74;
                    }
                }
                if (
                    cur->offset_0 != "import"
                    && cur->offset_0 != "wx-import"
                )
                {
                    if (
                        cur->offset_0 == "wx-repeat"
                        || cur->offset_0 == "wx-template"
                    )
                    {
                        std::string v155;
                        a7->GetNextName(v155);
                        a6 << "var " << v155 << "=_v()" << a12;
                        a6 << "_(" << v151 << "," << v155 << ")" << a12;
                        // if (v155 == "f3E")
                        // {
                        //     std::string test = a6.str();
                        //     printf("\n");
                        // }
                        cur->RenderNonDefine(
                            a2,
                            a3,
                            a4,
                            v155,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10,
                            a11,
                            a12,
                            a13,
                            a14,
                            a15);
                        goto LABEL_74;
                    }
                    if (
                        cur->offset_0 == "block"
                        || cur->offset_0 == "include"
                    )
                    {
                        cur->RenderNonDefine(
                            a2,
                            a3,
                            a4,
                            v151,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10,
                            a11,
                            a12,
                            a13,
                            a14,
                            a15);
                        goto LABEL_74;
                    }
                    if (cur->offset_0 != "wx-import")
                    {
                        if (cur->offset_0 != "wx-define")
                        {
                            std::string v155;
                            a7->GetNextName(v155);
                            cur->RenderNonDefine(
                                a2,
                                a3,
                                a4,
                                v155,
                                a6,
                                a7,
                                a8,
                                a9,
                                a10,
                                a11,
                                a12,
                                a13,
                                a14,
                                a15);
                            a6 << "_(" << v151 << "," << v155 << ")" << a12;
                            goto LABEL_74;
                        }
                    }
                }
                LABEL_74:
                if (cur->offset_244 > 0)
                {
                    a6 << "}" << a12;
                }
            }
            // RenderChildren - 15
            for (int i = 0; i < v142.size(); i++)
            {
                a6 << v142[i].first << ".wxXCkey=" << v142[i].second << a12;
                // if (v142[i].first == "oVD")
                // {
                //     printf("\n");
                // }
            }
            
            // RenderChildren - 20
            for (int i = 0; i < v110; i++)
            {
                a6 << v145 << ".pop()" << a12;
            }
            
            // RenderChildren - 25
            for (int i = 0; i < v109; i++)
            {
                a6 << v147 << ".pop()" << a12;
            }
            
            // RenderChildren - 30
            
            
        }

        int RenderNonDefine_i = 0;
        void WXMLDom::RenderNonDefine(
            std::string const& a2,
            std::string const& a3,
            std::string& a4,
            std::string const& a5,
            std::stringstream &a6,
            WXML::NameAllocator *a7,
            std::string const& a8,
            std::string const& a9,
            std::string const& a10,
            std::string const& a11,
            char a12,
            bool a13,
            uint a14,
            std::map<std::string,std::string> * a15
            )
        {
            RenderNonDefine_i++;
            int inner_RenderNonDefine_i = RenderNonDefine_i;
            // RenderNonDefine - 0
            if (a13 && this->offset_24.size())
            {
                a6 << "cs.push(\"";
                std::string sc = WXML::Rewrite::ToStringCode(a2);
                a6 << sc << ":" << this->offset_24 << ":" << this->offset_84.offset_8 << ":" << this->offset_84.offset_12 << "\")" << a12;
            }
            if (this->offset_0 == "TEXTNODE")
            {
                int code = this->offset_84.offset_56;
                if (code == -3)
                {
                    std::string ret = this->Error(a2, this->offset_84, "", this->offset_84.offset_60);
                    throw ret;
                }
                if (code == -1)
                {
                    std::string ret = this->Error(a2, this->offset_84, "", "value not set");
                    throw ret;
                }
                a6 << "var " << a5 << "=_oz(z," << this->offset_84.offset_56;
                a6 << "," << a8 << "," << a9 << "," << a10 << ")";
                LABEL_69:
                a6 << a12;

                // goto LABEL_169;
                if (a13 && this->offset_24.size())
                {
                    a6 << "cs.pop()" << a12;
                }
                return;

            } // TEXTNODE end
            // RenderNonDefine - 5
            if (this->offset_0 == "wx-define"
                || this->offset_0 == "wx-import"
                || this->offset_0 == "import"
                || this->offset_0 == "template")
            {

                if (a13 && this->offset_24.size())
                {
                    a6 << "cs.pop()" << a12;
                }
                return;
            }
            bool v269 = true;
            bool v270 = true;
            std::map<std::string, WXML::DOMLib::Token>::iterator v281;
            std::stringstream ss;
            std::vector<std::pair<std::string,WXML::DOMLib::Token>> v324;
            std::string v327;
            std::set<std::string> v330;
            std::string v333;
            std::string v336;
            std::string v339;
            std::string v259 = "";
            int v274 = 0;
            std::vector<std::pair<std::string, WXML::DOMLib::Token>> _v339;
            if (this->offset_0 == "wx-repeat")
            {
                std::string target1 = "items";
                if (this->offset_48.end() == this->offset_48.find(target1))
                {
                    target1 = "wx:for-items";
                }
                std::string target2 = "index";
                if (this->offset_48.end() == this->offset_48.find(target2))
                {
                    target2 = "wx:for-index";
                }
                std::string target3 = "item";
                if (this->offset_48.end() == this->offset_48.find(target3))
                {
                    target3 = "wx:for-item";
                }
                if (this->offset_48.end() == this->offset_48.find(target1))
                {
                    return;
                }
                std::string target2_1 = "";
                if (this->offset_48.end() == this->offset_48.find(target2))
                {
                    target2_1 = "index";
                }
                else
                {
                    target2_1.assign(this->offset_48[target2].ToAttrContent());
                }
                std::string target3_1 = "";
                if (this->offset_48.end() == this->offset_48.find(target3))
                {
                    target3_1 = "item";
                }
                else
                {
                    target3_1.assign(this->offset_48[target3].ToAttrContent());
                }

                if (this->offset_48.end() != this->offset_48.find(target2)
                    && this->offset_48[target2].offset_56 == -3
                    && (a14 & 1) == 0)
                {
                    auto token = this->offset_48[target2];
                    std::string err = this->Error(a2, token, target2, token.offset_60);
                    throw "RenderException" + err;
                }

                std::string wxKey = "wx:key";
                if (this->offset_48.end() != this->offset_48.find(wxKey)
                    && this->offset_48[wxKey].offset_56 == -3
                    && (a14 & 1) == 0)
                {
                    std::string err = this->Error(a2, this->offset_48[wxKey], wxKey, this->offset_48[wxKey].offset_60);
                    throw "RenderException" + err;
                }

                if (target2_1.size() == 0)
                {
                    target2_1 = "index";
                }
                if (target3_1.size() == 0)
                {
                    target3_1 = "item";
                }

                std::string name1;
                a7->GetNextName(name1);
                
                std::string name2;
                a7->GetNextName(name2);
                
                std::string name3;
                a7->GetNextName(name3);
                
                std::string name4;
                a7->GetNextName(name4);

                std::string v347 = "";
                std::string Str = "";
                WXML::DOMLib::WXMLDom::RenderMeAsFunction(
                    a2,
                    a3,
                    a4,
                    name1,
                    a6,
                    a7,
                    name3,
                    name2,
                    a10,
                    name4,
                    a11,
                    a12,
                    Str,
                    0,
                    a13,
                    a14,
                    v347);

                if (this->offset_48[target1].offset_56 == -3)
                {
                    std::string err = this->Error(a2, this->offset_48[target1], target1, this->offset_48[target1].offset_60);
                    throw "RenderException:" + err;
                }

                if (this->offset_48[target1].offset_56 == -1)
                {
                    std::string err = this->Error(a2, this->offset_84, target1, "value not set");
                    throw "RenderException:" + err;
                }
                std::map<std::string, WXML::DOMLib::Token>::iterator t;
                std::string v336;
                int v47;
                std::string v339 = "";
                bool Str1 = false;
                int v277 = -1;
                if (!a13)
                    goto LABEL_57;
                if (this->offset_48.end() == this->offset_48.find(wxKey))
                {
                    a6 << "_wp('" << WXML::Rewrite::ToStringCode(a2) << ":";
                    a6 << this->offset_24 << ":";
                    a6 << this->offset_84.offset_8 << ":";
                    a6 << this->offset_84.offset_12;
                    a6 << ": Now you can provide attr `wx:key` for a `wx:for` to improve performance.')";
                    a6 << a12;
                }
                t = this->offset_48.find(wxKey);
                if (this->offset_48.end() == t)
                {
                    goto LABEL_57;
                }

                v336 = t->second.ToAttrContent();
                v47 = v336.find('.', 0);
                if (v47 != -1)
                {
                    auto Str = v336.substr(0, v47);
                    Str1 = WXML::DOMLib::Token::IsValidVariableName(Str);
                    if (Str1)
                    {
                        auto v347 = v336.substr(v47 + 1);
                        Str1 = WXML::DOMLib::Token::IsValidVariableName(v347);
                    }
                    if (Str1)
                    {
                        Str = v336.substr(v47 + 1);
                        v339 = Str;
                    }
                }
                
                bool Str1f;
                if (WXML::DOMLib::Token::GetTemplateContent(v336, v339))
                {
                    if (Str1)
                    {
                        goto LABEL_181;
                    }
                }
                else
                {
                    if ( Str1 == 1 || WXML::DOMLib::Token::IsValidVariableName(v339) )
                        goto LABEL_181;
                    v277 = v339.find('.');
                    if (v277 != -1)
                    {
                        Str = v339.substr(0, v277);
                        Str1f = WXML::DOMLib::Token::IsValidVariableName(Str);
                        if (Str1f)
                        {
                            auto v347 = v339.substr(v277 + 1);
                            Str1f = WXML::DOMLib::Token::IsValidVariableName(v347);
                        }
                        if (Str1f)
                        {
                            v339 = v339.substr(v277 + 1);
                            LABEL_181:
                            a6 << "_wp('" << WXML::Rewrite::ToStringCode(a2) << ":";
                            a6 << this->offset_24 << ":";
                            a6 << this->offset_84.offset_8 << ":";
                            a6 << this->offset_84.offset_12 << ": wx:key=\"";
                            a6 << WXML::Rewrite::ToStringCode(v336) << "\" does not look like a valid key name (did you mean wx:key=\"";
                            a6 << WXML::Rewrite::ToStringCode(v339) << "\" ?)')";
                            a6 << a12;
                            goto LABEL_56;
                        }
                    }
                }
                if (!WXML::DOMLib::Token::IsValidVariableName(v336))
                {
                    if (v336.length())
                    {
                        if (v336 == "0")
                            goto LABEL_56;
                        if (v336[0] != '0')
                        {
                            for (int i_0 = 0; i_0 < v336.length(); i_0++)
                            {
                                if (v336[i_0] - '0' > 9u)
                                {
                                    goto LABEL_189;
                                }
                            }
                            
                            goto LABEL_56;
                        }
                    }
                    LABEL_189:
                    if (v336 != "*this")
                    {
                        a6 << "_wp('" << WXML::Rewrite::ToStringCode(a2) << ":";
                        a6 << this->offset_24 << ":" << this->offset_84.offset_8 << ":" << this->offset_84.offset_12;
                        a6 << ": wx:key=\"" << WXML::Rewrite::ToStringCode(v336);
                        a6 << "\" does not look like a valid key name.')" << a12;
                        
                        goto LABEL_56;
                    }
                }
                LABEL_56: //...
                LABEL_57: //...
                if (this->offset_256)
                {
                    a6 << a5 << ".wxXCkey=4";
                }
                else
                {
                    a6 << a5 << ".wxXCkey=2";
                }
                a6 << a12;
                a6 << "_2z(z,";
                a6 << this->offset_48[target1].offset_56 << ",";
                a6 << name1 << "," << a8 << "," << a9 << "," << a10 << "," << a5 << ",'";
                a6 << target3_1 << "','" << target2_1 << "','";
                a6 << this->offset_48[wxKey].ToAttrContent() << "')" << a12;
                goto LABEL_84;
            } // wx-repeat end
            
            // RenderNonDefine - 10
            if (this->offset_0 == "block")
            {
                
                this->RenderChildren(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
                goto LABEL_169;
            }
            
            if (this->offset_0 == "include")
            {
                std::string v347 = "src";
                auto v279 = this->offset_48.find(v347);
                if (v279 == this->offset_48.end())
                {
                    goto LABEL_169;
                }
                auto v280 = this->offset_48[v347].offset_56;
                if (v280 == -3)
                {
                    auto srcToken = this->offset_48["src"];
                    auto err = this->Error(a2, srcToken, "src", srcToken.offset_60);
                    throw "RenderException" + err;
                }
                a6 << "_ic(x[";
                auto srcToken = this->offset_48["src"];
                v347 = srcToken.ToAttrContent();
                auto strId = this->offset_248->GetStrID(v347);
                a6 << strId << "],";
                a6 << a3 << ",x[";
                a6 << this->offset_248->GetStrID(a2);
                a6 << "]," << a8 << "," << a9 << "," << a5 << "," << a10 << ");" << a12;
                // goto LABEL_68;
                if (a13 && this->offset_24.size())
                {
                    a6 << "cs.pop()" << a12;
                }
                return;
            }
            // RenderNonDefine - 15
            if (this->offset_0 == "wx-template")
            {
                v281 = this->offset_48.find("is");
                if (v281 == this->offset_48.end())
                    goto LABEL_169;
                if (v281->second.offset_56 != -3)
                {
                    v269 = v281->second.offset_56 == -1;
                }
                if (v269)
                {
                    a6 << "_wp(\"" << WXML::Rewrite::ToStringCode(a2) << ":template:";
                    a6 << this->offset_84.offset_8 << ":" << this->offset_84.offset_12 << ": `";
                    auto v92 = v281->second.ToAttrContent();
                    WXML::Rewrite::ToStringCode(v92, a6);
                    a6 << "` is not a valid expression for a template.\")";
                    // goto LABEL_69;
                    a6 << a12;

                    // goto LABEL_169;
                    if (a13 && this->offset_24.size())
                    {
                        a6 << "cs.pop()" << a12;
                    }
                    return;
                }
                a7->GetNextName(v333);
                a6 << "var " << v333 << "=_oz(z," << v281->second.offset_56 << ",";
                a6 << a8 << "," << a9 << "," << a10 << ")" << a12;

                a7->GetNextName(v336);
                a6 << "var " << v336;
                a6 << "=_gd(x[" << this->offset_248->GetStrID(a2);
                a6 << "]," << v333 << "," << a3 << "," << a11 << ")" << a12;
                a6 << "if(" << v336 << "){" << a12;

                a7->GetNextName(v339);
                if (this->offset_48.end() != this->offset_48.find("data"))
                {
                    v270 = this->offset_48["data"].ToAttrContent().length() == 0;
                }
                if (v270)
                {
                    a6 << "var " << v339 << "={}" << a12;
                }
                else
                {
                    auto data = this->offset_48["data"];
                    if (data.offset_56 == -3)
                    {
                        // 抛异常
                        auto err = this->Error(a2, this->offset_48["data"], "data", data.offset_60);
                        throw "RenderException" + err;
                    }
                    a6 << "var " << v339 << "=_1z(z,";
                    a6 << data.offset_56 << ",";
                    a6 << a8 << "," << a9 << "," << a10 << ") || {}" << a12;
                }
                a6 << "var cur_globalf=" << a10 << ".f" << a12;
                a6 << a5 << ".wxXCkey=3" << a12;
                a6 << v336 << "(" << v339 << "," << v339 << "," << a5 << "," << a10 << ")" << a12;
                a6 << a10 << ".f=cur_globalf" << a12;
                a6 << "}" << a12;
                a6 << "else _w(" << v333 << ",x[";
                a6 << this->offset_248->GetStrID(a2) << "],";
                a6 << this->offset_48["is"].offset_8 << ",";
                a6 << this->offset_48["is"].offset_12;
                a6 << ")" << a12;
                LABEL_84:
                goto LABEL_169;
            }
            // RenderNonDefine - 20

            for (auto j = this->offset_48.begin(); j != this->offset_48.end(); j++)
            {
                /* code */
                if (j->second.offset_56 == -3)
                {
                    if (a14 & 1 == 0)
                    {
                        auto err = this->Error(a2, j->second, j->first, j->second.offset_60);
                        throw "RenderException" + err;
                    }
                }
                else if(j->second.offset_56 == -1 && j->second.GetSize() > 0)
                {
                    auto err = this->Error(a2, j->second, j->first, "interal error(1010)");
                    throw "RenderException" + err;
                }
                std::string v161 = j->first;
                if ( v161[0] != 'w'
                    || v161[1] != 'x'
                    || v161[2] != ':' && v161[2] != '-'
                    || v161 == "wx:scope-data")
                {
                    // pos: 搜索 -> !__stricmp((const char *)v161, "wx:scope-data")
                    // ++emplace_back_i;
                    // if (emplace_back_i == 139)
                    // {
                    //     printf("\n");
                    // }
                    // WXML::DOMLib::Token token = this.;
                    v324.emplace_back(j->first, j->second);
                }
            }
            // RenderNonDefine - 25
            std::sort(v324.begin(), v324.end(), WXML::DOMLib::AttrsCompartor);

            for (auto k = v324.begin(); k != v324.end(); k++)
            {
                v330.insert(k->first);
            }
            for (auto m = 0; m < v324.size(); m++)
            {
                std::string v333 = v324[m].first.substr(0, 6u);
                if (v333 == "model:")
                {
                    ss << "\"model:";
                    std::string subStr = v324[m].first.substr(6u);
                    ss << subStr << "\"" << ":\"";
                    ss << WXML::Rewrite::ToStringCode(v324[m].second.ToAttrContent());
                    ss << "\",";
                    std::string v336 = subStr;
                    // find
                    if (v330.find(v336) == v330.end())
                    {
                        v324[m].first = v336;
                    }
                    else
                    {
                        v324.erase(v324.begin() + m);
                        m = m - 1;
                    }
                    
                }
            }
            // RenderNonDefine - 30
            v327 = ss.str();
            if (v327.length() > 0)
            {
                std::string v339 = a5;
                v339.append(".rawAttr={");
                v339.append(v327);
                v339.append("};");
                v327 = v339;
            }
            if (v324.size() <= 1)
            {
                a6 << "var " << a5 << "=_n('";
                a6 << this->offset_0 << "')" << a12;
                for (auto i = v324.begin(); ; i++)
                {
                    std::string str;
                    if (i == v324.end())
                    {
                        goto LABEL_164;
                    }
                    if (!strncmp(&i->first[0], "data-", 5u) || i->first.find(':') != -1)
                    {
                        str.assign(i->first);
                        if (!strncmp(&i->first[0], "generic:", 8u))
                        {
                            a6 << "var $tmp=";
                            // if (i->second.)
                            throw "not implement";
                        }
                    }
                    else
                    {
                        str = WXML::DOMLib::WXMLDom::ToCamelStyle(i->first);
                    }
                    if(i->second.offset_20)
                    {
                        if (i->second.offset_56 == -1)
                        {
                            throw this->Error(a2, i->second, i->first, "interal error(1010)");
                        }
                        a6 << "_rz(z," << a5 << ",'" << str << "',";
                        a6 << i->second.offset_56;
                        a6 << "," << a8 << "," << a9 << "," << a10 << ")";
                    }
                    else
                    {
                        a6 << a5 << ".attr['" << str << "']=true";
                    }
                    LABEL_158:
                    a6 << a12;
                }
                
            }
            // RenderNonDefine - 35
            if (a5 == "o2J")
            {
                int a = 0;
            }
            a6 << "var " << a5 << "=_mz(z,'" << this->offset_0 << "',[";
            v259 = "";
            for (auto jj = v324.begin(); jj < v324.end(); jj++)
            {
                std::string str1c = jj->first;
                std::string v342;
                if (!strncmp(str1c.data(), "data-", 5u) || str1c.find(':') != -1)
                {
                    v342 = jj->first;
                    if (!strncmp(str1c.data(), "generic:", 8u))
                    {
                        // jj->second.
                        _v339.emplace_back(jj->first, jj->second);
                    }
                }
                else
                {
                    v342 = WXML::DOMLib::WXMLDom::ToCamelStyle(jj->first);
                }
                a6 << v259;
                a6 << "'" << v342 << "',";
                if (jj->second.offset_20)
                {
                    a6 << (jj->second.offset_56 - v274);
                    if (!v274)
                    {
                        v274 = jj->second.offset_56;
                    }

                }
                else
                {
                    a6 << "-1";
                }
                v259 = ",";
            }
            a6 << "],[";
            v259 = "";
            for (auto &&i : _v339)
            {
                a6 << v259 << "'wx-";
                a6 << i.first;
                a6 << "',";
                if(i.second.offset_20)
                {
                    a6 << i.second.offset_56;
                }
                else
                {
                    a6 << "-1";
                }
                v259 = ",";
            }
            
            // RenderNonDefine - 40
            a6 << "]," << a8 << "," << a9 << "," << a10 << ")" << a12;
            LABEL_164:
            if (v327.length() > 0)
                a6 << v327;
            this->RenderChildren(a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
            if ((a14 & 1) != 0)
                this->AddTestAttr(a5, a6, '\n'/*10*/);
            LABEL_169:
            if (a13 && this->offset_24.size())
            {
                a6 << "cs.pop()" << a12;
            }

            // RenderNonDefine - 45
            
        }
        void WXMLDom::RecordAllPath(void)
        {
            if(this->offset_0 == "import" || this->offset_0 == "include")
            {
                std::string v13 = "src";
                int v8 = this->offset_48.count(v13);
                if (v8)
                {
                    std::string attr = this->offset_48[v13].ToAttrContent();
                    if(!this->offset_248->offset_0.count(attr))
                    {
                        // Note: 不能合成一行，否则数量会错误
                        int size = this->offset_248->offset_0.size();
                        this->offset_248->offset_0[attr] = size;
                        this->offset_248->offset_24.push_back(attr);
                    }
                }
            }
            for (int i = 0; i < this->offset_72.size(); i++)
            {
                this->offset_72[i]->offset_248 = this->offset_248;
                this->offset_72[i]->RecordAllPath();
            }
            
        }
        void WXMLDom::Print(int a2, char const* a3, std::stringstream * a4)
        {
            this->PrintMe(a2, a3, a4);
            for (int i = 0; i < this->offset_72.size(); i++)
            {
                this->Print(a2 + 1, a3, a4);
            }
            
        }

        /**
         * 未完善
        */
        void WXMLDom::AddTestAttr(std::string const& a2, std::stringstream & a3, char a4)
        {
            bool mark = true;
            if (this->offset_0 != "button")
            {
                mark = this->offset_0 == "navigator";
            }
            std::string v24 = "tap";
            std::string v27 = "bind";
            for (int i = 0; i <= 5 && mark; i++)
            {
                bool v17;
                int flag = false;
                do
                {
                    auto v23 = v27.substr(3 * i);
                    v23 = v23.append(v24.substr(3 * flag));
                    v17 = this->offset_48.count(v23);
                    flag++;
                } while (flag <= 2 && !v17);
                mark = v17;
            }
            if (mark)
            {
                this->componentCnt++;
                a3 << "_af(" << a2 << "," << 1 << ",";
                // a6 << this->
            }
            else
            {
                a3 << "_af(" << a2 << "," << 0;
            }
            a3 << ",";
            // a3 insert
            a3 << ");" << a4;
            // do
            // {
            //     /* code */
            // } while (/* condition */);
            

            
        }
        std::string WXMLDom::ToCamelStyle(std::string const& a2)
        {
            bool mark = false;
            std::string result;
            result.reserve(a2.length());
            for (auto i = 0; i < a2.length(); i++)
            {
                char v2 = a2[i];
                if (v2 > '.')
                {
                    if (v2 == ':')
                    {
                    LABEL_11:
                        mark = true;
                        continue;
                    }
                }
                else if (v2 > ',')
                {
                    goto LABEL_11;
                }
                if (v2 - 'a' <= 0x19u && mark)
                {
                    result.push_back(v2 - ' ');
                    mark = 0;
                }
                else
                {
                    result.push_back(v2);
                }
            }
            
            return result;
        }
        void WXMLDom::PrintMe(
            int a2,
            char const* a3,
            std::stringstream * a4)
        {
            std::stringstream v34;
            std::stringstream *v4 = &v34;
            if (a4)
            {
                v4 = a4;
            }
            if (v4->tellp() != 0)
            {
                printf("%s", a3);
            }
            else
            {
                *v4 << a3;
            }
            for (int i = 0; ; i++)
            {
                /* code */
                if ( i >= a2)
                    break;
                if (v4->tellp())
                {
                    printf("  ");
                }
                else
                {
                    *v4 << "  ";
                }
            }
            if (v4->tellp())
            {
                printf("pos: %d, %d, tag: %s, ", this->offset_84.offset_8, this->offset_84.offset_12, this->offset_0.c_str());
            }
            else
            {
                *v4 << "pos: " << this->offset_84.offset_8 << ", " << this->offset_84.offset_12 << " tag: " << this->offset_0 << ", ";
            }
            
            if (this->offset_0 == "TEXTNODE")
            {
                if (v4->tellp() != 0)
                {
                    printf("attr: ");
                }
                else
                {
                    *v4 << "attr: ";
                }
                for (auto j = this->offset_48.begin(); j != this->offset_48.end(); j++)
                {
                    if (v4->tellp()  != 0)
                    {
                        std::string v13 = j->second.ToString();
                        printf("%s->%s,", j->first.data(), v13.data());
                    }
                    else
                    {
                        *v4 << j->first << "->";
                        *v4 << j->second.ToString();
                        *v4 << " ";
                        *v4 << j->second.offset_0; // 待确认
                        *v4 << " ";
                    }
                }
                
                
            }
            else if(v4->tellp() != 0)
            {
                printf(
                    "pos: %d, %d, len: %d, %s",
                    this->offset_84.offset_8,
                    this->offset_84.offset_12,
                    this->offset_84.offset_20,
                    this->offset_84.ToString().data()
                );
            }
            else
            {
                *v4 << "pos: " << this->offset_84.offset_8
                << ", " << this->offset_84.offset_12 << ", len: " << this->offset_84.offset_20
                << ", ";
                *v4 << this->offset_84.ToString();
            }
            if (v4->tellp() != 0)
            {
                
                printf(
                "icn: %s, icc: %u, ivwn: %s",
                this->offset_196.data(),
                this->offset_244,
                this->offset_220.data());
            }
            else
            {
                *v4 << "icn:" << this->offset_196 << ", icc: " << this->offset_244;
                *v4 << ", ivwn: " << this->offset_220;
            }
            if (v4->tellp() != 0)
            {
                printf(", hasXComponentDescendant %d", this->offset_256);
            }
            else
            {
                *v4 << ", hasXComponentDescendant " << this->offset_256;
            }
            if (v4->tellp() != 0)
            {
                printf("\n");
            }
            else
            {
                *v4 << "\n";
            }
        }

        bool WXMLDom::IfHasItsElse(
            int a2,
            std::vector<std::string> const& a3
            )
        {
            bool hasElIf = true;
            if (this->offset_72[a2]->offset_48.count("wx:else") == 0)
            {
                hasElIf = this->offset_72[a2]->offset_48.count("wx:elif");
            }
            if (hasElIf) return true;

            bool hasIf = false;
            if (this->offset_72[a2]->offset_48.count("wx:if") == 0)
            {
                hasIf = !this->offset_72[a2]->offset_48.count("wx-if");
            }
            if (!hasIf)
            {
                int v11 = a2 - 1;
                auto v5 = this->offset_72[a2];
                if(v5->offset_72.begin() == v5->offset_72.end())
                {
                    for (int i = a2 + 1; i < this->offset_72.size(); i++)
                    {
                        bool hasElIf = true;
                        if(!this->offset_72[i]->offset_48.count("wx:else"))
                        {
                            hasElIf = this->offset_72[i]->offset_48.count("wx:elif");
                        }
                        if (!hasElIf)
                        {
                            break;
                        }
                        if(
                            a3.end() != std::find(a3.begin(), a3.end(), this->offset_72[i]->offset_0)
                            || this->offset_72[i]->offset_72.begin() != this->offset_72[i]->offset_72.end()
                        )
                        {
                            return hasElIf;
                        }
                        v11 = i;
                    }
                    
                }
                while (v11 >= a2)
                    this->offset_72.erase(this->offset_72.begin() + v11--);
                return true;
            }
            return hasElIf;
        }
        bool WXMLDom::operator==(std::string tag)
        {
            return this->offset_0 == tag;
        }
        std::string WXMLDom::Error(
                std::string const& a2,
                WXML::DOMLib::Token const& a3,
                std::string const& a4,
                std::string const& a5
                )
        {
            std::stringstream v15;
            v15 << a2 << ":";
            // v15 << a3.???1 << ":";
            // v15 << a3.???2 << ":";
            if (a4.length() > 0)
            {
                v15 << " Bad attr `" << a4 << "`";
            }
            else
            {
                v15 << " Bad value";
            }
            v15 << " with message: " << a5 << ".";
            return v15.str();
        }
        
        bool WXMLDom::HasSpAttrPrefix()
        {
            for (auto i = this->offset_48.begin(); i != this->offset_48.end(); i++)
            {
                auto v3 = i->first.data();
                if (strncmp(v3, "bind", 4u))
                {

                    if ( strncmp(v3, "catch", 5u) )
                    {
                        if ( strncmp(v3, "capture-bind", 0xCu) )
                        {
                            if ( strncmp(v3, "capture-catch", 0xDu) )
                            {
                                if ( i->first != "slot" )
                                {
                                    if ( strncmp(v3, "wx:", 3u) )
                                    {
                                        if ( strncmp(v3, "mark:", 5u) )
                                            continue;
                                    }
                                }
                            }
                        }
                    }
                }
                return true;
            }
            return false;
            
        }
        void WXMLDom::MarkIfHasDescendant(std::vector<std::string> const& a2)
        {
            if (a2.size() > 0)
            {
                int v4 = this->offset_72.size();
                while (--v4 >= 0)
                {
                    // 0x48 -> 72
                    this->offset_72[v4]->MarkIfHasDescendant(a2);
                    auto v6 = this->offset_72[v4];
                    this->offset_256 |= v6->offset_256;
                    auto ret = std::find(a2.begin(), a2.end(), v6->offset_0);
                    if (ret != a2.end())
                    {
                        // HasDescendant
                        this->offset_256 = 1;
                    }
                }
                
            }

        }
        void WXMLDom::CutDomsForCustomComponent(std::vector<std::string> const& a2)
        {
            int v3 = this->offset_72.size();
            while (--v3 >= 0)
            {
                this->offset_72[v3]->CutDomsForCustomComponent(a2);
                if (
                    this->offset_72[v3]->offset_0 != "include"
                    && this->offset_72[v3]->offset_0 != "import"
                    && this->offset_72[v3]->offset_0 != "wx-template"
                    && this->offset_72[v3]->offset_0 != "wx-define"
                    && this->offset_72[v3]->offset_0 != "template"
                    && this->offset_72[v3]->offset_0 != "slot"
                    && this->offset_72[v3]->offset_0 != "wx-import"
                )
                {
                    if (
                        a2.end() == std::find(a2.begin(), a2.end(), this->offset_72[v3]->offset_0)
                        && !this->IfHasItsElse(v3, a2)
                        )
                    {
                        auto v5 = this->offset_72[v3];
                        if (v5->offset_72.begin() == v5->offset_72.end())
                        {
                            this->offset_72.erase(this->offset_72.begin() + v3);
                        }
                        else if(v5->offset_72.size() == 1
                            && !v5->HasSpAttrPrefix())
                        {
                            auto v6 = this->offset_72[v3];
                            auto v7 = v6->offset_72[0];
                            this->offset_72[v3] = v7;
                        }
                    }
                }
            }
            
        }
    }
}