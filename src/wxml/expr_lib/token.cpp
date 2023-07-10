
#include "../../include/wxml.h"

namespace WXML 
{
    namespace EXPRLib 
    {
        Token::Token(/* args */)
        {
        }
        
        Token::~Token()
        {
        }
        const char * Token::GetTokenName()
        {
            const char *result;
            switch ( this->offset_0 )
            {
                case 0u:
                result = this->offset_4.data();
                break;
                case 1u:
                result = "$DECIMAL";
                break;
                case 2u:
                result = "$STRING";
                break;
                case 3u:
                result = "$VAR";
                break;
                case 4u:
                result = "$KEYWORD";
                break;
                default:
                return result;
            }
            return result;
        }

        
        std::string Token::GetLiteral(void)
        {
            std::string result = this->offset_4;
            if (this->offset_0)
            {
                result = "$";
                if (this->offset_0 != 5)
                {
                    result = "";
                    if (this->offset_16.size())
                    {
                        return this->offset_16;
                    }
                }
            }
            return result;
        }
    }
}
        