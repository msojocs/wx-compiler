#ifndef __WXML_H_
#define __WXML_H_

#include <iostream>
#include <sstream>
#include <map>
#include <vector>

namespace WXML{
    class Compiler
    {
    private:
        /* data */
    public:
        Compiler(/* args */);
        ~Compiler();


        static std::string CompileLazy(
            std::map<std::string,std::string> const&,
            std::string&,
            std::map<std::string,std::string>&,
            std::map<std::string,std::string>&,
            std::map<std::string, std::vector<std::string>, std::less<std::string>, std::allocator<std::pair<const std::string, std::vector<std::string>>>>,
            std::allocator<std::pair<const std::string, std::string>>,
            std::allocator<std::string> const&,
            std::map<std::string,std::string> const&,
            bool,
            std::string const&,
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
            std::string const&);
            
        // static void DealWxsTag();
        // static void GetFuncId();
        static void GetVersionInfo(std::string &a1, std::string a2);
        // static void ParseSource();
        // static void RenderDefine();
        static void WXMLHelperCode(std::string &result);
    };


    class DOMLib
    {
    private:
        /* data */
        const char *szWXIFControlAttrs[4] = { "wx-if", "wx:if", "wx:elif", "wx:else" }; // weak
    public:
        DOMLib(/* args */);
        ~DOMLib();
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
        
        
    } // namespace EXPRLib
    
    
}
#endif