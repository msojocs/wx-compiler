
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
        std::string Token::ToString()
        {
            std::string v4 = "";
            if (!this->offset_28)
            {
                v4 = this->offset_32.substr(this->offset_16, this->offset_20);
                this->offset_28 = true;
            }
            return v4;
        }
    
        bool Token::IsMatch(char const&)
        {
            return true;
        }
    }
}
        