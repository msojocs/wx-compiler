#include "../include/wxss.h"

namespace WXSS
{
    
    Token::Token(/* args */)
    {
    }
    
    Token::~Token()
    {
    }
    
    std::string Token::GetLiteral(void)
    {
        throw "not implement";
    }
    WXSS::Token& Token::operator=(WXSS::Token const&)
    {
        throw "not implement";
    }
}