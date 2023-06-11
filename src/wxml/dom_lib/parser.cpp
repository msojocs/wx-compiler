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
            std::string &,
            std::string const&,
            std::vector<WXML::DOMLib::Token> &
            )
        {
            return true;
        }
    }
}