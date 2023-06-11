#ifndef __WXML_H_
#define __WXML_H_

#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <vector>

namespace WXML
{
    

    namespace DOMLib
    {
        /**
         * 参数值可能不是int
        */
        bool AttrsCompartor(int a1, int a2);

        /**
         * 拼接字符串
         * 
         * @param data 要拼接的字符串
         * @param join 拼接字符
         * 
        */
        std::string joinString(std::vector<std::string>& data, char join);

        /**
         * 分割字符串
         * 
         * @param str 要分割的字符串
         * @param split 分割字符
        */
        std::vector<std::string> splitString(std::string const& str, char split);

        /**
         * 路径拼接
         * 
         * @param path1 基础路径
         * @param path2 目标路径
        */
        std::string resolvePath(std::string const& path1, std::string const& path2);

        class WXMLDom
        {
        private:
            /* data */
        public:
            WXMLDom(/* args */);
            ~WXMLDom();
            void Error();
        };
        

        void recurseDependencies(WXML::DOMLib::WXMLDom const&,std::string const&,std::set<std::string> &);

        
        class Token
        {
        private:
            /* data */
            std::string str1;
            std::string str2;
            std::string str3;
        public:
            Token(/* args */);
            Token(WXML::DOMLib::Token&&);
            Token(WXML::DOMLib::Token const&);
            std::string ToString();

            /**
             * 
             * 返回值类型string
            */
            std::string ToAttrContent();
            bool IsValidVariableName(std::string const&);
            bool IsMatch(char const&);
            bool GetTemplateContent(std::string const&, std::string&);
            ~Token();
        };
        

        class Parser
        {
        private:
            /* data */
        public:
            Parser(/* args */);
            ~Parser();
            void Match();
            /**
             * wxml tag
             * view | 
            */
            bool IsValidTag(std::string &);
            WXML::DOMLib::Token Peek();
            bool Parse(
                char const*fileContent, // Str
                std::string &, // a4
                std::string const&, // a5
                std::vector<WXML::DOMLib::Token> & // a6
                );
            
            int Error(char const*, WXML::DOMLib::Token &);
            std::string GetParsed();
            std::string DOM();
            std::string DOMS();
            std::vector<std::string> ATTR_LIST();
            std::string ATTR();
            
        };

        class Machine
        {
        private:
            /* data */
            static bool bInited; // 初始化标志
            static int * TT; //类型不确定
            static int * STT;
            int offset_0; // offset + 0
            int offset_1; // offset + 1
            int lineCount;// 当前处理的行数 offset + 2
            int lineLength; // 正在处理行的长度 offset + 3
            int offset_4; // offset + 4
            int offset_5; // offset + 5
            int offset_6; // offset + 6
            std::string filePath;  // 文件路径 offset + 7

        public:
            Machine(/* args */);
            Machine(std::string const& filePath);
            ~Machine();
            void Reset(void);
            void InitTransitTable(void);
            void Feed(char,std::vector<WXML::DOMLib::Token> &,std::string &,std::vector<WXML::DOMLib::Token> &,int);
        
        };
        
    };

    namespace Compiler
    {

        int CompileLazy(
            std::map<std::string,std::string> const& fileContent,
            std::string& errorMessage,  // 错误信息
            std::map<std::string,std::string>& outputMap, // 输出1
            std::map<std::string,std::string>& dict,  // 输出2 
            std::map<std::string, std::vector<std::string>>,
            std::map<std::string, std::vector<std::string>>,  // vecFileContentMap
            std::vector<std::string> const&,       // splitedData
            std::map<std::string,std::string> const&, // mapData1
            bool,                // isLLA
            std::string const&,  // gwxMark
            uint,                // mark
            char,                // '\n'
            std::string const&,  // 'e'
            std::string const&,  // const char off_5403C3[] = {'s','\0','e','\0'}
            std::string const&,  // "gg"
            std::string const&,  // "e_"
            std::string const&,  // "d_"
            std::string const&,  // "p_"
            std::string const&,  // '\0'
            std::string const&,  // "boxofchocolate"
            std::string const&,  // "$gdwx"
            std::string const&   // "f_"
            );

        std::string Compile(
            std::map<std::string,std::string> const&,
            std::string&,
            std::map<std::string,std::string>&,
            std::map<std::string,std::string>&,
            std::map<std::string, std::vector<std::string>>,
            std::allocator<std::pair<const std::string, std::string>>,
            std::string const&,
            std::map<std::string,std::string> const&,
            bool,
            std::string const& gwxMark,
            uint mark,
            char lineEndMark,
            std::string const&,
            std::string const& ,
            std::string const& ggMark,
            std::string const& eMark,
            std::string const& dMark,
            std::string const& pMark,
            std::string const& endMark,
            std::string const& boxMark,
            std::string const& gdwxMark,
            std::string const& fMark);
            
        int DealWxsTag(
            std::string const&,
            std::string &,
            std::string&,
            std::string&,
            std::string&,
            int &,
            std::string&
        );

        // void GetFuncId();
        void GetVersionInfo(std::string &a1, std::string a2);
        WXML::DOMLib::Parser ParseSource(
            std::string const& content,  // 源码？
            std::string const& fileName,  // 文件名？
            std::string const& ,  // ？
            char lineEndMark,                  // '\n'
            std::string const& gwxMark, // gwxMark
            std::string & fMark, // "f_"
            std::map<std::string,std::string> const&, // fileData
            std::string&, // 错误信息
            std::map<std::string, WXML::DOMLib::WXMLDom>,// map<string, ?>
            std::map<std::string,std::string>&,// ???
            std::map<std::string,int>, // ???
            bool, // mark指定运算结果是否非0
            bool);  // mark指定运算结果是否非0
        int RenderDefine(
            WXML::DOMLib::WXMLDom &,
            std::string const&,
            std::map<std::string,std::string> &,
            std::string&,
            std::stringstream &,
            std::map<std::string,std::string> const&,
            bool,
            uint,
            char,
            std::string const&,
            std::string const&,
            std::string const&,
            std::string const&,
            std::string const&,
            std::string const&,
            std::string const&,
            std::string const&,
            std::string const&,
            std::string const&,
            std::string const&
            );
        void WXMLHelperCode(std::string &result);
    };

    
    class Rewrite
    {
    private:
        /* data */
    public:
        Rewrite(/* args */);
        ~Rewrite();

    };
    
    
    namespace EXPRLib
    {
        class Tokenizer
        {
        private:
            /* data */
        public:
            Tokenizer(/* args */);
            ~Tokenizer();
        };

        class ExprSyntaxTree 
        {
        private:
            /* data */
        public:
            ExprSyntaxTree(/* args */);
            ~ExprSyntaxTree();
        };

        class Token
        {
        private:
            /* data */
        public:
            Token(/* args */);
            ~Token();
            static const char * GetTokenName(const char **a1);
        };
        
        
        
    } // namespace EXPRLib
    
    
}
#endif