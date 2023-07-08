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
            int pResult;
            bool isWxml = filePath.substr(filePath.length() - 5) == ".wxml";
            if (isWxml)
            {
                // parse
                bool parseResult = false;
                WXML::DOMLib::Parser v50;
                std::vector<WXML::DOMLib::Token> tokenList; // v102
                parseResult = v50.Parse(content.c_str(), errorMessage, filePath, tokenList);

                if (parseResult)
                {
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
                    for (int i = 0; i < tokenList.size(); i++)
                    {
                        /* code */
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
                            night::compile_ns(filePath, v83, v79, v65, v72, 0);
                            int compilerResult = 1;
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
                    auto v69 = ss.str();
                    if (v69.length() > 0)
                    {
                        a10[filePath] = v69;
                    }
                }
            // LABEL_24:
            }
            else if(filePath.substr(filePath.length() - 4) == ".wxs") 
            {
                std::string v84;
                std::string p = "p_" + filePath;
                auto v86 = WXML::Compiler::GetFuncId(a11, p);
                int compilerResultCode = 0;
                
                // TODO: compile_ns

                if (compilerResultCode) {
                    errorMessage.assign("error...");
                    throw compilerResultCode;
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
                        if (v304.find( j) == v304.end())
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
                    // std::vector<std::string> v278;
                    // for (auto j = v328.begin(); j != v328.end(); j++)
                    // {
                    //     v278.push_back(*j);
                    // }
                    
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
                    auto v282 = i->second;
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
                        *ss << "$gwx('init', global);" << lineEndMark;
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
                    WXML::DOMLib::StrCache v319;
                    for (auto i1 = v133.begin(); i1 != v133.end(); i1++)
                    {
                        v319.Insert(*i1);
                        auto v134 = v304[*i1];
                        v134->offset_248 = v319;
                        v134->RecordAllPath();
                    }
                    v319.RenderPathDefine(*ss);
                    auto v136 = v307_localVecStrMap1[i->first];
                    int v228 = 0;
                    for (auto i2 = v136.begin(); i2 != v136.end(); i2++)
                    {
                        auto v256 = v304[*i2];
                        *ss << dMark << "[x[";
                        auto StrID = v319.GetStrID(*i2);
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
                        *ss << v319.GetStrID(*i2);
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
                                    *ss << v319.GetStrID(v148);
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
                                    *ss << v319.GetStrID(v152);
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
            std::map<std::string,std::string> const&,// a1
            std::string&, // a2
            std::string&, // a3
            std::map<std::string, std::vector<std::string>>,// a4
            std::map<std::string,std::string> const&,// a5
            bool,// a6
            std::string const& gwxMark,// a7
            uint mark, // a8
            char lineEndMark, // a9
            std::string const&, // a10
            std::string const&, // a11
            std::string const& , // a12
            std::string const& ggMark, // a13
            std::string const& eMark, // a14
            std::string const& dMark, // a15
            std::string const& pMark, // a16
            std::string const& endMark, // a17
            std::string const& boxMark, // a18
            std::string const& gdwxMark, // a19
            std::string const& fMark) // a20
        {
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
            std::string content = a2.GetContent();
            int pos = content.find('>', content[4]);
            int tokenPos = a2.GetPos();
            int tokenSize = a2.GetSize();
            std::string sub;
            if (content[pos - 1] == '/')
            {
                // 这个尖括号附近是这样的：/>
                sub = content.substr(tokenPos + 1, pos + 1 - tokenPos - 6);
            }
            else
            {
                sub = content.substr(tokenPos + 1, pos + 1 - tokenPos - 5);
            }
            std::string data = "<fak";
            data = data.append(sub);
            data = data.append("/>");
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
            bool parseResult = p.Parse(&content[0], errorMessage, filePath, v50);
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
                    /* code */
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
                
                // TODO....

            }
            return 0;
        }

        void GetVersionInfo(std::string &a1, std::string a2) 
        {
            std::stringstream result;
            result << "/*";
            result << "v0.5vv_20200413_syb_scopedata";
            result << "*/";

            result << a2;
            result << ".__wcc_version__='";
            result << "v0.5vv_20200413_syb_scopedata";
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
            sprintf(&result[0], "np_%d", v5);
            return result;
        }
    } // namespace Compiler
    
    
}