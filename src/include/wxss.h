#ifndef __WXSS_H__
#define __WXSS_H__

#include <iostream>
#include <string>
#include <map>
#include <memory>
#include <vector>
#include <deque>

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
        /* data */
    public:
        int offset_0;
        int offset_20;
        int offset_24;
        std::string offset_28;
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
        std::string offset_0;
        std::string offset_24;
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
        class TransitTable
        {
        private:
            /* data */
        public:
            TransitTable(/* args */);
            ~TransitTable();
            static TransitTable* GetInstance();
            void Init(void);
            std::string GetTopType();
        };
        
        class CSSSyntaxTree
        {
        private:
            /* data
                size: 0xB0
             */
        public:
            std::string offset_0;
            WXSS::Token offset_24;
            std::vector<std::shared_ptr<CSSSyntaxTree>> offset_120;
            std::shared_ptr<std::string> offset_140;
            std::string offset_164; // 类型？
            CSSSyntaxTree(/* args */);
            ~CSSSyntaxTree();
            void GetHostRule(std::string &);
            void Print2Stream(int, std::stringstream &);
            void RenderCode(std::string &,bool);
        };
        
        class LexicalChecker
        {
        private:
            /* data */
        public:
            LexicalChecker(/* args */);
            ~LexicalChecker();
            void Init();
            void Traval(std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> &);
            void GetInstance(void);
        };
        using Offset0Type = int();
        class Base
        {
        private:
            /* data
                size: 0x78u
             */
        public:
            Offset0Type *offset_0;
            std::string offset_4;
            Base(/* args */);
            ~Base();
        };
        
        
        class Parser
        {
        private:
            /* data */
            std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree> offset_0;
            std::deque<std::shared_ptr<WXSS::CSSTreeLib::Base>> offset_8;
            std::deque<std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree>> offset_48;
        public:
            Parser(/* args */);
            ~Parser();
            int Parse(std::string const&, std::string const&, std::string&, std::string const&);
        };
        
        
    } // namespace CSSTreeLib
    
    
    class XCompiler
    {
    private:
        /* data */
    public:
        int offset_0 = 0;
        int offset_4 = 0;
        std::string offset_8;
        std::map<std::string, std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree>> offset_32;
        std::map<std::string, std::vector<std::string>> offset_56;
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
        void MarkImported(std::string const&);
        int GetCommHead(std::vector<std::string> &, std::string&, bool, std::string const&);

    };
    

} // namespace WXSS
#endif