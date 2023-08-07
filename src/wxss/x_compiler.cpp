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
        std::map<std::string, int> _v64;
        if (a3)
        {
            // GetInstance
        }
        else
        {
            // GetInstance
        }
        this->offset_0 = 0;
        this->offset_4 = 0;

        std::string v55;
        for (auto i = a2.begin(); i != a2.end(); i++)
        {
            WXSS::CSSTreeLib::Parser v29;
            std::string v61;
            std::string v77;
            int v47 = v29.Parse(i->second, i->first, v61, a4);
            if (v47)
            {
                this->offset_4++;
                v55 += v61 + "\n";
                this->offset_0 = v47;
            }
            else
            {
                std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v57(new WXSS::CSSTreeLib::CSSSyntaxTree());
                WXSS::CSSTreeLib::LexicalChecker v31;
                v31.Traval(v57);
                std::string v42;
                for (int j = 0; j < v57->offset_120.size(); j++)
                {
                    auto cur = v57->offset_120[j];
                    if (cur->offset_0 == "DIRECTIVE")
                    {
                        auto v8 = cur->offset_120;
                        v42 = i->first;
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
                                auto v34 = this->offset_56;
                                std::vector<std::string> v10 = v34[i->first];
                                v10.push_back(v70);
                                std::shared_ptr<std::string> v33(new std::string());
                                v33->assign(v70);
                                cur->offset_140 = v33;
                            }

                        }

                    }
                }
                std::string v74 = v42;
                std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> v75(new WXSS::CSSTreeLib::CSSSyntaxTree());
                // this->offset_32.
                // todo...
            }
        }
        // end for
        // XCompiler - 5
        if (!this->offset_0)
        {
            for (auto j = a2.begin(); j != a2.end(); j++)
            {
                _v64[j->first] = 0;
            }
            for (auto k = a2.begin(); k != a2.end(); k++)
            {
                std::string v32 = k->first;

            }
            // XCompiler - 5 - 0
            while (true)
            {
                while (true)
                {
                    /* code */
                    break;
                }
                break;
                
            }
            
            // XCompiler - 5 - 5
            if (a2.size() != 0) // todo...
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
        for (auto i = this->offset_32.rbegin(); i != this->offset_32.rend(); i++)
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
    void XCompiler::GenExpr(std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> a2, std::stringstream & a3, std::string & a4)
    {
        throw "not implement";
    }
    int XCompiler::GetPageCss(std::string const&, std::string&, uint)
    {
        throw "not implement";
    }
    void XCompiler::MarkImported(std::string const&)
    {
        throw "not implement";
    }
    int XCompiler::GetCommHead(std::vector<std::string> &, std::string&, bool, std::string const&)
    {
        throw "not implement";
    }
} // namespace WXSS