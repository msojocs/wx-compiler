
#include "../../include/wxml.h"

namespace WXML 
{
    namespace DOMLib 
    {
        
        Token::Token(/* args */)
        {
        }
        
        Token::Token(WXML::DOMLib::Token&& token)
        {
        }
        Token::Token(WXML::DOMLib::Token const& token)
        {
        }
        
        Token::~Token()
        {
        }
        std::string Token::ToAttrContent()
        {
            return "";
        }
    
        bool Token::IsMatch(char const&)
        {
            return true;
        }
    }
}
        