#include "../include/wxml.h"
#include "../include/define.h"
#include <iostream>
#include <memory>

namespace WXML{
    
    namespace Compiler
    {
        
        int CompileLazy(
            std::map<std::string,std::string> const& fileContentMap,
            std::string& errorMessage,  // 错误信息
            std::map<std::string,std::string>& outputMap, // 输出
            std::map<std::string,std::string>& dict,  // 输出
            std::map<std::string, std::vector<std::string>>,
            std::map<std::string, std::vector<std::string>>, // vecFileContentMap
            std::vector<std::string> const& splitedData,       // splitedData
            std::map<std::string,std::string> const& mapData1, // mapData1
            bool isLLA,                // isLLA
            std::string const& gwxMark,  // gwxMark
            uint mark,                // mark
            char lineEndMark,                // '\n'
            std::string const& ,  // 'e'
            std::string const& ,  // const char off_5403C3[] = {'s','\0','e','\0'}
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
                std::map<std::string,std::vector<std::string>> v307_localVecStrMap1;
                for (auto it = fileContentMap.begin(); it != fileContentMap.end(); it++)
                {
                    /* code */
                    int parseResult = 0;
                    // parseResult = WXML::Compiler::ParseSource(
                    //             it->second,  // 源码？
                    //             it->first,  // 文件名
                    //             "\n",// ？
                    //             lineEndMark,  // '\n'
                    //             gwxMark,  // gwxMark
                    //             fMark,  // "f_"
                    //             fileContentMap,   // fileContentMap
                    //             errorMessage,   // 错误信息
                    //             &v304,  // map<string, ?>
                    //             &v309,  // ???
                    //             &v311,  // ???
                    //             (mark & 4) != 0,  // a11 -> mark
                    //             (mark & 0x20) != 0);
                    if (parseResult) {
                        return parseResult;
                    }
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

                    }
                    std::string path = "./" + splitedData[i] + ".wxml";
                    std::vector<std::string> j;
                    j.push_back(path);
                    v307_localVecStrMap1[splitedData[i]] = j;
                }
                // for (auto it = splitedData.begin(); it != splitedData.end(); it++)
                // {
                    
                // }
                
                    
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
            
            return 0;
        }
    
    
        int DealWxsTag(
            std::string const& a1,
            std::string &a2,
            std::string& a3,
            std::string& a4,
            std::string& a5,
            int & a6,
            std::string& a7)
        {
            int pos = a2.find('>', a2[4]);
            std::string sub;
            if (a2[pos - 1] == '/')
            {
                // 这个尖括号附近是这样的：/>
                sub = a2.substr(a2[4] + 1, pos + 1 - a2[4] - 6);
            }
            else
            {
                sub = a2.substr(a2[4] + 1, pos + 1 - a2[4] - 5);
            }
            std::string data = "<fak";
            data = data.append(sub);
            data = data.append("/>");
            for (int i = 1; i < a2[2]; i++)
            {
                data = "\n" + data;
            }
            for (int i = 1; i < a2[3]; i++)
            {
                data = " " + data;
            }
            // WXML::DOMLib::Parser::Parser(data);
            // TODO...
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
        
        WXML::DOMLib::Parser ParseSource(
            std::string const& fileName,  // 文件名？
            std::string const& content,  // 源码？
            char lineEndMark,  // '\n'
            std::string const& gwxMark, // gwxMark
            std::string const& fMark, // "f_"
            std::map<std::string,std::string> const&, // fileContentMap
            std::string& errorMessage, // 错误信息
            std::map<std::string,WXML::DOMLib::WXMLDom> result,// map<string, ?>
            std::map<std::string,std::string>& map1,// ???
            std::map<std::string,int> map2, // ???
            bool b1, // mark指定运算结果是否非0
            bool b2)  // mark指定运算结果是否非0
        {
            WXML::DOMLib::Parser pResult;
            bool isWxml = fileName.substr(fileName.length() - 5) == ".wxml";
            if (isWxml) 
            {
                // parse
                int parseResult = 0;
                // pResult.Parse();
                if (parseResult)
                    throw "";

                if (!parseResult) 
                {
                    // GetParsed
                    // result[fileName] = ""
                    int a;
                    int b;
                    std::stringstream ss;
                    if (a != b) 
                    {
                        ss << "f_['";
                        // ss << ToStringCode(fileName);
                        ss << "']={};";
                        ss << lineEndMark;
                    }
                    for (int i = 0; i < 99; i++)
                    {
                        /* code */
                        int dealResult = 0;
                        std::string t;
                        // dealResult = DealWxsTag(fileName, , t);
                        if (dealResult) 
                        {
                            // 非0
                            throw dealResult;
                        }
                        ss << fMark;
                        ss <<  "['";
                        //ss <<  ToStringCode(fileName);
                        ss <<  "']['";
                        //ss <<  ToStringCode(t);
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
                                errs << fileName;
                                errs << ":";
                                // errs << v65; // 行号?
                                errs << ":";
                                // errs << v66[28 * i + 3];
                                errs << ":";
                                // errs << v76; // 文件的某种路径
                                errs << " not found from ";
                                errs << fileName;
                                errorMessage = errs.str();

                                // 清空
                                errs.clear();
                                throw 1;
                            }
                            ss << "f_['";
                            // ss << ToStringCode(v81);
                            ss << "'] || ";

                            ss << "nv_require(\"";
                            // ss << ToStringCode("p_" + v81);
                            ss << "\");";
                            ss << lineEndMark;

                            ss << fMark;
                            ss << "['";
                            // ss << ToStringCode(fileName);
                            ss << "']['";
                            // ss << ToStringCode(v74);
                            ss << "']();";
                            ss << lineEndMark;

                        }
                        else
                        {
                            std::string data = "m_" + fileName;
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
                            std::string m = "m_" + fileName;
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
                        map1[fileName].assign(code);
                    }
                    
                }
            }
            else if(fileName.substr(fileName.length() - 4) == ".wxs") 
            {
                std::string p = "p_" + fileName;
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
                    map1[fileName] = strCode;

                }
            }
            return pResult;
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
                    auto it = a1.offset_12.find("name");
                    if (it != a1.offset_12.end())
                    {
                        a1.tag.replace(0, a1.tag.size(), "wx-define", 9u);
                    }
                }
                if (a1 == "wx-define")
                {
                    WXML::NameAllocator na(a17, a18);
                    auto token = a1.offset_12["name"];
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
    } // namespace Compiler
    
    
}