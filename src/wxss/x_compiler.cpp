#include "../include/wxss.h"
#include "../include/wxa.h"
#include "../include/wxml.h"

namespace WXSS
{
    
    XCompiler::XCompiler(/* args */)
    {
    }
    
    XCompiler::XCompiler(std::map<std::string, std::string> const& a2, bool a3, std::string const& a4)
    {
        auto v4 = WXSS::CSSTreeLib::LexicalChecker::GetInstance(a3);
        this->offset_0 = 0;
        this->offset_4 = 0;

        std::string v55;
        for (auto i = a2.begin(); i != a2.end(); i++)
        {
            WXSS::CSSTreeLib::Parser v29;
            std::string v61;
            int v47 = v29.Parse(i->second, i->first, v61, a4);
            if (v47)
            {
                this->offset_4++;
                v55 += v61 + "\n";
                this->offset_0 = v47;
            }
            else
            {
                v4->Traval(v29.offset_0);
                std::string v42 = i->first;
                for (int j = 0; j < v29.offset_0->offset_120.size(); j++)
                {
                    auto cur = v29.offset_0->offset_120[j];
                    if (cur->offset_0 == "DIRECTIVE")
                    {
                        auto v8 = cur->offset_120;
                        if (v8.size() > 1 && v8[0]->offset_0 == "@import")
                        {
                            std::string lit = v8[1]->offset_24.GetLiteral();
                            std::string v64 = WXSS::RemoveQuote(lit);
                            std::string v70;
                            if (v64[0] == '/')
                            {
                                std::string v74 = "." + v64;
                                if (a2.end() != a2.find(v74))
                                {
                                    v70.assign(v74);
                                }
                                v74 += ".wxss";
                                if (a2.end() != a2.find(v74))
                                {
                                    v70.assign(v74);
                                }
                            }
                            if (!v70.length())
                            {
                                MMBizWxaAppComm::PathCombine(i->first, v64, v70);
                            }
                            if (a2.find(v70) == a2.end())
                            {
                                v70 += ".wxss";
                            }
                            if (a2.find(v70) == a2.end())
                            {
                                v55 += "path `" + v64 + "` not found from `" + i->first + "`.\n";
                                this->offset_4++;
                                this->offset_0 = 3;
                            }
                            else
                            {
                                auto v10 = this->offset_56[i->first];
                                v10.push_back(v70);
                                std::shared_ptr<std::string> v33(new std::string());
                                v33->assign(v70);
                                cur->offset_140 = v33;
                                this->offset_56[i->first] = v10;
                            }

                        }

                    }
                }
                std::string v74 = v42;
                
                this->offset_32[v74] = v29.offset_0;
            }
        }
        // end for
        // XCompiler - 5
        std::map<std::string, int> _v64;
        if (!this->offset_0)
        {
            for (auto j = a2.begin(); j != a2.end(); j++)
            {
                _v64[j->first] = 0;
            }
            for (auto k = a2.begin(); k != a2.end(); k++)
            {
                std::string v32 = k->first;
                auto v43 = this->offset_56.find(v32);
                if (v43 != this->offset_56.end())
                {
                    for (int m = 0; m < this->offset_56[v32].size(); m++)
                    {
                        _v64[this->offset_56[v32][m]]++;
                    }
                    
                }

            }
            // XCompiler - 5 - 0
            std::map<std::string,unsigned int> v37;
            std::set<std::string> v70;
            while (true)
            {
                std::vector<std::string> v61;
                for (auto v20 = _v64.begin(); v20 != _v64.end(); v20++)
                {
                    if (!v20->second)
                    {
                        auto v36 = v70.find(v20->first);
                        if (v36 == v70.end())
                        {
                            v61.push_back(v20->first);
                            v70.insert(v20->first);
                        }
                    }
                }
                
                if (v61.begin() == v61.end())
                {
                    break;
                }
                for (int i = 0; i < v61.size(); i++)
                {
                    std::string v74 = v61[i];
                    int v45 = 0;
                    if (a2.find(v74) != a2.end())
                    {
                        v45 = a2.find(v74)->second.size();
                    }
                    v37[v74] = v37[v74] + v45;
                    for (int j = 0; j < this->offset_56[v74].size(); j++)
                    {
                        std::string v77 = this->offset_56[v74][j];
                        _v64[v77]--;
                        v37[v77] = v37[v77] + v37[v74];
                    }
                    
                }
                
            }
            
            // XCompiler - 5 - 5
            if (a2.size() != v70.size()) // todo...
            {
                v55 += "I don't know what will happen if a snake eats its tail, but a file can not import itself.";
                this->offset_0 = 4;
                this->offset_4++;
            }
        }
        
    }
    
    XCompiler::~XCompiler()
    {
    }
    
    void XCompiler::DealRPX(std::string & a1, std::stringstream & a2)
    {
        std::string v3 = WXML::Rewrite::ToStringCode2(a1);
        WXML::GetStrForMakingCSS(v3, a2);
        a1 = "";
        return;
    }
    void XCompiler::GetHostRule(std::string & a2)
    {
        std::string v6;
        for (auto i = this->offset_32.begin(); i != this->offset_32.end(); i++)
        {
            i->second->GetHostRule(v6);
        }
        std::stringstream v9;
        v9 << "setCssToHead([";
        this->DealRPX(v6, v9);
        v9 << "])";
        a2 = v9.str();
        return ;
    }
    int XCompiler::ShowTree(std::string & a2)
    {
        for (auto i = this->offset_32.rbegin(); i != this->offset_32.rend(); i++)
        {
            std::string v7 = "\n/* " + i->first;
            v7.append(" */\n");
            a2 += v7;
            std::stringstream v8;
            i->second->Print2Stream(0, v8);
            a2 = v8.str();
        }
        return 0;
    }
    int XCompiler::GetCompiled(std::string const&, std::string&)
    {
        if (this->offset_0)
        {
            return 6;
        }
        
        throw "not implement";
    }
    int XCompiler::GetJSCompiled(std::string const& a2, std::string& a3)
    {
        std::string v5;
        int ret = this->GetCompiled(a2, v5);
        if (!ret)
        {
            a3 = WXML::Rewrite::ToStringCode2(v5);
        }
        return ret;
    }
    int XCompiler::GetWellFormattedJSCompiled(std::string const& a2, std::string& a3)
    {
        std::string v5;
        int ret = this->GetJSCompiled(a2, v5);
        if (!ret)
        {
            std::stringstream v8;
            v8 << "var BASE_DEVICE_WIDTH = 750;\n"
            "var isIOS=navigator.userAgent.match(\"iPhone\");\n"
            "var deviceWidth = window.screen.width || 375;\n"
            "var deviceDPR = window.devicePixelRatio || 2;\n"
            "var checkDeviceWidth = window.__checkDeviceWidth__ || function() {\n"
            "var newDeviceWidth = window.screen.width || 375\n"
            "var newDeviceDPR = window.devicePixelRatio || 2\n"
            "var newDeviceHeight = window.screen.height || 375\n"
            "if (window.screen.orientation && /^landscape/.test(window.screen.orientation.type || '')) newDeviceWidth = newDevi"
            "ceHeight\n"
            "if (newDeviceWidth !== deviceWidth || newDeviceDPR !== deviceDPR) {\n"
            "deviceWidth = newDeviceWidth\n"
            "deviceDPR = newDeviceDPR\n"
            "}\n"
            "}\n"
            "checkDeviceWidth()\n"
            "var eps = 1e-4;\n"
            "var transformRPX = window.__transformRpx__ || function(number, newDeviceWidth) {\n"
            "if ( number === 0 ) return 0;\n"
            "number = number / BASE_DEVICE_WIDTH * ( newDeviceWidth || deviceWidth );\n"
            "number = Math.floor(number + eps);\n"
            "if (number === 0) {\n"
            "if (deviceDPR === 1 || !isIOS) {\n"
            "return 1;\n"
            "} else {\n"
            "return 0.5;\n"
            "}\n"
            "}\n"
            "return number;\n"
            "}\n"
            "window.__rpxRecalculatingFuncs__ = window.__rpxRecalculatingFuncs__ || [];\n"
            "var __COMMON_STYLESHEETS__ = __COMMON_STYLESHEETS__||{}\n"
            "%s\n"
            "var setCssToHead = function(file, _xcInvalid, info) {\n"
            "var Ca = {};\n"
            "var css_id;\n"
            "var info = info || {};\n"
            "var _C = __COMMON_STYLESHEETS__\n"
            "function makeup(file, opt) {\n"
            "var _n = typeof(file) === \"string\";\n"
            "if ( _n && Ca.hasOwnProperty(file)) return \"\";\n"
            "if ( _n ) Ca[file] = 1;\n"
            "var ex = _n ? _C[file] : file;\n"
            "var res=\"\";\n"
            "for (var i = ex.length - 1; i >= 0; i--) {\n"
            "var content = ex[i];\n"
            "if (typeof(content) === \"object\")\n"
            "{\n"
            "var op = content[0];\n"
            "if ( op == 0 )\n"
            "res = transformRPX(content[1], opt.deviceWidth) + \"px\" + res;\n"
            "else if ( op == 1)\n"
            "res = opt.suffix + res;\n"
            "else if ( op == 2 )\n"
            "res = makeup(content[1], opt) + res;\n"
            "}\n"
            "else\n"
            "res = content + res\n"
            "}\n"
            "return res;\n"
            "}\n"
            "var styleSheetManager = window.__styleSheetManager2__\n"
            "var rewritor = function(suffix, opt, style){\n"
            "opt = opt || {};\n"
            "suffix = suffix || \"\";\n"
            "opt.suffix = suffix;\n"
            "if ( opt.allowIllegalSelector != undefined && _xcInvalid != undefined )\n"
            "{\n"
            "if ( opt.allowIllegalSelector )\n"
            "console.warn( \"For developer:\" + _xcInvalid );\n"
            "else\n"
            "{\n"
            "console.error( _xcInvalid );\n"
            "}\n"
            "}\n"
            "Ca={};\n"
            "css = makeup(file, opt);\n"
            "if (styleSheetManager) {\n"
            "var key = (info.path || Math.random()) + ':' + suffix\n"
            "if (!style) {\n"
            "styleSheetManager.addItem(key, info.path);\n"
            "window.__rpxRecalculatingFuncs__.push(function(size){\n"
            "opt.deviceWidth = size.width;\n"
            "rewritor(suffix, opt, true);\n"
            "});\n"
            "}\n"
            "styleSheetManager.setCss(key, css);\n"
            "return;\n"
            "}\n"
            "if ( !style )\n"
            "{\n"
            "var head = document.head || document.getElementsByTagName('head')[0];\n"
            "style = document.createElement('style');\n"
            "style.type = 'text/css';\n"
            "style.setAttribute( \"wxss:path\", info.path );\n"
            "head.appendChild(style);\n"
            "window.__rpxRecalculatingFuncs__.push(function(size){\n"
            "opt.deviceWidth = size.width;\n"
            "rewritor(suffix, opt, style);\n"
            "});\n"
            "}\n"
            "if (style.styleSheet) {\n"
            "style.styleSheet.cssText = css;\n"
            "} else {\n"
            "if ( style.childNodes.length == 0 )\n"
            "style.appendChild(document.createTextNode(css));\n"
            "else\n"
            "style.childNodes[0].nodeValue = css;\n"
            "}\n"
            "}\n"
            "return rewritor;\n"
            "}\n"
            "setCssToHead([";
            WXML::GetStrForMakingCSS(v5, v8);
            v8 << "])( typeof __wxAppSuffixCode__ == \"undefined\"? undefined : __wxAppSuffixCode__ );";
            a3 = v8.str();
        }

        return ret;
    }

    int GenExpr_i = 0;
    /**
     * a4 参数正确
    */
    void XCompiler::GenExpr(std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> a2, std::stringstream & a3, std::string & a4)
    {
        GenExpr_i++;
        int inner_GenExpr_i = GenExpr_i;
        auto target = a2->offset_120;
        for (int i = 0; i < target.size(); i++)
        {
            auto cur = target[i];
            if (cur->offset_0 == "DIRECTIVE"
                && cur->offset_120.size() > 1
                && cur->offset_120[0]->offset_0 == "@import"
                && cur->offset_140.get()
                )
            {
                std::string v16= *cur->offset_140;
                if (this->offset_128[v16] > 1)
                {
                    this->DealRPX(a4, a3);
                    a3 << "[2,\"";
                    auto v8 = this->offset_152[v16];
                    a3 << WXML::Rewrite::ToStringCode2(v8);
                    a3 <<"\"],";
                }
                else
                {
                    auto v17 = this->offset_32[v16];
                    this->GenExpr(v17, a3, a4);
                }
            }
            else
            {
                cur->RenderCode(a4, 1);
            }
        }
        std::string str = a3.str();
        return ;
    }
    int GetPageCss_i = 0;
    int XCompiler::GetPageCss(std::string const& a2, std::string& a3, uint a4)
    {
        GetPageCss_i++;
        int inner_GetPageCss_i = GetPageCss_i;
        // GetPageCss - 0
        if (this->offset_0)
        {
            return 6;
        }
        // GetPageCss - 5
        if (this->offset_32.find(a2) == this->offset_32.end())
        {
            std::stringstream v38;
            v38 << "setCssToHead([],undefined,{path:\"";
            v38 << WXML::Rewrite::ToStringCode2(a2);
            v38 << "\"})";
            a3 = v38.str();
            return 1;
        }
        else
        {
            // GetPageCss - 10
            std::string v30;
            auto v23 = this->offset_32;
            
            if (
                this->offset_32[a2]->offset_156.get()
                && this->offset_32[a2]->offset_156->offset_12 != -1
            )
            {
                auto v6 = this->offset_32[a2];
                auto v28 = v6->offset_156;
                std::stringstream v38;
                v38 << "Some selectors are not allowed in component wxss, including tag name selectors, ID selectors, and attribute selectors.(";
                v38 << WXML::Rewrite::ToStringCode2(a2);
                v38 << ":" << v28->offset_20 << ":" << v28->offset_24 << ")";
                v30 = v38.str();
            }
            std::stringstream v38;
            v38 << "setCssToHead([";
            if (this->offset_128[a2] <= 1)
            {
                std::string v35;
                auto v33 = v23[a2];
                this->GenExpr(v33, v38, v35);
                if (v35.length())
                {
                    this->DealRPX(v35, v38);
                }

            }
            else
            {
                v38 << "[2,\"";
                std::string v12 = this->offset_152[a2];
                v38 << WXML::Rewrite::ToStringCode2(v12);
                v38 << "\"]";
            }
            v38 << "]";
            if (v30.length())
            {
                v38 << ",\"" << v30 << "\"";
            }
            else
            {
                v38 << ",undefined";
            }
            v38 << ",{path:\"";
            v38 << WXML::Rewrite::ToStringCode2(a2);
            v38 << "\"})";
            a3 = v38.str();

        }
        return this->offset_0;
    }
    int XCompiler::MarkImported(std::string const& a2)
    {
        if (this->offset_32.count(a2))
        {
            std::deque<std::string> v15;
            v15.push_back(a2);
            while (v15.begin() != v15.end())
            {
                std::string v14 = v15.front();
                v15.pop_front();

                if (this->offset_32[v14]->offset_156.get() && this->offset_32[v14]->offset_156->offset_12 != -1)
                {
                    auto v11 = this->offset_32[v14];
                    auto v5 = this->offset_32[a2];
                    v5->offset_156 = v11->offset_156;
                }
                this->offset_128[v14]++;
                for (int i = 0; i < this->offset_56[v14].size(); i++)
                {
                    v15.push_back(this->offset_56[v14][i]);
                }
                
            }
            
        }
        return 0;
    }
    int XCompiler::GetCommHead(std::vector<std::string> & a2, std::string& a3, bool a4, std::string const& a5)
    {
        if (a4 && this->offset_32.count(a5))
        {
            a2.push_back(a5);
        }
        for (int i = 0; i < a2.size(); i++)
        {
            int t = this->MarkImported(a2[i]);
            if (t)
                return t;
        }
        std::stringstream v37;
        for (auto j = this->offset_32.rbegin(); j != this->offset_32.rend(); j++)
        {
            if (this->offset_128[j->first] > 1)
            {
                this->offset_152[j->first] = j->first;
            }
        }
        for (auto k = this->offset_32.begin(); k != this->offset_32.end(); k++)
        {
            if (this->offset_128[k->first] > 1)
            {
                auto v9 = this->offset_152[k->first];
                v37 << "if (!__COMMON_STYLESHEETS__.hasOwnProperty('";
                v37 << WXML::Rewrite::ToStringCode2(v9);
                v37 << "'))__COMMON_STYLESHEETS__['";
                v37 << WXML::Rewrite::ToStringCode2(v9);
                v37 << "']=[";

                std::string v33;
                auto v29 = k->second;
                this->GenExpr(v29, v37, v33);
                // 
                if (v33.length())
                {
                    this->DealRPX(v33, v37);
                }
                v37 << "];";

            }
        }
        std::string v26;
        if (a4)
        {
            this->GetPageCss(a5, v26, 1);
            if (v26.length())
            {
                v26.append("();");
            }
        }
        std::string v29;
        this->GetHostRule(v29);
        if (v29.length())
        {
            v29 += "();";
        }
        std::string v33 = v37.str();
        int v23 = v33.length() + 3022;
        char buf[v23];
        snprintf(buf, v23, "var BASE_DEVICE_WIDTH = 750;\n"
            "var isIOS=navigator.userAgent.match(\"iPhone\");\n"
            "var deviceWidth = window.screen.width || 375;\n"
            "var deviceDPR = window.devicePixelRatio || 2;\n"
            "var checkDeviceWidth = window.__checkDeviceWidth__ || function() {\n"
            "var newDeviceWidth = window.screen.width || 375\n"
            "var newDeviceDPR = window.devicePixelRatio || 2\n"
            "var newDeviceHeight = window.screen.height || 375\n"
            "if (window.screen.orientation && /^landscape/.test(window.screen.orientation.type || '')) newDeviceWidth = newD"
            "eviceHeight\n"
            "if (newDeviceWidth !== deviceWidth || newDeviceDPR !== deviceDPR) {\n"
            "deviceWidth = newDeviceWidth\n"
            "deviceDPR = newDeviceDPR\n"
            "}\n"
            "}\n"
            "checkDeviceWidth()\n"
            "var eps = 1e-4;\n"
            "var transformRPX = window.__transformRpx__ || function(number, newDeviceWidth) {\n"
            "if ( number === 0 ) return 0;\n"
            "number = number / BASE_DEVICE_WIDTH * ( newDeviceWidth || deviceWidth );\n"
            "number = Math.floor(number + eps);\n"
            "if (number === 0) {\n"
            "if (deviceDPR === 1 || !isIOS) {\n"
            "return 1;\n"
            "} else {\n"
            "return 0.5;\n"
            "}\n"
            "}\n"
            "return number;\n"
            "}\n"
            "window.__rpxRecalculatingFuncs__ = window.__rpxRecalculatingFuncs__ || [];\n"
            "var __COMMON_STYLESHEETS__ = __COMMON_STYLESHEETS__||{}\n"
            "%s\n"
            "var setCssToHead = function(file, _xcInvalid, info) {\n"
            "var Ca = {};\n"
            "var css_id;\n"
            "var info = info || {};\n"
            "var _C = __COMMON_STYLESHEETS__\n"
            "function makeup(file, opt) {\n"
            "var _n = typeof(file) === \"string\";\n"
            "if ( _n && Ca.hasOwnProperty(file)) return \"\";\n"
            "if ( _n ) Ca[file] = 1;\n"
            "var ex = _n ? _C[file] : file;\n"
            "var res=\"\";\n"
            "for (var i = ex.length - 1; i >= 0; i--) {\n"
            "var content = ex[i];\n"
            "if (typeof(content) === \"object\")\n"
            "{\n"
            "var op = content[0];\n"
            "if ( op == 0 )\n"
            "res = transformRPX(content[1], opt.deviceWidth) + \"px\" + res;\n"
            "else if ( op == 1)\n"
            "res = opt.suffix + res;\n"
            "else if ( op == 2 )\n"
            "res = makeup(content[1], opt) + res;\n"
            "}\n"
            "else\n"
            "res = content + res\n"
            "}\n"
            "return res;\n"
            "}\n"
            "var styleSheetManager = window.__styleSheetManager2__\n"
            "var rewritor = function(suffix, opt, style){\n"
            "opt = opt || {};\n"
            "suffix = suffix || \"\";\n"
            "opt.suffix = suffix;\n"
            "if ( opt.allowIllegalSelector != undefined && _xcInvalid != undefined )\n"
            "{\n"
            "if ( opt.allowIllegalSelector )\n"
            "console.warn( \"For developer:\" + _xcInvalid );\n"
            "else\n"
            "{\n"
            "console.error( _xcInvalid );\n"
            "}\n"
            "}\n"
            "Ca={};\n"
            "css = makeup(file, opt);\n"
            "if (styleSheetManager) {\n"
            "var key = (info.path || Math.random()) + ':' + suffix\n"
            "if (!style) {\n"
            "styleSheetManager.addItem(key, info.path);\n"
            "window.__rpxRecalculatingFuncs__.push(function(size){\n"
            "opt.deviceWidth = size.width;\n"
            "rewritor(suffix, opt, true);\n"
            "});\n"
            "}\n"
            "styleSheetManager.setCss(key, css);\n"
            "return;\n"
            "}\n"
            "if ( !style )\n"
            "{\n"
            "var head = document.head || document.getElementsByTagName('head')[0];\n"
            "style = document.createElement('style');\n"
            "style.type = 'text/css';\n"
            "style.setAttribute( \"wxss:path\", info.path );\n"
            "head.appendChild(style);\n"
            "window.__rpxRecalculatingFuncs__.push(function(size){\n"
            "opt.deviceWidth = size.width;\n"
            "rewritor(suffix, opt, style);\n"
            "});\n"
            "}\n"
            "if (style.styleSheet) {\n"
            "style.styleSheet.cssText = css;\n"
            "} else {\n"
            "if ( style.childNodes.length == 0 )\n"
            "style.appendChild(document.createTextNode(css));\n"
            "else\n"
            "style.childNodes[0].nodeValue = css;\n"
            "}\n"
            "}\n"
            "return rewritor;\n"
            "}\n",
            v33.data());
        std::string v32 = buf + v29;
        a3 = v32.append(v26);
        return 0;
    }
} // namespace WXSS