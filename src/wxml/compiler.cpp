#include "../include/wxml.h"
#include "../include/define.h"
#include "../include/wxa.h"
#include <iostream>
#include <set>
#include <memory>
#include <algorithm>

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
                            // TODO: compile_ns
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
                }
                // mark - 5
                std::shared_ptr<std::stringstream> v301_localCommonStream1; // v301
                ssDataMap["__COMMON__"] = v301_localCommonStream1;
                std::vector<std::string> commonVec;
                v307_localVecStrMap1["__COMMON__"] = commonVec;

                // mark - 10
                for (int i = 0; i < splitedData.size(); i++)
                {
                    std::shared_ptr<std::stringstream> v328_ss;
                    auto it = ssDataMap.lower_bound(splitedData[i]);
                    if (it == ssDataMap.end())
                    {
                        ssDataMap.insert({splitedData[i], v328_ss});
                    }
                    std::string path = "./" + splitedData[i] + ".wxml";
                    std::vector<std::string> j;
                    j.push_back(path);
                    v307_localVecStrMap1[splitedData[i]] = j;
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
                    WXML::DOMLib::recurseDependencies(*i->second, i->first, v328);
                    // TODO: ...
                }
                // mark - 45
                for (auto i = v304.begin(); i != v304.end(); i++)
                {
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
                if (!isLLA)
                {
                    jj = "global";
                }
                else
                {
                    jj = "__globalThis";
                }
                std::string v328;
                WXML::Compiler::GetVersionInfo(v328, jj);
                *v301_localCommonStream1 << v328 << std::endl;
                // WXML::NameAllocator::NameAllocator();
                *v301_localCommonStream1 << "var $gwxc" << lineEndMark << "var $gaic={}" << lineEndMark;
                if (!isLLA)
                    *v301_localCommonStream1 << "var outerGlobal=typeof __globalThis==='undefined'?window:__globalThis;";
                // mark - 55
                // for (size_t i = 0; i < count; i++)
                // {
                //     /* code */
                // }
                // mark - 60
                // for (size_t i = 0; i < count; i++)
                // {
                //     /* code */
                // }
                // mark - 65
                
            // }
            // catch(const std::exception& e)
            // {
            //     std::cerr << e.what() << '\n';
            // }
            
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
            result.str(a1);
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
                for (int i = 0; i < 6; i++)
                {
                    /* code */
                    // WXML::Compiler::RenderDefine(
                    //         v23 + 8 * i,
                    //         a2,
                    //         a3,
                    //         a4,
                    //         a5,
                    //         a6,
                    //         a7,
                    //         a8,
                    //         a9,
                    //         a10,
                    //         a11,
                    //         a12,
                    //         a13,
                    //         a14,
                    //         a15,
                    //         a16,
                    //         a17,
                    //         a18,
                    //         a19,
                    //         a20);
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