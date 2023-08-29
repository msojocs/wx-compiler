#ifndef __WXML_H_
#define __WXML_H_

#include <iostream>
#include <sstream>
#include <map>
#include <set>
#include <vector>
#include <cstring>
#include <memory>
#include <deque>
#include <mutex>

namespace WXML
{
    using STRTOKEN = int;
    void GetStrForMakingCSS(std::string const&,std::stringstream &);
    bool IsFloat(char const*);
    bool IsFloat(std::string const&);
    void RenderStrToken(std::pair<WXML::STRTOKEN,std::string> &, std::stringstream &);
    void StrSplitList4ClassSuffix(char const*,char const*,std::vector<std::pair<WXML::STRTOKEN,std::string>> &);
    void StrSplitList4RPX(char const*, char const*, char const*, std::vector<std::pair<WXML::STRTOKEN, std::string>> &);

    namespace Rewrite
    {
        void ToStringCode(char const*, int, std::stringstream &ss);
        void ToStringCode(std::string const&, std::stringstream &);
        void ToStringCode(std::string const&, std::string&);
        std::string ToStringCode(std::string const&);
        std::string ToStringCode2(char const*, int);
        std::string ToStringCode2(std::string const&);
        std::string ToStringCode3(char const*, int);
        std::string ToStringCode3(std::string const&);
        void GetToken(std::string const&,std::vector<std::pair<int,std::string>> &);
        int RewriteImg(std::string const&,std::string&,std::string,int,int);
        int RewriteRPX(std::string const&,std::string&,char const*,char const*);
    }

    namespace RPX
    {
        struct Table
        {
            bool inited = false;
            int *nextPos;
            int canAccept[266];
        };
        
        int accept(int *,int *[266],int &,char const*);
        int acceptID(char const*,int &);
        int acceptStr(char const*,int &);
        int acceptNum(char const*,int &);
        int acceptSymbol(char const*,int &,int &);
    } // namespace RPX

    
    class NameAllocator
    {
    private:
        /* data */
        int offset_0 = 0;
        std::string offset_4;
        std::string offset_28;
    public:
        std::string ALPAHBET = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";
        static int ALPAHBETLEN;
        NameAllocator(std::string const&,std::string const&);
        ~NameAllocator();
        void GetNextName(std::string &);
    };
    
    namespace StringTemplating
    {
        class Token
        {
        private:
            /* data */
        public:
            bool offset_0;
            std::string offset_4;
            Token(/* args */);
            ~Token();
        };
        
        
        int Deal(
            char const*,
            std::string &,
            std::vector<WXML::StringTemplating::Token> &,
            bool &
            );
    }

    namespace DOMLib
    {
        class Token
        {
            
        /*
        Token
        大小：112字节  0x70
        00（起点） B6 BF 00（文件内容） 80 CC BF 00  01 00 00 00(行数?) 01 00 00 00(行长度?) // 15
        01 00 00 00(pos) 04 00 00 00(size)  00 00 00 00 00（布尔值） F6 97 00 // 31
        38 F0 97 00 00 00 00 00  00 CC FA 00 CC F0 97 00 // 47(40是32字符串的 缓冲区起点)
        00 00 BF 00 00 00 00 00  FF FF FF FF 54 F0 97 00 // 63
        00 00 00 00 00 3A 53 00  00 00 00 00 78 F0 97 00 // 79
        00 00 00 00 00(?) F2 97 00  70 F0 97 00 00 00 00 00
        00 00 00 00 62 00 00 40  F8 F1 97 00 7A 15 46 00
        */
        private:
            /* data */
            bool offset_28 = false; // hasCache toString
            std::string offset_32 = "";  // chcheData toString
            bool offset_84 = false; // hasCache attrContent
            std::string offset_88; // chcheData attrContent
        public:
            std::string offset_0 = ""; // content
            int offset_8 = 0; // ???
            int offset_12 = 0; // ???
            int offset_16 = 0; // pos
            int offset_20 = 0; // size
            int offset_24 = 0; // ???
            int offset_40 = 0; // AttrsCompartor用到，怎么来不知道
            // ??? -3, -1
            int offset_56 = -1;
            std::string offset_60 = ""; // ???
            Token();
            Token(std::string &);
            Token(WXML::DOMLib::Token&&);
            Token(WXML::DOMLib::Token const&);
            ~Token();
            WXML::DOMLib::Token& operator=(WXML::DOMLib::Token const&);
            WXML::DOMLib::Token& operator=(WXML::DOMLib::Token &&);
            void SetContent(std::string &content);
            std::string& GetContent();
            int GetPos();

            /**
             * size: offset_20
            */
            int GetSize();
            std::string ToString();

            /**
             * 
             * 返回值类型string
            */
            std::string ToAttrContent();

            /**
             * 变量名是否有效
            */
            static bool IsValidVariableName(std::string const&);
            bool IsMatch(char const*);
            /**
             * 获取模板内容
             * {{ exp }}
            */
            static int GetTemplateContent(std::string const&, std::string&);
        };


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

        std::string  removern(std::string const&);
        
        /**
         * 
        */
        bool AttrsCompartor(
            std::pair<std::string,WXML::DOMLib::Token> const& a1,
            std::pair<std::string,WXML::DOMLib::Token> const& a2);

        class ParseException
        {
        private:
            /* data */
        public:
            ParseException(/* args */);
            ~ParseException();
        };

        class Machine
        {
        private:
            /* data */
            static bool bInited; // 初始化标志
            static int TT[0x101000u]; //类型不确定
            static int STT[0x80];
            int fileLength = 0; // offset + 0
            int offset_4 = 0; // offset + 4
            int lineCount = 0;// 当前处理的行数 offset + 8
            int lineLength = 0; // 正在处理行的长度 offset + 12
            int offset_16 = 0; // offset + 16
            int offset_20 = 0; // offset + 20
            int offset_24 = 0; // offset + 24
            std::string filePath;  // 文件路径 offset + 28

        public:
            Machine(/* args */);
            Machine(std::string const& filePath);
            ~Machine();
            void Reset(void);
            void InitTransitTable(void);
            int Feed(char,std::vector<WXML::DOMLib::Token> &,std::string &,std::vector<WXML::DOMLib::Token> &,int);
        
        };

        class Tokenizer
        {
        private:
            /* data */
            std::string fileContent;
            std::string fileName;
            WXML::DOMLib::Machine machine; // this->offset_8
        public:
            Tokenizer(char const* fileContent, std::string const& filePath);
            Tokenizer(/* args */);
            ~Tokenizer();
            int GetTokens(
                std::vector<WXML::DOMLib::Token> &,
                std::string &,
                std::vector<WXML::DOMLib::Token> &
                );
        };
        
        class StrCache
        {
        private:
            /* data */
        public:
            std::map<std::string, int> offset_0;
            std::vector<std::string> offset_24;
            StrCache(/* args */);
            ~StrCache();
            void RenderPathDefine(std::stringstream &ss);
            void Insert(std::string);
            int GetStrID(std::string);
        };
        
        class RVMOpCodePosition
        {
        private:
            /* data */
        public:
            int offset_0 = 0;
            int offset_4 = 0;
            RVMOpCodePosition(int);
            RVMOpCodePosition(/* args */);
            ~RVMOpCodePosition();
        };
        class RVMOpCodePositionRecorder
        {
        private:
            /* data */
        public:
            int offset_0 = 0;
            int offset_4 = 0;
            RVMOpCodePositionRecorder(/* args */);
            ~RVMOpCodePositionRecorder();
        };
        
        
        class WXMLDom
        {
        private:
            /*
            偏移应该不超过0x128u, 296
             */
            // std::string offset_52;
            std::string offset_196;
            std::string offset_220;
            int offset_244 = 0;
            int componentCnt = 0;
        public:
            std::string offset_0; // type
            // std::map<std::string, WXML::DOMLib::Token> offset_12;
            std::string offset_24; // ???
            std::map<std::string, WXML::DOMLib::Token> offset_48;
            std::vector<std::shared_ptr<WXML::DOMLib::WXMLDom>> offset_72; // 
            WXML::DOMLib::Token offset_84; // token
            std::shared_ptr<StrCache> offset_248;
            int offset_256 = 0; // ???
            std::map<std::string, std::string> offset_272;
            WXMLDom(/* args */);
            ~WXMLDom();
            std::string Error(
                std::string const& a2,
                WXML::DOMLib::Token const& a3,
                std::string const& a4,
                std::string const& a5
                );
            void RenderMeAsFunction(
                std::string const&,
                std::string const&,
                std::string&,
                std::string const&,
                std::stringstream &,
                WXML::NameAllocator *,
                std::string const&,
                std::string const&,
                std::string const&,
                std::string const&,
                std::string const&,
                char,
                std::string const&,
                bool,
                bool,
                uint,
                std::string const&
                );
            void RenderChildren(
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
                );
            void RenderNonDefine(
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
                );
            bool IfHasItsElse(
                int a2,
                std::vector<std::string> const& a3
                );
            void RecordAllPath(void);
            void RewriteTree(void);
            void Print(int,char const*, std::stringstream *);
            void PrintMe(int,char const*, std::stringstream *);
            bool operator==(std::string tag);
            std::string ToCamelStyle(std::string const&);
            void AddTestAttr(std::string const&, std::stringstream &, char);
            bool HasSpAttrPrefix(void);
            void MarkIfHasDescendant(std::vector<std::string> const&);
            void CutDomsForCustomComponent(std::vector<std::string> const&);
            void RenderAllOpsAndRecord(
                std::string const&,
                std::string&,
                std::stringstream &,
                std::map<std::string,WXML::DOMLib::RVMOpCodePosition> &,
                WXML::DOMLib::RVMOpCodePositionRecorder *,
                bool,
                const std::map<std::string,std::string> &);
            int DealSingleTokenToOps(
                std::string const&,
                std::string&,
                std::stringstream &,
                std::map<std::string,WXML::DOMLib::RVMOpCodePosition> &,
                WXML::DOMLib::Token *,
                bool,
                int,
                bool,
                WXML::DOMLib::RVMOpCodePositionRecorder *,
                bool,
                const std::map <std::string,std::string> &);
        };
        

        void recurseDependencies(std::shared_ptr<WXML::DOMLib::WXMLDom> const&,std::string const&,std::set<std::string> &);

        class Parser
        {
        private:
            /* data */
            std::deque<std::string> dequeStr;// offset_8
            std::deque<std::shared_ptr<WXML::DOMLib::WXMLDom>> dequeDom; // offset_48 int a1 + 48, _DWORD * a1 + 12
            std::vector<WXML::DOMLib::Token> tokenList; // offset_88
            int peekIndex = 0; // offset_100
            WXML::DOMLib::Token offset_104;
            int offset_128 = 0;
            WXML::DOMLib::Token offset_216;
            std::string filePath;
        public:
            std::shared_ptr<WXML::DOMLib::WXMLDom> dom; // offset_72
            Parser(/* args */);
            ~Parser();
            void Match();
            /**
             * wxml tag
             * view | 
            */
            static bool IsValidTag(std::string &);
            WXML::DOMLib::Token Peek();
            bool Parse(
                char const*fileContent, // Str
                std::string & errorMessage, // a4
                std::string const& filePath, // a5
                std::vector<WXML::DOMLib::Token> & // a6
                );
            
            WXML::DOMLib::ParseException Error(char const*, WXML::DOMLib::Token *);
            std::shared_ptr<DOMLib::WXMLDom> GetParsed();
            void DOM();
            void DOMS();
            void ATTR_LIST();
            void ATTR();
            
        };
        
    };

    namespace Compiler
    {

        int ParseSource(
            std::string const& content,  // 源码？a2
            std::string const& filePath,  // 文件名？ a3
            char lineEndMark,                  // '\n' a4
            std::string const& gwxMark, // gwxMark a5
            std::string const& fMark, // "f_" a6
            std::map<std::string,std::string> const&, // fileData a7
            std::string&, // 错误信息 a8
            std::map<std::string, std::shared_ptr<DOMLib::WXMLDom>>&,// map<string, ?> a9
            std::map<std::string,std::string>&,// ??? a10
            std::map<std::string,int>&, // ??? a11
            bool, // mark指定运算结果是否非0 a12
            bool);  // mark指定运算结果是否非0 a13
        int CompileLazy(
            std::map<std::string,std::string> const& fileContent,
            std::string& errorMessage,  // 错误信息
            std::map<std::string,std::string>& outputContentMap, // 输出1 编译后的代码映射
            std::map<std::string,std::string>& outputFuncMap,  // 输出2 编译后的函数名
            std::map<std::string, std::vector<std::string>>& dependencyListMap,
            std::map<std::string, std::vector<std::string>>& componentListMap,  // vecFileContentMap componentList 页面使用的组件列表
            std::vector<std::string> const& splitedData,       // splitedData
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
        int Compile(
            std::map<std::string,std::string> const&,// a1
            std::string&, // a2
            std::string&, // a3  result
            std::map<std::string, std::vector<std::string>>,// a4
            std::map<std::string,std::string> const&,// a5
            bool,// a6
            std::string const& gwxMark,// a7
            uint mark, // a8
            char lineEndMark, // a9
            std::string const&, // a11
            std::string const& , // a12
            std::string const& ggMark, // a13
            std::string const& eMark, // a14
            std::string const& dMark, // a15
            std::string const& pMark, // a16
            std::string const& endMark, // a17
            std::string const& boxMark, // a18
            std::string const& gdwxMark, // a19
            std::string const& fMark); // a20
        
        int DealWxsTag(
            std::string const& a1,
            WXML::DOMLib::Token & a2,
            std::string& a3,
            std::string& a4,
            std::string& a5,
            int * a6,
            std::string& a7
            );
        
        std::string GetFuncId(std::map<std::string,int> &, std::string const&);
        void GetVersionInfo(std::string &a1, std::string a2);
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

    
    namespace EXPRLib
    {
        void OutputAsStringOrKeyWord(std::stringstream &,std::string const&,std::string const&, bool &);
        
        int off_55F220();
        int off_55F20C();
        int off_55F1E4();
        int off_55F1F8();
        
        class Token
        {
            /**
             * 内存结构：
             * 00 00 00 00 标识type
             * 00 00 00 00... 当标识为0时后面为需要的动态字符串tokenName(char *)
             * /////
             * 03 00 00 00 00 00 00 00  00 00 00 00 70 87 E8 00(std::string地址)
             * 00 00 00 00(回调地址)
            */
        private:
            /* data */
        public:
            int offset_0 = 0;
            std::string offset_4 = "";
            std::string offset_12;
            // offset_16;
            Token(/* args */);
            ~Token();
            std::string GetLiteral(void);
            std::string GetTokenName();
        };
        
        using Offset0Type = int();
        class Base
        {
        private:
            /* data */
        public:
            Offset0Type *offset_0;
            int offset_4_int;
            std::string offset_4_str; // std::string或int
            /*
            offset_0  值  offset_4    总大小
            ----------------------------
            0x55f20c: 3   std::string 88字节
            0x55f220: 1   std::string
            0x55f1e4: 2   int         32字节
            0x55f1f8:     empty
            */
            
            WXML::EXPRLib::Token offset_28; // ?
            int offset_32 = 0; // 0x55f20c
            std::string offset_36; // 0x55f20c 例子：a=pop;c=[];c.append()
            Base(/* args */);
            ~Base();
        };

        class BNF
        {
            
        private:
            /* data */
            // 大小：12字节
        public:
            std::vector<std::shared_ptr<WXML::EXPRLib::Base>> offset_0;
            // Offset0Type *offset_8;
            BNF(/* args */);
            ~BNF();
        };
        
        
        class TransitTable
        {
        private:
            /* data */
            static std::mutex m;
            static WXML::EXPRLib::TransitTable* instance;
            void Init_55F1E4(int root, std::string & key, std::vector<int>& offset4List);
            void Init_55F1F8(int root, std::string & key);
            void Init_55F220_0(int root, std::string & key, std::string & offset_4);
            void Init_55F20C(int root, std::string & key, std::string & offset_4, int offset_32, std::string &offset_36);
        public:
            std::map<int,std::map<std::string,std::vector<WXML::EXPRLib::BNF>>> ret;
            bool offset_24;
            TransitTable(/* args */);
            ~TransitTable();
            static TransitTable* GetInstance();
            static int GetExprNTType(void);
            static int GetAttrListNTType(void);
            void Init(void);
        };

        
        class ExprSyntaxTree 
        {
        private:
            /* data */
        public:
            std::string offset_0;
            WXML::EXPRLib::Token offset_24;
            std::vector<std::shared_ptr<WXML::EXPRLib::ExprSyntaxTree>> offset_52;
            ExprSyntaxTree(/* args */);
            ~ExprSyntaxTree();
            void RenderAsOps(
                std::stringstream & a2,
                std::string const& a3,
                bool & a4
                );
        };
        
        class Parser
        {
        private:
            /* data */
        public:
            /*
            deque 会占用40个字节
            E9 3A 55 00 00 00 00 00  38(offset_0) F8 DE 00 08 00 00 00
            70 F8 DE 00 70 F8 DE 00  70 FA DE 00 44 F8 DE 00
            70 F8 DE 00 70 F8 DE 00  70 FA DE 00 44 F8 DE 00
            */
            std::deque<std::shared_ptr<WXML::EXPRLib::Base>> offset_0;
            std::deque<std::shared_ptr<WXML::EXPRLib::ExprSyntaxTree>> offset_40;
            std::shared_ptr<WXML::EXPRLib::ExprSyntaxTree> offset_80;
            Parser(/* args */);
            ~Parser();
            int Parse(
                std::string const& a2,
                std::string const& a3,
                int a4,
                int a5,
                std::string& a6,
                bool a7);
        };
        
        class Tokenizer
        {
        private:
            /* data */
        public:
            // 006685A0
            static int TT[0x605C];
            static bool bInited;
            std::string offset_0;
            Tokenizer(/* args */);
            Tokenizer(char const*,std::string const&,int,int);
            ~Tokenizer();
            void InitTransitTable(void);
            int GetTokens(std::vector<WXML::EXPRLib::Token> &,std::string &);
        };

        enum OPShort
        {
            AOP = 2,
            CONST = 1,
            CON_LIST = 5,
            CS_GLOBAL = 11,
            DO_FUNC = 12,
            EX_DICT = 10,
            GET_FROM_ENV = 7,
            GET_NAME = 6,
            MAKE_KV = 8,
            MAKE_LIST = 4,
            NAME = 3,
            UNION_KV = 9
        };
        
    } // namespace EXPRLib
    
    
}
#endif