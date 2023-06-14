#include "../../include/wxml.h"
#include <cstring>

namespace WXML 
{
    namespace DOMLib 
    {
        
        const char *szWXIFControlAttrs[4] = { "wx-if", "wx:if", "wx:elif", "wx:else" }; // weak

        Parser::Parser(/* args */)
        {
        }
        
        Parser::~Parser()
        {
        }
        
        bool Parser::IsValidTag(std::string & tag)
        {
            return tag.compare("wx-") != 0;
        }
        bool Parser::Parse(
            char const* fileContent,
            std::string & a4,
            std::string const& a5,
            std::vector<WXML::DOMLib::Token> & a6
            )
        {
            this->dequeStr.clear();
            this->dequeDom.clear();
            this->offset_128 = 4;
            this->offset_328.assign(a5);
            WXML::DOMLib::Tokenizer v15(fileContent, a5);
            int ret = v15.GetTokens(this->offset_88, a4, a6);
            if (!ret)
            {
                std::shared_ptr<WXML::DOMLib::WXMLDom> domPtr;
                dom.tag = "root";
                domPtr.get()->tag = "root";
                dequeDom.push_back(domPtr);
                // DOMS
            }
            return ret == 0;
        }
        // WXML::DOMLib::WXMLDom Parser::GetParsed()
        // {
        //     return 0;
        // }
    }
}