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
        if (this->offset_0 == 1)
        {
            return this->offset_28;
        }
        std::string result = "$";
        if (this->offset_0 != 8)
        {
            result = "UNKNOWN";
            if (this->offset_4.get())
            {
                return *this->offset_4;
            }
        }
        return result;
    }
    WXSS::Token& Token::operator=(WXSS::Token const& old)
    {
        this->offset_0 = old.offset_0;
        this->offset_4 = old.offset_4;
        this->offset_12 = old.offset_12;
        this->offset_16 = old.offset_16;
        this->offset_20 = old.offset_20;
        this->offset_24 = old.offset_24;
        for (int i = 0; i < 64; i++)
        {
            this->offset_28[i] = old.offset_28[i];
        }
        
        return *this;
    }
}