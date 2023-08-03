#ifndef __WXSS_H__
#define __WXSS_H__

#include <iostream>
#include <string>
#include <map>
#include <memory>
#include <vector>

namespace WXSS
{
    std::string RemoveQuote(std::string const&);
    int NewLintAndParseCSSList(std::map<std::string,std::string> const&, std::vector<std::string> &, std::string&, std::string&, int, bool, std::string const&, std::string const&);
    int LintAndParseCSSList(std::map<std::string,std::string> const&, std::string&, std::string&, std::string&, int, bool, bool, bool, std::string const&);
    void LintAndParseCSS(std::string const&, std::string const&, std::string&, std::string&, bool, bool, bool, bool, std::string const&);
    
    class Token
    {
    private:
        /* data */
    public:
        Token(/* args */);
        ~Token();
        std::string GetLiteral(void);
    };
    

    namespace CSSTreeLib
    {
        class CSSSyntaxTree
        {
        private:
            /* data */
        public:
            std::string offset_0;
            WXSS::Token offset_24;
            std::vector<std::shared_ptr<CSSSyntaxTree>> offset_120;
            std::shared_ptr<std::string> offset_140;
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

        class Parser
        {
        private:
            /* data */
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
        std::map<std::string, int> offset_136;
        XCompiler(/* args */);
        XCompiler(std::map<std::string, std::string> const&, bool, std::string const&);
        ~XCompiler();
        void DealRPX(std::string &, std::stringstream &);
        void GetHostRule(std::string &);
        void ShowTree(std::string &);
        void GetCompiled(std::string const&, std::string&);
        void GetJSCompiled(std::string const&, std::string&);
        void GetWellFormattedJSCompiled(std::string const&, std::string&);
        void GenExpr(std::shared_ptr<WXSS::CSSTreeLib::CSSSyntaxTree>, std::stringstream &, std::string &);
        int GetPageCss(std::string const&, std::string&, uint);
        void MarkImported(std::string const&);
        int GetCommHead(std::vector<std::string> &, std::string&, bool, std::string const&);

    };
    

} // namespace WXSS
#endif