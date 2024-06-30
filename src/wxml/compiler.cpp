#include "../include/wxml.h"
#include "../include/define.h"
#include "../include/wxa.h"
#include <iostream>
#include <set>
#include <memory>
#include <algorithm>
#include "../include/night.h"

namespace WXML{
    
    namespace Compiler
    {
        
        int ParseSource(
            std::string const& filePath,  // 文件名a2
            std::string const& content,  // 源码a3
            char lineEndMark,  // '\n' a4
            std::string const& gwxMark, // gwxMark a5
            std::string const& fMark, // "f_" a6
            std::map<std::string,std::string> const& fileContentMap, // fileContentMap a7
            std::string& errorMessage, // 错误信息 a8
            std::map<std::string, std::shared_ptr<WXML::DOMLib::WXMLDom>>& result,// map<string, ?> a9
            std::map<std::string, std::string>& a10,// ??? a10
            std::map<std::string,int>& a11, // ??? a11
            bool b1, // mark指定运算结果是否非0 a12
            bool b2)  // mark指定运算结果是否非0 a13
        {
            // ParseSource - 0
            int pResult = 0;
            bool isWxml = filePath.substr(filePath.length() - 5) == ".wxml";
            if (isWxml)
            {
                // parse
                bool parseResult = false;
                WXML::DOMLib::Parser v50;
                std::vector<WXML::DOMLib::Token> tokenList; // v102
                parseResult = v50.Parse(content.c_str(), errorMessage, filePath, tokenList);

                if (!parseResult)
                {
                    // ParseSource - 5
                    // GetParsed
                    std::shared_ptr<WXML::DOMLib::WXMLDom> parseDom = v50.GetParsed();
                    result[filePath] = parseDom;
                    std::stringstream ss;
                    if (tokenList.begin() != tokenList.end()) 
                    {
                        ss << "f_['";
                        ss << WXML::Rewrite::ToStringCode(filePath);
                        ss << "']={};";
                        ss << lineEndMark;
                    }
                    // ParseSource - 10
                    for (int i = 0; i < tokenList.size(); i++)
                    {
                        int dealResult = 0;
                        std::string v74, v76, v79;
                        int v65;
                        dealResult = WXML::Compiler::DealWxsTag(
                            filePath,
                            tokenList[i],
                            v74,
                            v76,
                            v79,
                            &v65,
                            errorMessage);
                        if (dealResult) 
                        {
                            // 非0
                            throw dealResult;
                        }
                        ss << fMark;
                        ss <<  "['";
                        ss <<  WXML::Rewrite::ToStringCode(filePath);
                        ss <<  "']['";
                        ss <<  WXML::Rewrite::ToStringCode(v74);
                        ss <<  "'] =";

                        if (v76.length() > 0)
                        {
                            std::string ret;
                            MMBizWxaAppComm::PathCombine(filePath, v76, ret);
                            if (ret[0] == '/')
                            {
                                ret = '.' + ret;
                            }
                            if (fileContentMap.find(ret) == fileContentMap.end() && /*??? && */ (gwxMark == "$gwx" || b2))
                            {
                                std::stringstream errs;
                                errs << filePath;
                                errs << ":";
                                errs << v65; // 行号?
                                errs << ":";
                                errs << tokenList[i].offset_12;
                                errs << ":";
                                errs << v76; // 文件的某种路径
                                errs << " not found from ";
                                errs << filePath;
                                errorMessage = errs.str();

                                throw errorMessage;
                            }
                            ss << "f_['";
                            ss << WXML::Rewrite::ToStringCode(ret);
                            ss << "'] || ";

                            ss << "nv_require(\"";
                            ss << WXML::Rewrite::ToStringCode("p_" + ret);
                            ss << "\");";
                            ss << lineEndMark;

                            ss << fMark;
                            ss << "['";
                            ss << WXML::Rewrite::ToStringCode(filePath);
                            ss << "']['";
                            ss << WXML::Rewrite::ToStringCode(v74);
                            ss << "']();";
                            ss << lineEndMark;

                        }
                        else
                        {
                            std::string data = "m_" + filePath;
                            data = data.append(":");
                            data = data.append(v74);
                            auto v83 = WXML::Compiler::GetFuncId(a11, data);
                            std::string v72;
                            int compilerResult = night::compile_ns(filePath, v83, v79, v65, v72, 0);
                            if (compilerResult)
                            {
                                throw compilerResult;
                            }
                            ss << "nv_require(\"";
                            std::string m = "m_" + filePath;
                            m = m.append(":");
                            m = m.append(v74);
                            ss << WXML::Rewrite::ToStringCode(m);
                            ss << "\");";
                            ss << lineEndMark;

                            ss << v72;
                            ss << lineEndMark;
                        }
                    }
                    // ParseSource - 15
                    auto v69 = ss.str();
                    if (v69.length() > 0)
                    {
                        a10[filePath] = v69;
                    }
                }
            // LABEL_24:
            }
            // ParseSource - 20
            else if(filePath.substr(filePath.length() - 4) == ".wxs") 
            {
                std::string v84; // errorMessage
                std::string p = "p_" + filePath;
                auto v86 = WXML::Compiler::GetFuncId(a11, p);
                int compilerResultCode = 0;
                compilerResultCode = night::compile_ns(filePath, v86, content, 1, v84, false);
                pResult = compilerResultCode;
                if (compilerResultCode) {
                    errorMessage.assign(v84);
                }
                else
                {
                    std::stringstream code;
                    code << "f_['";
                    code << WXML::Rewrite::ToStringCode(filePath);
                    code << "'] = nv_require(";
                    code << '"';
                    code << WXML::Rewrite::ToStringCode("p_" + filePath);
                    code << "\");";
                    code << lineEndMark;

                    code << v84;
                    code << lineEndMark;

                    std::string strCode = code.str();
                    a10[filePath] = strCode;

                }
            }
            return pResult;
        }

        int CompileLazy(
            std::map<std::string,std::string> const& fileContentMap, // a1
            std::string& errorMessage,  // 错误信息 a2
            std::map<std::string,std::string>& outputContentMap, // 输出 a3
            std::map<std::string,std::string>& outputFuncMap,  // 输出 a4
            std::map<std::string, std::vector<std::string>>& dependencyListMap, // a5
            std::map<std::string, std::vector<std::string>>& componentListMap, // componentListMap a6
            std::vector<std::string> const& splitedData,       // splitedData a7
            std::map<std::string,std::string> const& mapData1, // mapData1 a8
            bool isLLA,                // isLLA a9
            std::string const& gwxMark,  // gwxMark a10
            uint mark,                // mark a11
            char lineEndMark,                // '\n' a12
            std::string const& eMark1,  // 'e' a13
            std::string const& charArr,  // const char off_5403C3[] = {'s','\0','e','\0'} a14
            std::string const& ggMark,  // "gg" a15
            std::string const& eMark,  // "e_" a16
            std::string const& dMark,  // "d_" a17
            std::string const& pMark,  // "p_" a18
            std::string const& strEndMark,  // '\0' a19
            std::string const& boxMark,  // "boxofchocolate" a20
            std::string const& gdwxMark,  // "$gdwx" a21
            std::string const& fMark  // "f_" a22
            ) 
        {
            // try
            // {
                /* code */
                std::map<std::string, std::shared_ptr<std::stringstream>> ssDataMap;
                std::map<std::string, std::vector<std::string>> v307_localVecStrMap1;
                std::map<std::string, std::shared_ptr<DOMLib::WXMLDom>> v304;
                std::map<std::string, std::string> v309;
                std::map<std::string, int> v311;
                // mark - 1
                for (auto it = fileContentMap.begin(); it != fileContentMap.end(); it++)
                {
                    /* code */
                    auto parseResult = WXML::Compiler::ParseSource(
                                it->first,  // 文件路径a2
                                it->second,  // 源码 a3
                                lineEndMark,  // '\n' a4
                                gwxMark,  // gwxMark a5
                                fMark,  // "f_" a6
                                fileContentMap,   // fileContentMap a7
                                errorMessage,   // 错误信息 a8
                                v304,  // map<string, WXML::DOMLib::WXMLDom> a9
                                v309,  // ??? a10
                                v311,  // ??? a11 
                                (mark & 4) != 0,  // a11 -> mark a12
                                (mark & 0x20) != 0); // a13
                    // printf("parse result: %d", parseResult);
                    if (parseResult)
                    {
                        return parseResult;
                    }
                }
                // mark - 5
                std::shared_ptr<std::stringstream> v301_localCommonStream1(new std::stringstream()); // v301
                ssDataMap["__COMMON__"] = v301_localCommonStream1;
                std::vector<std::string> commonVec;
                v307_localVecStrMap1["__COMMON__"] = commonVec;

                // mark - 10
                for (auto i = splitedData.begin(); i != splitedData.end(); i++)
                {
                    std::shared_ptr<std::stringstream> v328_ss(new std::stringstream());
                    auto it = ssDataMap.lower_bound(*i);
                    if (it == ssDataMap.end() || *i < it->first)
                    {
                        ssDataMap.insert({*i, v328_ss});
                    }
                    std::string path = "./" + *i + ".wxml";
                    std::vector<std::string> j;
                    j.push_back(path);
                    v307_localVecStrMap1[*i] = j;
                }
                // mark - 15

                // v238
                std::set<std::string> v314;
                // mark - 20
                for (auto i = splitedData.begin() ; i != splitedData.end(); i++)
                {
                    v314.insert(*i);
                }
                // mark - 25
                // std::map<string, share_ptr<WXML::DOMLib::WXMLDom>>
                for (auto it = v304.begin(); it != v304.end(); it++)
                {
                    // 去掉 "./" 和 ".wxml"
                    auto str = it->first.substr(2, it->first.size() - 7);
                    if(v314.find(str) == v314.end())
                    {
                        v307_localVecStrMap1["__COMMON__"].push_back(it->first);
                    }
                }
                // mark - 30
                std::stringstream info;
                info << "WXML::Compiler::CompileLazy: file name to paths:\n";
                info << "  all files: [ ";
                for (auto i: fileContentMap)
                {
                    info << i.first;
                    info << " ";
                }
                // mark - 35
                info << "];\n";
                for (auto i: v307_localVecStrMap1)
                {
                    info << "  ";
                    info << i.first;
                    info << ": [ ";
                    for (auto j: i.second)
                    {
                        info << j << " ";
                        if (v304.find(j) == v304.end())
                        {
                            errorMessage = "WXML file not found: " + j;
                            return -1152;
                        }
                    }
                    info << "];\n";
                }
                auto t = info.str();
                // mark - 40
                for (auto i = v304.begin(); i != v304.end(); i++)
                {
                    std::set<std::string> v328;
                    WXML::DOMLib::recurseDependencies(i->second, i->first, v328);
                    auto depList = dependencyListMap[i->first];
                    for (auto j = v328.begin(); j != v328.end(); j++)
                    {
                        depList.push_back(*j);
                    }
                    dependencyListMap[i->first] = depList;
                }
                // mark - 45
                for (auto i = v304.begin(); i != v304.end(); i++)
                {
                    i->second->RewriteTree();
                    std::string v328 = "ALL";
                    auto v51 = componentListMap[v328];
                    std::shared_ptr<WXML::DOMLib::WXMLDom> v282 = i->second;
                    // 标记如果有后代
                    v282->MarkIfHasDescendant(v51);
                    if (isLLA)
                    {
                        v282->CutDomsForCustomComponent(v51);
                    }
                }
                // mark - 50
                /*
                
                std::map<std::string,std::string> const& fileContentMap, // a1
                std::string& errorMessage,  // 错误信息 a2
                std::map<std::string,std::string>& outputContentMap, // 输出 a3
                std::map<std::string,std::string>& outputFuncMap,  // 输出 a4
                std::map<std::string, std::vector<std::string>>& dependencyListMap, // a5
                std::map<std::string, std::vector<std::string>>& componentListMap, // componentListMap a6
                std::vector<std::string> const& splitedData,       // splitedData a7
                std::map<std::string,std::string> const& mapData1, // mapData1 a8
                bool isLLA,                // isLLA a9
                std::string const& gwxMark,  // gwxMark a10
                uint mark,                // mark a11
                char lineEndMark,                // '\n' a12
                std::string const& eMark1,  // 'e' a13
                std::string const& charArr,  // const char off_5403C3[] = {'s','\0','e','\0'} a14
                std::string const& ggMark,  // "gg" a15
                std::string const& eMark,  // "e_" a16
                std::string const& dMark,  // "d_" a17
                std::string const& pMark,  // "p_" a18
                std::string const& strEndMark,  // '\0' a19
                std::string const& boxMark,  // "boxofchocolate" a20
                std::string const& gdwxMark,  // "$gdwx" a21
                std::string const& fMark  // "f_" a22
                */
                std::string jj;
                if (isLLA)
                {
                    jj = "global";
                }
                else
                {
                    jj = "__globalThis";
                }
                std::string verInfo;
                WXML::Compiler::GetVersionInfo(verInfo, jj);
                *v301_localCommonStream1 << verInfo << std::endl;
                WXML::NameAllocator v328(strEndMark, boxMark);
                *v301_localCommonStream1 << "var $gwxc" << lineEndMark << "var $gaic={}" << lineEndMark;
                if (!isLLA)
                    *v301_localCommonStream1 << "var outerGlobal=typeof __globalThis==='undefined'?window:__globalThis;";
                // mark - 55
                int v224 = 0;
                for (auto i = ssDataMap.begin(); i != ssDataMap.end(); i++)
                {
                    std::string v318;
                    bool v225 = i->first == "__COMMON__";
                    if (v225)
                    {
                        v318 = gwxMark;
                    }
                    else
                    {
                        v318 = gwxMark + "_XC_" + std::to_string(v224);
                        v224++;
                    }
                    outputFuncMap[i->first].assign(v318);
                    auto ss = i->second;
                    if ((mark & 2) != 0)
                    {
                        *ss << "var cs = cs || [];" << lineEndMark;
                    }
                    *ss << v318;
                    *ss << "=function(_,_v,_n,_p,_s,_wp,_wl,$gwn,$gwl,$gwh,wh,$gstack,$gwrt,gra,grb,TestTest,wfor,_ca,_da,_r,_rz,_o,_oz,";
                    *ss << "_1,_1z,_2,_2z,_m,_mz,nv_getDate,nv_getRegExp,nv_console,nv_parseInt,nv_parseFloat,nv_isNaN,nv_isFinite,nv_de";
                    *ss << "codeURI,nv_decodeURIComponent,nv_encodeURI,nv_encodeURIComponent,$gdc,nv_JSON,_af,_gv,_ai,_grp,_gd,_gapi,$ix";
                    *ss << "c,_ic,_w,_ev,_tsd){";
                    *ss << "return function(path,global){" << lineEndMark;
                    *ss << "if(typeof global==='undefined'){if (typeof __GWX_GLOBAL__==='undefined')global={};else global=__GWX_GLOBAL__;}";
                    *ss << "if(typeof __WXML_GLOBAL__ === 'undefined') {";
                    *ss << "__WXML_GLOBAL__={};" << lineEndMark;
                    
                /*
                
                std::map<std::string,std::string> const& fileContentMap, // a1
                std::string& errorMessage,  // 错误信息 a2
                std::map<std::string,std::string>& outputContentMap, // 输出 a3
                std::map<std::string,std::string>& outputFuncMap,  // 输出 a4
                std::map<std::string, std::vector<std::string>>& dependencyListMap, // a5
                std::map<std::string, std::vector<std::string>>& componentListMap, // componentListMap a6
                std::vector<std::string> const& splitedData,       // splitedData a7
                std::map<std::string,std::string> const& mapData1, // mapData1 a8
                bool isLLA,                // isLLA a9
                std::string const& gwxMark,  // gwxMark a10
                uint mark,                // mark a11
                char lineEndMark,                // '\n' a12
                std::string const& eMark1,  // 'e' a13
                std::string const& charArr,  // const char off_5403C3[] = {'s','\0','e','\0'} a14
                std::string const& ggMark,  // "gg" a15
                std::string const& eMark,  // "e_" a16
                std::string const& dMark,  // "d_" a17
                std::string const& pMark,  // "p_" a18
                std::string const& strEndMark,  // '\0' a19
                std::string const& boxMark,  // "boxofchocolate" a20
                std::string const& gdwxMark,  // "$gdwx" a21
                std::string const& fMark  // "f_" a22
                */
                    if ((mark & 0x80) != 0)
                    {
                        // TODO
                        auto v252 = mapData1.find("life_cycle_callback_content");
                        if (mapData1.end() != v252)
                        {
                            *ss << v252->second;
                        }
                    }
                    *ss << "}";
                    *ss << "__WXML_GLOBAL__.modules = __WXML_GLOBAL__.modules || {};" << lineEndMark;
                    if (v225 && gwxMark != "$gwx" && (mark & 0x60) == 0)
                    {
                        *ss << "if (typeof $gwx === 'function') $gwx('init', global);" << lineEndMark;
                    }
                    *ss << "var " << eMark << "={}" << lineEndMark;
                    *ss << "if(typeof(global.entrys)==='undefined')global.entrys={};" << eMark << "=global.entrys;" << lineEndMark;
                    *ss << "var " << dMark << "={}" << lineEndMark;
                    *ss << "if(typeof(global.defines)==='undefined')global.defines={};" << dMark << "=global.defines;" << lineEndMark;
                    *ss << "var " << fMark << "={}" << lineEndMark;
                    *ss << "if(typeof(global.modules)==='undefined')global.modules={};" << fMark << "=global.modules || {};" << lineEndMark;
                    *ss << "var " << pMark << "={}" << lineEndMark;
                    if ((mark & 2) != 0)
                    {
                        *ss << "var cs = cs || [];" << lineEndMark;
                    }
                    *ss << "__WXML_GLOBAL__.ops_cached = __WXML_GLOBAL__.ops_cached || {}" << lineEndMark;
                    *ss << "__WXML_GLOBAL__.ops_set = __WXML_GLOBAL__.ops_set || {};" << lineEndMark;
                    *ss << "__WXML_GLOBAL__.ops_init = __WXML_GLOBAL__.ops_init || {};" << lineEndMark;
                    *ss << "var z=__WXML_GLOBAL__.ops_set." << v318 << " || [];" << lineEndMark;
                    if ((mark & 4) != 0)
                    {
                        *ss << "__WXML_GLOBAL__.debuginfo_set = __WXML_GLOBAL__.debuginfo_set || {};" << lineEndMark;
                        *ss << "var debugInfo=__WXML_GLOBAL__.debuginfo_set." << v318 << " || [];" << lineEndMark;
                    }
                    // i->first v248
                    auto v97 = v307_localVecStrMap1[i->first];
                    int cnt = 0;
                    for (auto i0 = v97.begin(); i0 != v97.end(); i0++)
                    {
                        std::shared_ptr<WXML::DOMLib::WXMLDom> v244 = v304[*i0];
                        cnt++;
                        std::string v98 = std::to_string(cnt);
                        std::string v321 = v318 + "_" + v98;
                        std::string j = "gz" + v321; // 可能有点问题

                        *ss << "function " << j << "(){" << lineEndMark;
                        *ss << "if( __WXML_GLOBAL__.ops_cached." << v321 << ")";
                        *ss << "return __WXML_GLOBAL__.ops_cached." << v321 << lineEndMark;
                        *ss << "__WXML_GLOBAL__.ops_cached." << v321 << "=[];" << lineEndMark;
                        *ss << "(function(z){var a=11;";
                        if ((mark & 4) != 0)
                        {
                            *ss << "function Z(ops,debugLine){z.push(['11182016',ops,debugLine])}";
                        }
                        else
                        {
                            *ss << "function Z(ops){z.push(ops)}";
                        }
                        *ss << lineEndMark;
                        std::map<std::string,WXML::DOMLib::RVMOpCodePosition> v319;
                        WXML::DOMLib::RVMOpCodePositionRecorder v300;
                        v244->RenderAllOpsAndRecord(*i0, errorMessage, *ss, v319, &v300, (mark & 4) != 0, mapData1);
                        *ss << "})(__WXML_GLOBAL__.ops_cached." << v321 << ");";
                        *ss << "return __WXML_GLOBAL__.ops_cached." << v321 << lineEndMark;
                        *ss << "}" << lineEndMark;
                        v244->offset_272["get_page_z_name"].assign(j);
                    }
                    *ss << "__WXML_GLOBAL__.ops_set." << v318 << "=z;" << lineEndMark;
                    *ss <<"__WXML_GLOBAL__.ops_init." << v318 << "=true;" << lineEndMark;
                    if ((mark & 4) != 0)
                    {
                        *ss << "__WXML_GLOBAL__.debuginfo_set." << v318 << "=debugInfo;" << lineEndMark;
                    }
                    if (v225)
                    {
                        *ss << "var nv_require=function(){var nnm={";
                        for (auto i = v311.begin(); i != v311.end(); i++)
                        {
                            *ss << '"';
                            *ss << WXML::Rewrite::ToStringCode(i->first);
                            *ss << '"';
                            *ss << ":np_" << i->second << ",";
                        }
                        *ss << "};var nom={};return function(n){";
                        *ss << "if(n[0]==='p'&&n[1]==='_'&&f_[n.slice(2)])return f_[n.slice(2)];";
                        *ss << "return function(){if(!nnm[n]) return undefined;";
                        *ss << "try{if(!nom[n])nom[n]=nnm[n]();return nom[n];}";
                        *ss << "catch(e){";
                        *ss << "e.message=e.message.replace(/nv_/g,'');";
                        *ss << "var tmp = e.stack.substring(0,e.stack.lastIndexOf(n));";
                        *ss << "e.stack = tmp.substring(0,tmp.lastIndexOf('\\n'));";
                        *ss << "e.stack = e.stack.replace(/\\snv_/g,' ');";
                        *ss << "e.stack = $gstack(e.stack);";
                        *ss << "e.stack += '\\n    at ' + n.substring(2);console.error(e);}";
                        *ss << lineEndMark;
                        *ss << "}}}()" << lineEndMark;
                        for (auto j = v309.begin(); j != v309.end(); j++)
                        {
                            *ss << j->second << lineEndMark;
                        }
                        
                    }
                    // test/wcc.disassembly.cpp line 14346
                    auto v133 = v307_localVecStrMap1[i->first];
                    std::shared_ptr<WXML::DOMLib::StrCache> v319(new WXML::DOMLib::StrCache());
                    for (auto i1 = v133.begin(); i1 != v133.end(); i1++)
                    {
                        v319->Insert(*i1);
                        auto v134 = v304[*i1];
                        v134->offset_248 = v319;
                        v134->RecordAllPath();
                    }
                    v319->RenderPathDefine(*ss);
                    auto v136 = v307_localVecStrMap1[i->first];
                    int v228 = 0;
                    for (auto i2 = v136.begin(); i2 != v136.end(); i2++)
                    {
                        auto v256 = v304[*i2];
                        *ss << dMark << "[x[";
                        auto StrID = v319->GetStrID(*i2);
                        *ss << StrID << "]]={}" << lineEndMark;
                        std::string v140 = v256->offset_272["get_page_z_name"];
                        std::map<std::string, std::string> v316;
                        int ret = WXML::Compiler::RenderDefine(
                            *v256,
                            *i2,
                            v316,
                            errorMessage, // a2
                            *ss,
                            mapData1,
                            (mark & 2) != 0, // v209
                            mark, // a11
                            lineEndMark,
                            eMark1,
                            charArr,
                            ggMark,
                            gwxMark,
                            eMark,
                            dMark,
                            pMark,
                            strEndMark,
                            boxMark,
                            gdwxMark,
                            v140
                            );
                        if (ret)
                        {
                            throw "error";
                        }
                        std::string jj = std::to_string(v228);
                        std::string v321 = jj.insert(0, "m");
                        std::string v271 = v256->offset_272["get_page_z_name"];
                        v256->RenderMeAsFunction(
                            *i2,
                            eMark,
                            errorMessage,
                            v321,
                            *ss,
                            &v328,
                            eMark1, // a13
                            charArr, // a14
                            ggMark, // a15
                            "r",  // jj
                            dMark, // a17
                            lineEndMark, // a12
                            pMark, // a18
                            0,
                            (mark & 2) != 0,
                            mark,
                            v271
                        );
                        *ss << eMark << "[x[";
                        *ss << v319->GetStrID(*i2);
                        *ss << "]]={f:" << v321 << ",j:[],i:[],ti:[";
                        std::vector<std::shared_ptr<WXML::DOMLib::WXMLDom>> v146 = v256->offset_72;
                        bool isNeedComma = false;
                        for (int i = 0; i < v146.size(); i++)
                        {
                            std::shared_ptr<WXML::DOMLib::WXMLDom> item = v146[i];
                            if (item->offset_0 == "import")
                            {
                                auto v211 = item->offset_48.find("src");
                                if (v211 != item->offset_48.end())
                                {
                                    if (isNeedComma)
                                    {
                                        *ss << ",";
                                    }
                                    *ss << "x[";
                                    auto v148 = v211->second.ToAttrContent();
                                    *ss << v319->GetStrID(v148);
                                    *ss << "]";
                                    isNeedComma = true;
                                }
                            }
                        }
                        *ss << "],ic:[";
                        // line 14507
                        isNeedComma = false;
                        for (int i = 0; i < v146.size(); i++)
                        {
                            std::shared_ptr<WXML::DOMLib::WXMLDom> item = v146[i];
                            if (item->offset_0 == "include")
                            {
                                auto v217 = item->offset_48.find("src");
                                if (v217 != item->offset_48.end())
                                {
                                    if (isNeedComma)
                                    {
                                        *ss << ",";
                                    }
                                    *ss << "x[";
                                    std::string v152 = v217->second.ToAttrContent();
                                    *ss << v319->GetStrID(v152);
                                    *ss << "]";
                                    isNeedComma = true;
                                }
                            }
                        }
                        *ss << "]}" << lineEndMark;
                        v228++;

                    }
                    *ss << "if(path&&" << eMark << "[path]){" << lineEndMark;
                    if (!isLLA)
                    {
                        *ss << "outerGlobal.__wxml_comp_version__=0.02" << lineEndMark;
                    }
                    *ss << "return function(env,dd,global){$gwxc=0;var root={\"tag\":\"wx-page\"};root.children=[]" << lineEndMark;
                    *ss << ";g=\"" << v318 << "\";" << "var main=" << eMark << "[path].f" << lineEndMark;
                    if ( (mark & 2) != 0)
                    {
                        *ss << "cs=[]" << lineEndMark;
                    }
                    if ((mark & 0x10) != 0)
                    {
                        *ss << "console.log(path+': benv:\\n'+JSON.stringify(env))" << lineEndMark;
                    }
                    *ss << "if (typeof global===\"undefined\")global={};";
                    *ss << "global.f=$gdc(" << fMark << "[path],\"\",1);" << lineEndMark;
                    if (!isLLA)
                    {
                        *ss << "if(typeof(outerGlobal.__webview_engine_version__)!='undefined'&&outerGlobal.__webview_engine_version__+1e";
                        *ss << "-6>=0.02+1e-6&&outerGlobal.__mergeData__)" << lineEndMark;
                        *ss << "{" << lineEndMark;
                        *ss << "env=outerGlobal.__mergeData__(env,dd);" << lineEndMark;
                        *ss << "}" << lineEndMark;
                    }
                    *ss << "try{" << lineEndMark;
                    if ((mark & 0x10) != 0)
                    {
                        *ss << "console.log(path+': aenv:\\n'+JSON.stringify(env)+', '+JSON.stringify(dd))" << lineEndMark;
                    }
                    if ( (mark & 0x80) != 0 )
                    {
                        *ss << "if(__WXML_GLOBAL__.before_calculate)" << "__WXML_GLOBAL__.before_calculate(path, env)" << lineEndMark;
                    }
                    *ss << "main(env,{},root,global);" << lineEndMark;
                    if ((mark & 0x80) != 0)
                    {
                        *ss << "if(__WXML_GLOBAL__.after_calculate)";
                        *ss << "__WXML_GLOBAL__.after_calculate(path, root)" << lineEndMark;
                    }
                    *ss << "_tsd(root)" << lineEndMark;
                    if (!isLLA)
                    {
                        *ss << "if(typeof(outerGlobal.__webview_engine_version__)=='undefined'|| outerGlobal.__webview_engine_version__+1";
                        *ss << "e-6<0.01+1e-6){return _ev(root);}" << lineEndMark;
                    }
                    *ss << "}catch(err){" << lineEndMark;
                    if ((mark & 2) != 0)
                    {
                        *ss << "console.log(cs, env);" << lineEndMark;
                    }
                    *ss << "console.log(err)" << lineEndMark;
                    if ((mark & 2) != 0)
                    {
                        *ss << "throw err" << lineEndMark;
                    }
                    *ss << "}" << lineEndMark;
                    if ((mark & 0x10) != 0)
                    {
                        *ss << "console.log(path+': resp:\\n'+JSON.stringify(root))" << lineEndMark;
                    }
                    *ss << ";g=\"\";" << lineEndMark;
                    *ss << "return root;" << lineEndMark;
                    *ss << "}" << lineEndMark;
                    *ss << "}" << lineEndMark;
                    *ss << "}" << lineEndMark;
                    *ss << "}(__g.a,__g.b,__g.c,__g.d,__g.e,__g.f,__g.g,__g.h,__g.i,__g.j,__g.k,__g.l,__g.m,__g.n,__g.o,__g.p,__g.q,__g.r,__g.";
                    *ss << "s,__g.t,__g.u,__g.v,__g.w,__g.x,__g.y,__g.z,__g.A,__g.B,__g.C,__g.D,__g.E,__g.F,__g.G,__g.H,__g.I,__g.J,__g.K,__g.";
                    *ss << "L,__g.M,__g.N,__g.O,__g.P,__g.Q,__g.R,__g.S,__g.T,__g.U,__g.V,__g.W,__g.X,__g.Y,__g.Z,__g.aa);";
                    if ( (mark & 8) != 0 )
                    {
                        std::vector<std::string> v192 = v307_localVecStrMap1[i->first];
                        for (auto i4 = v192.begin(); i4 != v192.end(); i4++)
                        {
                            *ss << "//" << *i4 << ":" << lineEndMark;
                            v304[*i4]->Print(0, "//", ss.get());
                        }
                    }
                    auto v197 = v307_localVecStrMap1[i->first];
                    *ss << "if(__vd_version_info__.delayedGwx||";
                    std::string v198 = "true";
                    if (!( v225 || v197.size() != 1))
                    {
                        v198 = "false";
                    }
                    *ss << v198 << ")" << v318 << "();";
                }
                /*
                
                std::map<std::string,std::string> const& fileContentMap, // a1
                std::string& errorMessage,  // 错误信息 a2
                std::map<std::string,std::string>& outputContentMap, // 输出 a3
                std::map<std::string,std::string>& outputFuncMap,  // 输出 a4
                std::map<std::string, std::vector<std::string>>& dependencyListMap, // a5
                std::map<std::string, std::vector<std::string>>& componentListMap, // componentListMap a6
                std::vector<std::string> const& splitedData,       // splitedData a7
                std::map<std::string,std::string> const& mapData1, // mapData1 a8
                bool isLLA,                // isLLA a9
                std::string const& gwxMark,  // gwxMark a10
                uint mark,                // mark a11
                char lineEndMark,                // '\n' a12
                std::string const& eMark1,  // 'e' a13
                std::string const& charArr,  // const char off_5403C3[] = {'s','\0','e','\0'} a14
                std::string const& ggMark,  // "gg" a15
                std::string const& eMark,  // "e_" a16
                std::string const& dMark,  // "d_" a17
                std::string const& pMark,  // "p_" a18
                std::string const& strEndMark,  // '\0' a19
                std::string const& boxMark,  // "boxofchocolate" a20
                std::string const& gdwxMark,  // "$gdwx" a21
                std::string const& fMark  // "f_" a22
                */
                // mark - 60
                for (auto i = ssDataMap.begin(); i != ssDataMap.end(); i++)
                {
                    auto jj = i->second->str();
                    outputContentMap[i->first] = jj;
                }
                // mark - 65
                
            // }
            // catch(const std::exception& e)
            // {
            //     std::cerr << e.what() << '\n';
            // }
            
            return 0;
        }
    
        int Compile(
            std::map<std::string,std::string> const& a2,// a2
            std::string& a3, // a3
            std::string& a4, // a4
            std::map<std::string, std::vector<std::string>> a5,// a5
            std::map<std::string, std::string> const& a6,// a6
            bool a7,// a7
            std::string const& gwxMark,// a8
            uint mark, // a9
            char lineEndMark, // a10
            std::string const& eMark1, // a11
            std::string const& sMark, // a12
            std::string const& ggMark, // a13
            std::string const& eMark2, // a14
            std::string const& dMark, // a15
            std::string const& pMark, // a16
            std::string const& endMark, // a17
            std::string const& boxMark, // a18
            std::string const& gdwxMark, // a19
            std::string const& fMark) // a20
        {
            std::stringstream v317;
            std::shared_ptr<WXML::DOMLib::StrCache> lb(new WXML::DOMLib::StrCache());
            std::map<std::string,std::shared_ptr<WXML::DOMLib::WXMLDom>> v286;
            std::map<std::string,std::string> v290;
            std::map<std::string, int> v292;
            for (auto i = a2.begin(); i != a2.end(); i++)
            {
                auto key = i->first;
                std::string suffix = key.substr(key.length() - 5);
                if (suffix == ".wxml")
                {
                    WXML::DOMLib::Parser v228;
                    std::vector<WXML::DOMLib::Token> v283;
                    int v266 = v228.Parse(i->second.data(), a3, key, v283);
                    if (v266)
                    {
                        return v266;
                    }
                    auto v323 = v228.GetParsed();
                    v286[key] = v323;
                    std::stringstream v320;
                    if (v283.begin() != v283.end())
                    {
                        v320 << "f_['";
                        v320 << WXML::Rewrite::ToStringCode(key);
                        v320 << "']={};" << lineEndMark;
                    }
                    for (int j = 0; j < v283.size(); j++)
                    {
                        auto cur = v283[j];
                        std::string v299, v304, v301, v306;
                        int v280;
                        int v246 = WXML::Compiler::DealWxsTag(key, cur, v299, v301, v304, &v280, a3);
                        if (v246)
                        {
                            return v246;
                        }
                        v320 << fMark << "['";
                        v320 << WXML::Rewrite::ToStringCode(key) << "']['";
                        v320 << WXML::Rewrite::ToStringCode(v299) << "'] =";
                        if (v301.length())
                        {
                            MMBizWxaAppComm::PathCombine(key, v301, v306);
                            if (v306[0] == '/')
                            {
                                v306 = '.' + v306;
                            }
                            if (a2.find(v306) == a2.end())
                            {
                                if ((mark & 0x20) != 0 || gwxMark == "$gwx")
                                {
                                    std::stringstream v323;
                                    v323 << key << ":" << v280 << ":" << cur.offset_12;
                                    v323 << ":" << v301 << " not found from " << key;
                                    a3 = v323.str();
                                    return 1;
                                }
                            }
                            v320 << "f_['";
                            v320 << WXML::Rewrite::ToStringCode(v306);
                            v320 << "'] || ";
                            v320 << "nv_require(\"";
                            v320 << WXML::Rewrite::ToStringCode("p_" + v306);
                            v320 << "\");" << lineEndMark;
                            v320 << fMark;
                            v320 << "['" << WXML::Rewrite::ToStringCode(key) << "']['";
                            v320 << WXML::Rewrite::ToStringCode(v299) << "']();" << lineEndMark;
                        }
                        else
                        {
                            std::string v314 = "m_" + key;
                            v314.append(":");
                            v314.append(v299);
                            std::string v309 = WXML::Compiler::GetFuncId(v292, v314);
                            std::string v297;
                            int v246 = night::compile_ns(key, v309, v304, v280, v297, false);
                            if(v246)
                            {
                                return v246;
                            }
                            v320 << "nv_require(\"";
                            v320 << WXML::Rewrite::ToStringCode(v314);
                            v320 << "\");" << lineEndMark;
                            v320 << v297 << lineEndMark;
                        }
                        // next
                    }
                    std::string v314 = v320.str();
                    if (v314.length())
                    {
                        v290[key].assign(v314);
                    }
                    
                }
                else
                {
                    std::string v316 = key.substr(key.length() - 4);
                    if (v316 == ".wxs")
                    {
                        std::string v311;
                        std::string v327 = "p_" + key;
                        std::string v314 = WXML::Compiler::GetFuncId(v292, v327);
                        int v266 = night::compile_ns(key, v314, i->second, 1, v311, false);
                        if (v266)
                        {
                            return v266;
                        }
                        std::stringstream v327_s;
                        v327_s << "f_['";
                        v327_s << WXML::Rewrite::ToStringCode(key) << "'] = nv_require(\"";
                        v327_s << WXML::Rewrite::ToStringCode("p_" + key) << "\");" << lineEndMark;
                        v327_s << v311 << lineEndMark;
                        std::string v323 = v327_s.str();
                        v290[key] = v323;
                    }
                }
            }
            std::string v323;
            // Compile - 5
            if (a7)
            {
                v323 = "global";
            }
            else
            {
                v323 = "window";
            }
            std::string v327;
            WXML::Compiler::GetVersionInfo(v327, v323);
            v317 << v327 << std::endl;
            WXML::NameAllocator v323_na(endMark, boxMark);
            v317 << "var $gwxc" << lineEndMark;
            v317 << "var $gaic={}" << lineEndMark;
            v317 << gwxMark << "=function(path,global){" << lineEndMark;
            v317 << "if(typeof global === 'undefined') global={};";
            v317 << "if(typeof __WXML_GLOBAL__ === 'undefined') {";
            v317 << "__WXML_GLOBAL__={};" << lineEndMark;
            if ((mark & 0x80) != 0)
            {
                auto lccc = a6.find("life_cycle_callback_content");
                if (lccc != a6.end())
                {
                    v317 << lccc->second;
                }

            }
            v317 << "}";
            v317 << "__WXML_GLOBAL__.modules = __WXML_GLOBAL__.modules || {};" << lineEndMark;
            if (gwxMark != "$gwx" && (mark & 0x60) == 0)
            {
                v317 << "$gwx('init', global);" << lineEndMark;
            }
            // Compile - 15
            v317 << "function _(a,b){if(typeof(b)!='undefined')a.children.push(b);}" << lineEndMark;
            v317 << "function _v(k){if(typeof(k)!='undefined')return {tag:'virtual','wxKey':k,children:[]};return {tag:'virtual',children:[]};}" << lineEndMark;
            v317 << "function _n(tag){$gwxc++;if($gwxc>=16000){throw 'Dom limit exceeded, please check if there\\'s any mistake you"
                    "\\'ve made.'};return {tag:'wx-'+tag,attr:{},children:[],n:[],raw:{},generics:{}}}" << lineEndMark;
            v317 << "function _p(a,b){b&&a.properities.push(b);}" << lineEndMark;
            v317 << "function _s(scope,env,key){return typeof(scope[key])!='undefined'?scope[key]:env[key]}" << lineEndMark;
            v317 << "function _wp(m){console.warn(\"WXMLRT_" << gwxMark << ":\"+m)}" << lineEndMark;
            v317 << "function _wl(tname,prefix){_wp(prefix+':-1:-1:-1: Template `' + tname + '` is being called recursively, will be stop.')}" << lineEndMark;
            v317 << aGwnConsoleWarn << lineEndMark;
            v317 << "function wfor( to_iter, func, env, _s, global, father, itemname, indexname, keyname )\n"
                    "{\n"
                    "var _n = wh.hn( to_iter ) === 'n'; \n"
                    "var scope = wh.rv( _s ); \n"
                    "var has_old_item = scope.hasOwnProperty(itemname);\n"
                    "var has_old_index = scope.hasOwnProperty(indexname);\n"
                    "var old_item = scope[itemname];\n"
                    "var old_index = scope[indexname];\n"
                    "var full = Object.prototype.toString.call(wh.rv(to_iter));\n"
                    "var type = full[8]; \n"
                    "if( type === 'N' && full[10] === 'l' ) type = 'X'; \n"
                    "var _y;\n"
                    "if( _n )\n"
                    "{\n"
                    "if( type === 'A' ) \n"
                    "{\n"
                    "var r_iter_item;\n"
                    "for( var i = 0 ; i < to_iter.length ; i++ )\n"
                    "{\n"
                    "scope[itemname] = to_iter[i];\n"
                    "scope[indexname] = _n ? i : wh.nh(i, 'h');\n"
                    "r_iter_item = wh.rv(to_iter[i]);\n"
                    "var key = keyname && r_iter_item ? (keyname===\"*this\" ? r_iter_item : wh.rv(r_iter_item[keyname])) : undefin"
                    "ed;\n"
                    "_y = _v(key);\n"
                    "_(father,_y);\n"
                    "func( env, scope, _y, global );\n"
                    "}\n"
                    "}\n"
                    "else if( type === 'O' ) \n"
                    "{\n"
                    "var i = 0;\n"
                    "var r_iter_item;\n"
                    "for( var k in to_iter )\n"
                    "{\n"
                    "scope[itemname] = to_iter[k];\n"
                    "scope[indexname] = _n ? k : wh.nh(k, 'h');\n"
                    "r_iter_item = wh.rv(to_iter[k]);\n"
                    "var key = keyname && r_iter_item ? (keyname===\"*this\" ? r_iter_item : wh.rv(r_iter_item[keyname])) : undefin"
                    "ed;\n"
                    "_y = _v(key);\n"
                    "_(father,_y);\n"
                    "func( env,scope,_y,global );\n"
                    "i++;\n"
                    "}\n"
                    "}\n"
                    "else if( type === 'S' ) \n"
                    "{\n"
                    "for( var i = 0 ; i < to_iter.length ; i++ )\n"
                    "{\n"
                    "scope[itemname] = to_iter[i];\n"
                    "scope[indexname] = _n ? i : wh.nh(i, 'h');\n"
                    "_y = _v( to_iter[i] + i );\n"
                    "_(father,_y);\n"
                    "func( env,scope,_y,global );\n"
                    "}\n"
                    "}\n"
                    "else if( type === 'N' ) \n"
                    "{\n"
                    "for( var i = 0 ; i < to_iter ; i++ )\n"
                    "{\n"
                    "scope[itemname] = i;\n"
                    "scope[indexname] = _n ? i : wh.nh(i, 'h');\n"
                    "_y = _v( i );\n"
                    "_(father,_y);\n"
                    "func(env,scope,_y,global);\n"
                    "}\n"
                    "}\n"
                    "else\n"
                    "{\n"
                    "}\n"
                    "}\n"
                    "else\n"
                    "{\n"
                    "var r_to_iter = wh.rv(to_iter);\n"
                    "var r_iter_item, iter_item;\n"
                    "if( type === 'A' ) \n"
                    "{\n"
                    "for( var i = 0 ; i < r_to_iter.length ; i++ )\n"
                    "{\n"
                    "iter_item = r_to_iter[i];\n"
                    "iter_item = wh.hn(iter_item)==='n' ? wh.nh(iter_item,'h') : iter_item;\n"
                    "r_iter_item = wh.rv( iter_item );\n"
                    "scope[itemname] = iter_item\n"
                    "scope[indexname] = _n ? i : wh.nh(i, 'h');\n"
                    "var key = keyname && r_iter_item ? (keyname===\"*this\" ? r_iter_item : wh.rv(r_iter_item[keyname])) : undefin"
                    "ed;\n"
                    "_y = _v(key);\n"
                    "_(father,_y);\n"
                    "func( env, scope, _y, global );\n"
                    "}\n"
                    "}\n"
                    "else if( type === 'O' ) \n"
                    "{\n"
                    "var i=0;\n"
                    "for( var k in r_to_iter )\n"
                    "{\n"
                    "iter_item = r_to_iter[k];\n"
                    "iter_item = wh.hn(iter_item)==='n'? wh.nh(iter_item,'h') : iter_item;\n"
                    "r_iter_item = wh.rv( iter_item );\n"
                    "scope[itemname] = iter_item;\n"
                    "scope[indexname] = _n ? k : wh.nh(k, 'h');\n"
                    "var key = keyname && r_iter_item ? (keyname===\"*this\" ? r_iter_item : wh.rv(r_iter_item[keyname])) : undefin"
                    "ed;\n"
                    "_y=_v(key);\n"
                    "_(father,_y);\n"
                    "func( env, scope, _y, global );\n"
                    "i++\n"
                    "}\n"
                    "}\n"
                    "else if( type === 'S' ) \n"
                    "{\n"
                    "for( var i = 0 ; i < r_to_iter.length ; i++ )\n"
                    "{\n"
                    "iter_item = wh.nh(r_to_iter[i],'h');\n"
                    "scope[itemname] = iter_item;\n"
                    "scope[indexname] = _n ? i : wh.nh(i, 'h');\n"
                    "_y = _v( to_iter[i] + i );\n"
                    "_(father,_y);\n"
                    "func( env, scope, _y, global );\n"
                    "}\n"
                    "}\n"
                    "else if( type === 'N' ) \n"
                    "{\n"
                    "for( var i = 0 ; i < r_to_iter ; i++ )\n"
                    "{\n"
                    "iter_item = wh.nh(i,'h');\n"
                    "scope[itemname] = iter_item;\n"
                    "scope[indexname]= _n ? i : wh.nh(i,'h');\n"
                    "_y = _v( i );\n"
                    "_(father,_y);\n"
                    "func(env,scope,_y,global);\n"
                    "}\n"
                    "}\n"
                    "else\n"
                    "{\n"
                    "}\n"
                    "}\n"
                    "if(has_old_item)\n"
                    "{\n"
                    "scope[itemname]=old_item;\n"
                    "}\n"
                    "else\n"
                    "{\n"
                    "delete scope[itemname];\n"
                    "}\n"
                    "if(has_old_index)\n"
                    "{\n"
                    "scope[indexname]=old_index;\n"
                    "}\n"
                    "else\n"
                    "{\n"
                    "delete scope[indexname];\n"
                    "}\n"
                    "}\n" << lineEndMark;
            // Compile - 20
            v317 << "function _ca(o)\n"
                    "{ \n"
                    "if ( wh.hn(o) == 'h' ) return true;\n"
                    "if ( typeof o !== \"object\" ) return false;\n"
                    "for(var i in o){ \n"
                    "if ( o.hasOwnProperty(i) ){\n"
                    "if (_ca(o[i])) return true;\n"
                    "}\n"
                    "}\n"
                    "return false;\n"
                    "}\n"
                    "function _da( node, attrname, opindex, raw, o )\n"
                    "{\n"
                    "var isaffected = false;\n"
                    "var value = $gdc( raw, \"\", 2 );\n"
                    "if ( o.ap && value && value.constructor===Function ) \n"
                    "{\n"
                    "attrname = \"$wxs:\" + attrname; \n"
                    "node.attr[\"$gdc\"] = $gdc;\n"
                    "}\n"
                    "if ( o.is_affected || _ca(raw) ) \n"
                    "{\n"
                    "node.n.push( attrname );\n"
                    "node.raw[attrname] = raw;\n"
                    "}\n"
                    "node.attr[attrname] = value;\n"
                    "}\n"
                    "function _r( node, attrname, opindex, env, scope, global ) \n"
                    "{\n"
                    "global.opindex=opindex;\n"
                    "var o = {}, _env;\n"
                    "var a = grb( z[opindex], env, scope, global, o );\n"
                    "_da( node, attrname, opindex, a, o );\n"
                    "}\n"
                    "function _rz( z, node, attrname, opindex, env, scope, global ) \n"
                    "{\n"
                    "global.opindex=opindex;\n"
                    "var o = {}, _env;\n"
                    "var a = grb( z[opindex], env, scope, global, o );\n"
                    "_da( node, attrname, opindex, a, o );\n"
                    "}\n"
                    "function _o( opindex, env, scope, global )\n"
                    "{\n"
                    "global.opindex=opindex;\n"
                    "var nothing = {};\n"
                    "var r = grb( z[opindex], env, scope, global, nothing );\n"
                    "return (r&&r.constructor===Function) ? undefined : r;\n"
                    "}\n"
                    "function _oz( z, opindex, env, scope, global )\n"
                    "{\n"
                    "global.opindex=opindex;\n"
                    "var nothing = {};\n"
                    "var r = grb( z[opindex], env, scope, global, nothing );\n"
                    "return (r&&r.constructor===Function) ? undefined : r;\n"
                    "}\n"
                    "function _1( opindex, env, scope, global, o )\n"
                    "{\n"
                    "var o = o || {};\n"
                    "global.opindex=opindex;\n"
                    "return gra( z[opindex], env, scope, global, o );\n"
                    "}\n"
                    "function _1z( z, opindex, env, scope, global, o )\n"
                    "{\n"
                    "var o = o || {};\n"
                    "global.opindex=opindex;\n"
                    "return gra( z[opindex], env, scope, global, o );\n"
                    "}\n"
                    "function _2( opindex, func, env, scope, global, father, itemname, indexname, keyname )\n"
                    "{\n"
                    "var o = {};\n"
                    "var to_iter = _1( opindex, env, scope, global );\n"
                    "wfor( to_iter, func, env, scope, global, father, itemname, indexname, keyname );\n"
                    "}\n"
                    "function _2z( z, opindex, func, env, scope, global, father, itemname, indexname, keyname )\n"
                    "{\n"
                    "var o = {};\n"
                    "var to_iter = _1z( z, opindex, env, scope, global );\n"
                    "wfor( to_iter, func, env, scope, global, father, itemname, indexname, keyname );\n"
                    "}\n" << lineEndMark;
            v317 << "\n"
                    "function _m(tag,attrs,generics,env,scope,global)\n"
                    "{\n"
                    "var tmp=_n(tag);\n"
                    "var base=0;\n"
                    "for(var i = 0 ; i < attrs.length ; i+=2 )\n"
                    "{\n"
                    "if(base+attrs[i+1]<0)\n"
                    "{\n"
                    "tmp.attr[attrs[i]]=true;\n"
                    "}\n"
                    "else\n"
                    "{\n"
                    "_r(tmp,attrs[i],base+attrs[i+1],env,scope,global);\n"
                    "if(base===0)base=attrs[i+1];\n"
                    "}\n"
                    "}\n"
                    "for(var i=0;i<generics.length;i+=2)\n"
                    "{\n"
                    "if(base+generics[i+1]<0)\n"
                    "{\n"
                    "tmp.generics[generics[i]]=\"\";\n"
                    "}\n"
                    "else\n"
                    "{\n"
                    "var $t=grb(z[base+generics[i+1]],env,scope,global);\n"
                    "if ($t!=\"\") $t=\"wx-\"+$t;\n"
                    "tmp.generics[generics[i]]=$t;\n"
                    "if(base===0)base=generics[i+1];\n"
                    "}\n"
                    "}\n"
                    "return tmp;\n"
                    "}\n"
                    "function _mz(z,tag,attrs,generics,env,scope,global)\n"
                    "{\n"
                    "var tmp=_n(tag);\n"
                    "var base=0;\n"
                    "for(var i = 0 ; i < attrs.length ; i+=2 )\n"
                    "{\n"
                    "if(base+attrs[i+1]<0)\n"
                    "{\n"
                    "tmp.attr[attrs[i]]=true;\n"
                    "}\n"
                    "else\n"
                    "{\n"
                    "_rz(z, tmp,attrs[i],base+attrs[i+1],env,scope,global);\n"
                    "if(base===0)base=attrs[i+1];\n"
                    "}\n"
                    "}\n"
                    "for(var i=0;i<generics.length;i+=2)\n"
                    "{\n"
                    "if(base+generics[i+1]<0)\n"
                    "{\n"
                    "tmp.generics[generics[i]]=\"\";\n"
                    "}\n"
                    "else\n"
                    "{\n"
                    "var $t=grb(z[base+generics[i+1]],env,scope,global);\n"
                    "if ($t!=\"\") $t=\"wx-\"+$t;\n"
                    "tmp.generics[generics[i]]=$t;\n"
                    "if(base===0)base=generics[i+1];\n"
                    "}\n"
                    "}\n"
                    "return tmp;\n"
                    "}\n" << lineEndMark;
            v317 << aVarNfInitFunct << lineEndMark;
            v317 << "function _af(p, a, r, c){\n"
                    "p.extraAttr = {\"t_action\": a, \"t_rawid\": r };\n"
                    "if ( typeof(c) != 'undefined' ) p.extraAttr.t_cid = c;\n"
                    "}\n" << lineEndMark;
            // Compile - 25
            if (!a7)
            {
                v317 << "function _gv( )" << lineEndMark;
                v317 << "{if( typeof( window.__webview_engine_version__) == 'undefined' ) return 0.0;" << lineEndMark;
                v317 << "return window.__webview_engine_version__;}" << lineEndMark;
            }
            v317 << "function _ai(i,p,e,me,r,c){var x=_grp(p,e,me);if(x)i.push(x);else{i.push('');_wp(me+':import:'+r+':'+c+': Path"
                    " `'+p+'` not found from `'+me+'`.')}}" << lineEndMark;
            v317 << "function _grp(p,e,me){if(p[0]!='/'){var mepart=me.split('/');mepart.pop();var ppart=p.split('/');for(var i=0;i"
                    "<ppart.length;i++){if( ppart[i]=='..')mepart.pop();else if(!ppart[i]||ppart[i]=='.')continue;else mepart.push("
                    "ppart[i]);}p=mepart.join('/');}if(me[0]=='.'&&p[0]=='/')p='.'+p;if(e[p])return p;if(e[p+'.wxml'])return p+'.wxml';}";
            v317 << lineEndMark;
            // Compile - 30
            v317 << "function _gd(p,c,e,d){if(!c)return;if(d[p][c])return d[p][c];for(var x=e[p].i.length-1;x>=0;x--){if(e[p].i[x]&&d[e[p"
                    "].i[x]][c])return d[e[p].i[x]][c]};";
            v317 << "for(var x=e[p].ti.length-1;x>=0;x--){var q=_grp(e[p].ti[x],e,p);if(q&&d[q][c])return d[q][c]}";
            v317 << "var ii=_gapi(e,p);for(var x=0;x<ii.length;x++){if(ii[x]&&d[ii[x]][c])return d[ii[x]][c]}";
            v317 << "for(var k=e[p].j.length-1;k>=0;k--)if(e[p].j[k]){for(var q=e[e[p].j[k]].ti.length-1;q>=0;q--){var pp=_grp(e[e[p].j[k"
                    "]].ti[q],e,p);if(pp&&d[pp][c]){return d[pp][c]}}}";
            v317 << "}" << lineEndMark;
            v317 << "function _gapi(e,p){if(!p)return [];if($gaic[p]){return $gaic[p]};var ret=[],q=[],h=0,t=0,put={},visited={};q.push(p"
                    ");visited[p]=true;t++;while(h<t){";
            v317 << "var a=q[h++];for(var i=0;i<e[a].ic.length;i++){";
            v317 << "var nd=e[a].ic[i];var np=_grp(nd,e,a);if(np&&!visited[np]){visited[np]=true;q.push(np);t++;}}for(var i=0;a!=p&&i<e[a"
                    "].ti.length;i++){";
            v317 << "var ni=e[a].ti[i];var nm=_grp(ni,e,a);if(nm&&!put[nm]){put[nm]=true;ret.push(nm);}}";
            v317 << "}$gaic[p]=ret;return ret;}" << lineEndMark;
            v317 << "var $ixc={};";
            v317 << "function _ic(p,ent,me,e,s,r,gg){var x=_grp(p,ent,me);ent[me].j.push(x);if(x){if($ixc[x]){_wp('-1:include:-1:-1"
                    ": `'+p+'` is being included in a loop, will be stop.');return;}$ixc[x]=true;try{ent[x].f(e,s,r,gg)}catch(e){}$"
                    "ixc[x]=false;}else{_wp(me+':include:-1:-1: Included path `'+p+'` not found from `'+me+'`.')}}";
            v317 << lineEndMark;
            v317 << "function _w(tn,f,line,c){_wp(f+':template:'+line+':'+c+': Template `'+tn+'` not found.');}";
            v317 << "function _ev(dom){var changed=false;delete dom.properities;delete dom.n;if(dom.children){do{changed=false;var "
                    "newch = [];for(var i=0;i<dom.children.length;i++){var ch=dom.children[i];if( ch.tag=='virtual'){changed=true;f"
                    "or(var j=0;ch.children&&j<ch.children.length;j++){newch.push(ch.children[j]);}}else { newch.push(ch); } } dom."
                    "children = newch; }while(changed);for(var i=0;i<dom.children.length;i++){_ev(dom.children[i]);}} return dom; }";
            v317 << lineEndMark;
            // Compile - 35
            v317 << "function _tsd( root )\n"
                    "{\n"
                    "if( root.tag == \"wx-wx-scope\" ) \n"
                    "{\n"
                    "root.tag = \"virtual\";\n"
                    "root.wxCkey = \"11\";\n"
                    "root['wxScopeData'] = root.attr['wx:scope-data'];\n"
                    "delete root.n;\n"
                    "delete root.raw;\n"
                    "delete root.generics;\n"
                    "delete root.attr;\n"
                    "}\n"
                    "for( var i = 0 ; root.children && i < root.children.length ; i++ )\n"
                    "{\n"
                    "_tsd( root.children[i] );\n"
                    "}\n"
                    "return root;\n"
                    "}\n";
            v317 << lineEndMark;
            v317 << "var " << eMark2 << "={}" << lineEndMark;
            v317 << "if(typeof(global.entrys)==='undefined')global.entrys={};" << eMark2;
            v317 << "=global.entrys;" << lineEndMark;
            v317 << "var " << dMark << "={}" << lineEndMark;
            v317 << "if(typeof(global.defines)==='undefined')global.defines={};" << dMark << "=global.defines;"; 
            v317 << lineEndMark;
            v317 << "var " << fMark << "={}" << lineEndMark;
            v317 << "if(typeof(global.modules)==='undefined')global.modules={};" << fMark << "=global.modules || {};" << lineEndMark;
            v317 << "var " << pMark << "={}" << lineEndMark;
            // Compile - 40
            if ((mark & 2) != 0)
            {
                v317 << "var cs" << lineEndMark;
            }
            for (auto j = v286.begin(); j != v286.end(); j++)
            {
                j->second->RewriteTree();
                std::string v327 = "ALL";
                std::vector<std::string> v113 = a5[v327];
                j->second->MarkIfHasDescendant(v113);
                if (a7)
                {
                    j->second->CutDomsForCustomComponent(v113);
                }
            }
            // Compile - 45
            v317 << "__WXML_GLOBAL__.ops_cached = __WXML_GLOBAL__.ops_cached || {}" << lineEndMark;
            v317 << "__WXML_GLOBAL__.ops_set = __WXML_GLOBAL__.ops_set || {};" << lineEndMark;
            v317 << "__WXML_GLOBAL__.ops_init = __WXML_GLOBAL__.ops_init || {};" << lineEndMark;
            v317 << "var z=__WXML_GLOBAL__.ops_set." << gwxMark << " || [];" << lineEndMark;
            if ((mark & 4) != 0)
            {
                v317 << "__WXML_GLOBAL__.debuginfo_set = __WXML_GLOBAL__.debuginfo_set || {};" << lineEndMark;
                v317 << "var debugInfo=__WXML_GLOBAL__.debuginfo_set." << gwxMark << " || [];" << lineEndMark;
            }
            // Compile - 50
            int v254 = 0;
            for (auto k = v286.begin(); k != v286.end(); k++)
            {
                v254++;
                std::stringstream v327;
                v327 << gwxMark << "_" << v254;
                std::string v314 = v327.str();
                std::string v316 = "gz" + v314;
                v317 << "function " << v316 << "(){" << lineEndMark;
                v317 << "if( __WXML_GLOBAL__.ops_cached." << v314 << ")";
                v317 << "return __WXML_GLOBAL__.ops_cached." << v314 << lineEndMark;
                v317 << "__WXML_GLOBAL__.ops_cached." << v314 << "=[];" << lineEndMark;
                v317 << "(function(z){var a=11;";
                if ((mark & 4) != 0)
                {
                    v317 << "function Z(ops,debugLine){z.push(['11182016',ops,debugLine])}";
                }
                else
                {
                    v317 << "function Z(ops){z.push(ops)}";
                }
                v317 << lineEndMark;
                std::map<std::string, WXML::DOMLib::RVMOpCodePosition> v311;
                WXML::DOMLib::RVMOpCodePositionRecorder v306;
                k->second->RenderAllOpsAndRecord(k->first, a3, v317, v311, &v306, (mark & 4) != 0, a6);
                v317 << "})(__WXML_GLOBAL__.ops_cached." << v314 << ");";
                v317 << "return __WXML_GLOBAL__.ops_cached." << v314 << lineEndMark;
                v317 << "}" << lineEndMark;
                k->second->offset_272["get_page_z_name"].assign(v316);

            }
            // Compile - 55
            v317 << "__WXML_GLOBAL__.ops_set." << gwxMark << "=z;" << lineEndMark;
            v317 << "__WXML_GLOBAL__.ops_init." << gwxMark << "=true;" << lineEndMark;
            if ((mark & 4) != 0)
            {
                v317 << "__WXML_GLOBAL__.debuginfo_set." << gwxMark << "=debugInfo;" << lineEndMark;

            }
            v317 << "var nv_require=function(){var nnm={";
            for (auto m = v292.begin(); m != v292.end(); m++)
            {
                v317 << "\"";
                v317 << WXML::Rewrite::ToStringCode(m->first);
                v317 << "\":np_";
                v317 << m->second << ",";
            }
            // Compile - 60
            v317 << "};var nom={};return function(n){";
            v317 << "if(n[0]==='p'&&n[1]==='_'&&f_[n.slice(2)])return f_[n.slice(2)];";
            v317 << "return function(){if(!nnm[n]) return undefined;";
            v317 << "try{if(!nom[n])nom[n]=nnm[n]();return nom[n];}" << "catch(e){";
            v317 << "e.message=e.message.replace(/nv_/g,'');";
            v317 << "var tmp = e.stack.substring(0,e.stack.lastIndexOf(n));";
            v317 << "e.stack = tmp.substring(0,tmp.lastIndexOf('\\n'));";
            v317 << "e.stack = e.stack.replace(/\\snv_/g,' ');";
            v317 << "e.stack = $gstack(e.stack);";
            v317 << "e.stack += '\\n    at ' + n.substring(2);console.error(e);}" << lineEndMark;
            v317 << "}}}()" << lineEndMark;
            for (auto n = v290.begin(); n != v290.end(); n++)
            {
                v317 << n->second << lineEndMark;
            }
            // Compile - 65
            std::shared_ptr<WXML::DOMLib::StrCache> v281(new WXML::DOMLib::StrCache());
            for (auto ii = v286.begin(); ii != v286.end(); ii++)
            {
                v281->Insert(ii->first);
                ii->second->offset_248 = v281;
                ii->second->RecordAllPath();
            }
            v281->RenderPathDefine(v317);
            int inc = 0;
            for (auto i = v286.begin(); i != v286.end(); i++)
            {
                std::map<std::string, std::string> v309;
                v317 << dMark << "[x[";
                int strId = v281->GetStrID(i->first);
                v317 << strId << "]]={}" << lineEndMark;
                std::string v165 = i->second->offset_272["get_page_z_name"];
                int v266 = WXML::Compiler::RenderDefine(
                    *i->second,
                    i->first,
                    v309,
                    a3,
                    v317,
                    a6,
                    (mark & 2) != 0,
                    mark,
                    lineEndMark,
                    eMark1,
                    sMark,
                    ggMark,
                    gwxMark,
                    eMark2,
                    dMark,
                    pMark,
                    endMark,
                    boxMark,
                    gdwxMark,
                    v165
                );
                if (v266)
                {
                    return v266;
                }
                std::stringstream v327;
                v327 << "m";
                v327 << inc;
                inc++;
                std::string v314 = v327.str();
                auto v276 = i->second->offset_272["get_page_z_name"];
                std::string v320 = "r";
                i->second->RenderMeAsFunction(
                    i->first,
                    eMark2,
                    a3,
                    v314,
                    v317,
                    &v323_na,
                    eMark1,
                    sMark,
                    ggMark,
                    v320,
                    dMark,
                    lineEndMark,
                    pMark,
                    false,
                    (mark & 2) != 0,
                    mark,
                    v276
                );
                // if (v266)
                // {
                //     return v266;
                // }
                v317 << eMark2 << "[x[";
                int v167 = v281->GetStrID(i->first);
                v317 << v167 << "]]={f:" << v314 << ",j:[],i:[],ti:[";
                auto v171 = i->second->offset_72;
                bool isNeedComma = false;
                for (int j = 0; j < v171.size(); j++)
                {
                    auto cur = v171[j];
                    if (cur->offset_0 == "import")
                    {
                        if (cur->offset_48.find("src") != cur->offset_48.end())
                        {
                            if (isNeedComma)
                            {
                                v317 << ",";
                            }
                            v317 << "x[";
                            auto v172 = cur->offset_48.find("src");
                            auto v173 = v172->second.ToAttrContent();
                            int v174 = v281->GetStrID(v173);
                            v317 << v174 << "]";
                            isNeedComma = true;
                        }
                    }
                }
                v317 << "],ic:[";
                isNeedComma = false;
                for (int jj = 0; jj < i->second->offset_72.size(); jj++)
                {
                    auto cur = i->second->offset_72[jj];
                    if (cur->offset_0 == "include")
                    {
                        auto src = cur->offset_48.find("src");
                        if (src != cur->offset_48.end())
                        {
                            if (isNeedComma)
                            {
                                v317 << ",";
                            }
                            v317 << "x[";
                            auto v178 = src->second.ToAttrContent();
                            int v179 = v281->GetStrID(v178);
                            v317 << v179 << "]";
                            isNeedComma = true;
                        }
                    }
                }
                v317 << "]}" << lineEndMark;
                
            }
            // Compile - 70
            v317 << "if(path&&" << eMark2 << "[path]){" << lineEndMark;
            if (!a7)
            {
                v317 << "window.__wxml_comp_version__=0.02" << lineEndMark;
            }
            v317 << "return function(env,dd,global){$gwxc=0;var root={\"tag\":\"wx-page\"};root.children=[]" << lineEndMark;
            v317 << "var main=" << eMark2 << "[path].f" << lineEndMark;
            if ((mark & 2) != 0)
            {
                v317 << "cs=[]" << lineEndMark;
            }
            if ((mark & 0x10) != 0)
            {
                v317 << "console.log(path+': benv:\\n'+JSON.stringify(env))" << lineEndMark;
            }
            v317 << "if (typeof global===\"undefined\")global={};";
            v317 << "global.f=$gdc(" << fMark << "[path],\"\",1);" << lineEndMark;
            if (!a7)
            {
                v317 << "if(typeof(window.__webview_engine_version__)!='undefined'&&window.__webview_engine_version__+1e-6>=0.02+1e-"
                        "6&&window.__mergeData__)" << lineEndMark;
                v317 << "{" << lineEndMark;
                v317 << "env=window.__mergeData__(env,dd);" << lineEndMark;
                v317 << "}" << lineEndMark;
            }
            v317 << "try{" << lineEndMark;
            if ((mark & 0x10) != 0)
            {
                v317 << "console.log(path+': aenv:\\n'+JSON.stringify(env)+', '+JSON.stringify(dd))" << lineEndMark;
            }
            // Compile - 75
            if ((mark & 0x80) != 0)
            {
                v317 << "if(__WXML_GLOBAL__.before_calculate)__WXML_GLOBAL__.before_calculate(path, env)" << lineEndMark;
            }
            v317 << "main(env,{},root,global);" << lineEndMark;
            if ((mark & 0x80) != 0)
            {
                v317 << "if(__WXML_GLOBAL__.after_calculate)__WXML_GLOBAL__.after_calculate(path, root)" << lineEndMark;
            }
            v317 << "_tsd(root)" << lineEndMark;
            if (!a7)
            {
                v317 << "if(typeof(window.__webview_engine_version__)=='undefined'|| window.__webview_engine_version__+1e-6<0.01+1e-"
                        "6){return _ev(root);}" << lineEndMark;
            }
            // Compile - 80
            v317 << "}catch(err){" << lineEndMark;
            if ((mark & 2) != 0)
            {
                v317 << "console.log(cs, env);" << lineEndMark;
            }
            v317 << "console.log(err)" << lineEndMark;
            if ((mark & 2) != 0)
            {
                v317 << "throw err" << lineEndMark;
            }
            v317 << "}" << lineEndMark;
            if ((mark & 0x10) != 0)
            {
                v317 << "console.log(path+': resp:\\n'+JSON.stringify(root))" << lineEndMark;
            }
            v317 << "return root;" << lineEndMark;
            v317 << "}" << lineEndMark;
            v317 << "}" << lineEndMark;
            v317 << "}" << lineEndMark;
            if ( (mark & 8) != 0 )
            {
                for (auto kk = v286.begin(); kk != v286.end(); kk++)
                {
                    v317 << "//" << kk->first << ":" << std::endl;
                    kk->second->Print(0, "//", &v317);
                }
                
            }
            a4 = v317.str();

            /*
            std::map<std::string,std::string> const& a2,// a2
            std::string& a3, // a3
            std::string& a4, // a4
            std::map<std::string, std::vector<std::string>> a5,// a5
            std::map<std::string, std::string> const& a6,// a6
            bool a7,// a7
            std::string const& gwxMark,// a8
            uint mark, // a9
            char lineEndMark, // a10
            std::string const& a11, // a11
            std::string const& a12, // a12
            std::string const& ggMark, // a13
            std::string const& eMark, // a14
            std::string const& dMark, // a15
            std::string const& pMark, // a16
            std::string const& endMark, // a17
            std::string const& boxMark, // a18
            std::string const& gdwxMark, // a19
            std::string const& fMark) // a20
            */
            return 0;
        }
        int DealWxsTag(
            std::string const& filePath,
            WXML::DOMLib::Token & a2,
            std::string& a3,
            std::string& a4,
            std::string& a5,
            int * a6,
            std::string& errorMessage)
        {
            // DealWxsTag - 0
            std::string content = a2.GetContent();
            int tokenPos = a2.GetPos();
            int pos = content.find('>', tokenPos);
            int tokenSize = a2.GetSize();
            std::string sub;
            if (content[pos - 1] == '/')
            {
                // 这个尖括号附近是这样的：/>
                sub = content.substr(tokenPos + 4, pos + 1 - tokenPos - 6);
            }
            else
            {
                sub = content.substr(tokenPos + 4, pos + 1 - tokenPos - 5);
            }
            std::string data = "<fak";
            data = data.append(sub);
            data = data.append("/>");
            // DealWxsTag - 5
            for (int i = 1; i < a2.offset_8; i++)
            {
                data = "\n" + data;
            }
            for (int i = 1; i < a2.offset_12; i++)
            {
                data = " " + data;
            }
            WXML::DOMLib::Parser p;
            std::vector<WXML::DOMLib::Token> v50;
            bool parseResult = p.Parse(data.data(), errorMessage, filePath, v50);
            // DealWxsTag - 10
            if (!parseResult)
            {
                auto dom = p.GetParsed();
                *a6 = a2.offset_8;
                if (tokenSize + tokenPos - (pos + 1)<= 0)
                {
                    a5 = "";
                }
                else{
                    a5 = content.substr(pos + 1, tokenSize + tokenPos - (pos + 1));
                }
                int v41 = 1;
                for (int i = 0; i < a5.length(); i++)
                {
                    int v14 = a5[i] - 9;
                    if (v14 > 0x17u)
                    {
                        v41 = 0;
                    }
                    else
                    {
                        bool v7 = ((0x800013u >> v14) & 1) == 0;
                        if (v7)
                            v41 = 0;
                    }
                }
                
                int v39 = dom->offset_72[0]->offset_48.count("src");
                if (v39)
                {
                    auto v16 = dom->offset_72[0]->offset_48["src"];
                    a4 = v16.ToAttrContent();
                }
                if (!v39 || v41)
                {
                    auto v42 = dom->offset_72[0]->offset_48;
                    if (v42.count("module"))
                    {
                        auto v23 = v42["module"];
                        std::string v24 = v23.ToAttrContent();
                        a3.assign(v24);
                        // 检查字符串命名格式是否正确
                        for (auto &&i : v24)
                        {
                            bool v27 = i - 'a' <= 0x19u || i - '0' <= 9u;
                            if (!v27)
                            {
                                v27 = i == '_' || i - 'A' <= 0x19u;
                            }
                            if (!v27)
                            {
                                std::stringstream ss;
                                ss << filePath << ":" << a2.offset_8 << ":" << a2.offset_12 << ":" << errorMessage;
                                ss << "invalid module name, [0-9a-zA-Z_] allowed only";
                                errorMessage = ss.str();
                                return 1;
                            }
                        }
                        return 0;
                    }
                    else
                    {
                        std::stringstream ss;
                        ss << filePath << ":" << a2.offset_8 << ":" << a2.offset_12 << ":" << errorMessage;
                        ss << "module expected in wxs tag";
                        errorMessage = ss.str();
                    }

                }
                else
                {
                    std::stringstream ss;
                    ss << filePath << ":" << a2.offset_8 << ":" << a2.offset_12 << ":" << errorMessage;
                    ss << "wxs tag with src don't need any content";
                    errorMessage = ss.str();
                }

            }
            return 1;
        }

        void GetVersionInfo(std::string &a1, std::string a2) 
        {
            std::stringstream result;
            result << "/*";
            result << "v0.5vv_20211229_syb_scopedata";
            result << "*/";

            result << a2;
            result << ".__wcc_version__='";
            result << "v0.5vv_20211229_syb_scopedata";
            result << "';";
            result << a2;
            result << ".__wcc_version_info__={\"customComponents\":true,\"fixZeroRpx\":true,\"propValueDeepCopy\":false};";
            a1 = result.str();
        }
        
        int RenderDefine(
            WXML::DOMLib::WXMLDom & a1,
            std::string const& a2,
            std::map<std::string,std::string> &a3,
            std::string& a4,
            std::stringstream & a5,
            std::map<std::string,std::string> const& a6,
            bool a7,
            uint a8,
            char a9,
            std::string const& a10,
            std::string const& a11,
            std::string const& a12,
            std::string const& a13,
            std::string const& a14,
            std::string const& a15,
            std::string const& a16,
            std::string const& a17,
            std::string const& a18,
            std::string const& a19,
            std::string const& a20
            )
        {
            try
            {
                if (a1 == "template")
                {
                    auto it = a1.offset_48.find("name");
                    if (it != a1.offset_48.end())
                    {
                        a1.offset_0.replace(0, a1.offset_0.size(), "wx-define", 9u);
                    }
                }
                if (a1 == "wx-define")
                {
                    WXML::NameAllocator na(a17, a18);
                    auto token = a1.offset_48["name"];
                    auto attr = token.ToAttrContent();
                    a3[attr].assign(a2);
                    a1.RenderMeAsFunction(
                                             a2,
                                             a14,
                                             a4,
                                             attr,
                                             a5,
                                             &na,
                                             a10,
                                             a11,
                                             a12,
                                             "r", // "r"
                                             a15,
                                             a9,
                                             a16,
                                             1,
                                             a7,
                                             a8,
                                             a20);

                }
                for (int i = 0; i < a1.offset_72.size(); i++)
                {
                    auto cur = a1.offset_72[i];
                    WXML::Compiler::RenderDefine(
                            *cur,
                            a2,
                            a3,
                            a4,
                            a5,
                            a6,
                            a7,
                            a8,
                            a9,
                            a10,
                            a11,
                            a12,
                            a13,
                            a14,
                            a15,
                            a16,
                            a17,
                            a18,
                            a19,
                            a20);
                }
                
                
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            return 0;
            
        }
        void WXMLHelperCode(std::string &result) 
        {
            result.assign(aIfThisThisGUnd);
        }
        std::string GetFuncId(std::map<std::string,int> & a2, std::string const& a3)
        {
            std::string result = "";
            if(!a2.count(a3))
            {
                // TODO: 待验证
                a2.insert({a3, a2.size()});
            }
            auto v5 = a2[a3];
            result = "np_" + std::to_string(v5);
            return result;
        }
    } // namespace Compiler
    
    
}