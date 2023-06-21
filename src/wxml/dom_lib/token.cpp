
#include "../../include/wxml.h"

namespace WXML 
{
    namespace DOMLib 
    {
        /*
        Token
        00（起点） B6 BF 00（文件内容） 80 CC BF 00  01 00 00 00 01 00 00 00
        01 00 00 00(pos) 04 00 00 00(size)  00 00 00 00 00（布尔值） F6 97 00
        38 F0 97 00 00 00 00 00  00 CC FA 00 CC F0 97 00
        00 00 BF 00 00 00 00 00  FF FF FF FF 54 F0 97 00
        00 00 00 00 00 3A 53 00  00 00 00 00 78 F0 97 00
        00 00 00 00 00 F2 97 00  70 F0 97 00 00 00 00 00
        00 00 00 00 62 00 00 40  F8 F1 97 00 7A 15 46 00
        */
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
            std::string v4 = this->offset_32;
            if (!this->offset_28)
            {
                v4 = this->offset_32.substr(this->offset_16, this->offset_20);
                this->offset_28 = true;
            }
            return v4;
        }
    
        bool Token::IsMatch(char const* str)
        {
            bool result = false;
            // this->offset_20
            return result;
        }
    }
}
        