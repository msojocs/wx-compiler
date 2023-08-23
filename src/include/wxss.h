#ifndef __WXSS_H__
#define __WXSS_H__

#include <iostream>
#include <string>
#include <map>
#include <memory>
#include <vector>
#include <deque>
#include <mutex>

namespace WXSS
{
    std::string RemoveQuote(std::string const&);
    int NewLintAndParseCSSList(std::map<std::string,std::string> const&, std::vector<std::string> &, std::string&, std::string&, int, bool, std::string const&, std::string const&);
    int LintAndParseCSSList(std::map<std::string,std::string> const&, std::string&, std::string&, std::string&, int, bool, bool, bool, std::string const&);
    void LintAndParseCSS(std::string const&, std::string const&, std::string&, std::string&, bool, bool, bool, bool, std::string const&);
    // enum TokenType {
    //     A,
    // };
    using TokenType = int;

    class Token
    {
    private:
        /* data 
            size: 92字节
        */
    public:
        int offset_0 = 1;
        std::shared_ptr<std::string> offset_4;
        int offset_12 = 0;
        int offset_16 = 0;
        int offset_20 = 0;
        int offset_24 = 0;
        char offset_28[64];
        Token(/* args */);
        ~Token();
        std::string GetLiteral(void);
        WXSS::Token& operator=(WXSS::Token const&);
    };
    
    class Tokenizer
    {
    private:
        /* data */
    public:
        using STATE = int;
        static int TT[26113];
        static bool bInited;
        std::string offset_0; // 文件内容
        std::string offset_24; // 文件路径
        Tokenizer(/* args */);
        Tokenizer(char const*,std::string const&);
        ~Tokenizer();
        void InitTransitTable(void);
        void InitSubStrCheckingCaluseTable(void);
        WXSS::TokenType TryGetAnotherTypeByAnySubStr(char const*, uint, WXSS::Tokenizer::STATE, WXSS::TokenType);
        int GetTokens(std::vector<WXSS::Token> &, std::string &, int);
        class SubStrCheckingClause
        {
        private:
            /* data */
        public:
            static bool inited;
            WXSS::Tokenizer::STATE offset_0;
            int offset_4 = 0;
            char offset_8[16];
            WXSS::TokenType offset_24;
            SubStrCheckingClause();
            SubStrCheckingClause(WXSS::Tokenizer::STATE, char const*, WXSS::TokenType);
            SubStrCheckingClause& operator=(SubStrCheckingClause const &);
        };
        static SubStrCheckingClause SCC[5];
        
        
    };
    
    namespace CSSTreeLib
    {
        using Offset0Type = int();
        
        int off_519B58();
        int off_519B2C();
        int off_519A44();
        int off_519B18();

        class Base
        {
        private:
            /* data
                size: 0x78u
             */
        public:
            Offset0Type *offset_0 = nullptr;
            std::string offset_4_str;
            int offset_4_int;
            int offset_28 = 0;
            int offset_32 = 0;
            std::string offset_36 = "";
            Base(/* args */);
            ~Base();
        };
        
        
        using BNF = std::vector<std::shared_ptr<WXSS::CSSTreeLib::Base>>;
        
        class TransitTable
        {
        private:
            /* data */
        public:
            static TransitTable* instance;
            static std::mutex m;
            std::map<int,std::map<std::string,std::vector<WXSS::CSSTreeLib::BNF>>> offset_0;
            bool offset_24;
            TransitTable(/* args */);
            ~TransitTable();
            static TransitTable* GetInstance();
            void Init(void);
            int GetTopType();
        };
        
        class CSSSyntaxTree
        {
        private:
            /* data
                size: 0xB0 176
             */
        public:
            std::string offset_0;
            WXSS::Token offset_24;
            int offset_116 = 1; // 类型未确定
            std::vector<std::shared_ptr<CSSSyntaxTree>> offset_120;
            std::shared_ptr<std::string> offset_132; // 类型未确定，不是布尔值
            std::shared_ptr<std::string> offset_140;
            std::shared_ptr<std::string[3]> offset_148;
            std::shared_ptr<Token> offset_156;
            int offset_164 = 0;
            int offset_168 = 0;
            int offset_172 = 0; // 类型未确定
            CSSSyntaxTree(/* args */);
            ~CSSSyntaxTree();
            void GetHostRule(std::string &);
            void Print2Stream(int, std::stringstream &);
            void RenderCode(std::string &,bool);
            CSSSyntaxTree& operator=(CSSSyntaxTree&);
        };
        class Rule
        {
        private:
            /* data */
        public:
        
            using Offset0Type1 = int(std::shared_ptr<WXSS::CSSTreeLib::Rule>&, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &);
            Offset0Type1 *offset_0 = nullptr;
            std::vector<std::shared_ptr<WXSS::CSSTreeLib::Rule>> offset_4_vecPtr;
            std::vector<std::pair<std::string, std::shared_ptr<WXSS::CSSTreeLib::Rule>>> offset_4_vecPair;
            std::vector<std::string> offset_4_vecStr;
            std::shared_ptr<WXSS::CSSTreeLib::Rule> offset_4_ptr;
            // ~Rule();
        };

        namespace RuleDebugRule
        {
            void InsertOriginSelectorInfo(
                std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &,
                int,
                std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &);
        }
        class LexicalChecker
        {
        private:
            /* data */
        public:
            static LexicalChecker* instance;
            static std::mutex m;
            /**
             * 初始化标志
            */
            bool offset_0 = false;
            std::shared_ptr<WXSS::CSSTreeLib::Rule> offset_4; // 8字节
            LexicalChecker(/* args */);
            ~LexicalChecker();
            void Init(bool a3);
            void Traval(std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &);
            static LexicalChecker* GetInstance(bool);
        };

        class Parser
        {
        private:
            /* data */
            std::deque<std::shared_ptr<WXSS::CSSTreeLib::Base>> offset_8;
            std::deque<std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree>> offset_48;
        public:
            std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> offset_0;
            Parser(/* args */);
            ~Parser();
            /**
             * 
             * @param a2 文件内容
             * @param a3 文件相对路径
             * @param a4 errorMessage
            */
            int Parse(std::string const& a2, std::string const& a3, std::string& a4, std::string const& a5);
        };
        
        
    } // namespace CSSTreeLib
    
    
    class XCompiler
    {
    private:
        /* data */
    public:
        int offset_0 = 0;
        int offset_4 = 0;
        std::string offset_8; // 长度24
        std::map<std::string, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree>> offset_32;
        std::map<std::string, std::vector<std::string>> offset_56;
        std::map<std::string,std::string> offset_104;
        std::map<std::string, int> offset_128;
        std::map<std::string, std::string> offset_152;
        XCompiler(/* args */);
        XCompiler(std::map<std::string, std::string> const&, bool, std::string const&);
        ~XCompiler();
        void DealRPX(std::string &, std::stringstream &);
        void GetHostRule(std::string &);
        int ShowTree(std::string &);
        int GetCompiled(std::string const&, std::string&);
        int GetJSCompiled(std::string const&, std::string&);
        int GetWellFormattedJSCompiled(std::string const&, std::string&);
        void GenExpr(std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree>, std::stringstream &, std::string &);
        int GetPageCss(std::string const&, std::string&, uint);
        int MarkImported(std::string const&);
        int GetCommHead(std::vector<std::string> &, std::string&, bool, std::string const&);

    };
    

} // namespace WXSS
#endif