#ifndef __WXML_H_
#define __WXML_H_

#include <iostream>

namespace WXML{
    class Compiler
    {
    private:
        /* data */
    public:
        Compiler(/* args */);
        ~Compiler();
        static void CompileLazy();
        static void DealWxsTag();
        static void GetFuncId();
        static void GetVersionInfo(int a1, int *a2);
        static void ParseSource();
        static void RenderDefine();
        static void WXMLHelperCode(std::string &result);
    };

    Compiler::Compiler(/* args */)
    {
    }

    Compiler::~Compiler()
    {
    }

    class DOMLib
    {
    private:
        /* data */
        const char *szWXIFControlAttrs[4] = { "wx-if", "wx:if", "wx:elif", "wx:else" }; // weak
    public:
        DOMLib(/* args */);
        ~DOMLib();
    };
    
    DOMLib::DOMLib(/* args */)
    {
    }
    
    DOMLib::~DOMLib()
    {
    }
    
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
        
        Tokenizer::Tokenizer(/* args */)
        {
        }
        
        Tokenizer::~Tokenizer()
        {
        }
        
    } // namespace EXPRLib
    
    
}
#endif