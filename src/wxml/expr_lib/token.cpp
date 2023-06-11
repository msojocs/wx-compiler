
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
        const char * Token::GetTokenName(const char **a1)
        {
            const char *result; // eax

            result = *a1;
            switch ( (unsigned int)*a1 )
            {
                case 0u:
                result = (const char *)(a1 + 1);
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
        