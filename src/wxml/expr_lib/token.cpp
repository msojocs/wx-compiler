
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
            switch ( this->type )
            {
                case 0u:
                result = this->tokenName.c_str();
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
    
    }
}
        