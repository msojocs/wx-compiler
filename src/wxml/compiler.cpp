#include "../include/wxml.h"
#include "../include/define.h"
#include <iostream>
#include <set>
#include <memory>

namespace WXML{
    
    namespace Compiler
    {
        
        WXML::DOMLib::Parser ParseSource(
            std::string const& filePath,  // 文件名a2
            std::string const& content,  // 源码a3
            char lineEndMark,  // '\n' a4
            std::string const& gwxMark, // gwxMark a5
            std::string const& fMark, // "f_" a6
            std::map<std::string,std::string> const& fileContentMap, // fileContentMap a7
            std::string& errorMessage, // 错误信息 a8
            std::map<std::string, std::shared_ptr<WXML::DOMLib::WXMLDom>>& result,// map<string, ?> a9
            std::map<std::string, std::string>& map1,// ??? a10
            std::map<std::string,int>& map2, // ??? a11
            bool b1, // mark指定运算结果是否非0 a12
            bool b2)  // mark指定运算结果是否非0 a13
        {
            WXML::DOMLib::Parser pResult;
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
                    int a;
                    int b;
                    std::stringstream ss;
                    if (a != b) 
                    {
                        ss << "f_['";
                        ss << WXML::Rewrite::ToStringCode(filePath);
                        ss << "']={};";
                        ss << lineEndMark;
                    }
                    for (int i = 0; i < 99; i++)
                    {
                        /* code */
                        int dealResult = 0;
                        std::string t;
                        // dealResult = WXML::Compiler::DealWxsTag(filePath, , t);
                        if (dealResult) 
                        {
                            // 非0
                            throw dealResult;
                        }
                        ss << fMark;
                        ss <<  "['";
                        ss <<  WXML::Rewrite::ToStringCode(filePath);
                        ss <<  "']['";
                        ss <<  WXML::Rewrite::ToStringCode(t);
                        ss <<  "'] =";

                        int r = 1;
                        if (r)
                        {
                            std::string ret;
                            // PathCombine(fileName, ??, ret);
                            if (ret[0] == '/')
                            {
                                ret = '.' + ret;
                            }
                            if (/*??? && */ (gwxMark == "$gwx" || b2))
                            {
                                std::stringstream errs;
                                errs << filePath;
                                errs << ":";
                                // errs << v65; // 行号?
                                errs << ":";
                                // errs << v66[28 * i + 3];
                                errs << ":";
                                // errs << v76; // 文件的某种路径
                                errs << " not found from ";
                                errs << filePath;
                                errorMessage = errs.str();

                                // 清空
                                errs.clear();
                                throw 1;
                            }
                            ss << "f_['";
                            // ss << WXML::Rewrite::ToStringCode(v81);
                            ss << "'] || ";

                            ss << "nv_require(\"";
                            // ss << WXML::Rewrite::ToStringCode("p_" + v81);
                            ss << "\");";
                            ss << lineEndMark;

                            ss << fMark;
                            ss << "['";
                            ss << WXML::Rewrite::ToStringCode(filePath);
                            ss << "']['";
                            // ss << WXML::Rewrite::ToStringCode(v74);
                            ss << "']();";
                            ss << lineEndMark;

                        }
                        else
                        {
                            std::string data = "m_" + filePath;
                            data = data.append(":");
                            data = data.append(t);
                            // GetFuncId
                            // compile_ns
                            int compilerResult = 1;
                            if (compilerResult)
                            {
                                throw compilerResult;
                            }
                            ss << "nv_require(\"";
                            std::string m = "m_" + filePath;
                            m = m.append(":");
                            // m = m.append(v74);
                            // ss << ToStringCode(m);
                            ss << "\");";
                            ss << lineEndMark;

                            // ss << v72;
                            ss << lineEndMark;
                        }

                    }
                    std::string code = ss.str();

                    if (1)
                    {
                        map1[filePath].assign(code);
                    }
                    
                }
            }
            else if(filePath.substr(filePath.length() - 4) == ".wxs") 
            {
                std::string p = "p_" + filePath;
                // GetFuncId(map2)
                // compile_ns
                int compilerResultCode = 0;
                if (compilerResultCode) {
                    errorMessage.assign("error...");
                    throw compilerResultCode;
                }
                else
                {
                    std::stringstream code;
                    code << "f_['";
                    // code << ToStringCode(fileName);
                    code << "'] = nv_require(";
                    code << '"';
                    // code << ToStringCode("p_" + fileName);
                    code << "\");";
                    code << lineEndMark;

                    // code << compileResultData;
                    code << lineEndMark;

                    std::string strCode = code.str();
                    map1[filePath] = strCode;

                }
            }
            return pResult;
        }
        
        int CompileLazy(
            std::map<std::string,std::string> const& fileContentMap, // a2
            std::string& errorMessage,  // 错误信息 a3
            std::map<std::string,std::string>& outputContentMap, // 输出 a4
            std::map<std::string,std::string>& outputFuncMap,  // 输出 a5
            std::map<std::string, std::vector<std::string>>& dependencyListMap, // a6
            std::map<std::string, std::vector<std::string>>& componentListMap, // componentListMap a7
            std::vector<std::string> const& splitedData,       // splitedData a8
            std::map<std::string,std::string> const& mapData1, // mapData1 a9
            bool isLLA,                // isLLA a10
            std::string const& gwxMark,  // gwxMark a11
            uint mark,                // mark
            char lineEndMark,                // '\n'
            std::string const& eMark1,  // 'e'
            std::string const& charArr,  // const char off_5403C3[] = {'s','\0','e','\0'}
            std::string const& ggMark,  // "gg"
            std::string const& eMark,  // "e_"
            std::string const& dMark,  // "d_"
            std::string const& pMark,  // "p_"
            std::string const& strEndMark,  // '\0'
            std::string const& boxMark,  // "boxofchocolate"
            std::string const& gdwxMark,  // "$gdwx"
            std::string const& fMark  // "f_"
            ) 
        {
            try
            {
                /* code */
                std::map<std::string, std::shared_ptr<std::stringstream>> ssDataMap;
                std::map<std::string, std::vector<std::string>> v307_localVecStrMap1;
                std::map<std::string, std::shared_ptr<DOMLib::WXMLDom>> v304;
                std::map<std::string, std::string> v309;
                std::map<std::string, int> v311;
                for (auto it = fileContentMap.begin(); it != fileContentMap.end(); it++)
                {
                    /* code */
                    WXML::DOMLib::Parser parseResult = WXML::Compiler::ParseSource(
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
                std::shared_ptr<std::stringstream> v301_localCommonStream1; // v301
                ssDataMap["__COMMON__"] = v301_localCommonStream1;
                std::vector<std::string> commonVec;
                v307_localVecStrMap1["__COMMON__"] = commonVec;

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
                std::set<std::string> temp;
                for (int i = 0 ; i < splitedData.size(); i++)
                {
                    temp.insert(splitedData[i]);
                }
                for (auto it = splitedData.begin(); it != splitedData.end(); it++)
                {
                    auto str = it->substr(2, it->size() - 7);
                }
                std::stringstream info;
                info << "WXML::Compiler::CompileLazy: file name to paths:\n";
                info << "  all files: [ ";
                for (size_t i = 0; i < 6; i++)
                {
                    /* code */
                    info << " ";
                }
                info << "];\n";
                
                
                
                    
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
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
                // a2.insert({})
            }
            auto v5 = a2[a3];
            sprintf(&result[0], "np_%d", v5);
            return result;
        }
    } // namespace Compiler
    
    
}