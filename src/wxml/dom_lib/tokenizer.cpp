#include "../../include/wxml.h"

namespace WXML
{
    namespace DOMLib
    {
        
        Tokenizer::Tokenizer(char const*,std::string const&)
        {
        }
        
        Tokenizer::Tokenizer(/* args */)
        {
        }
        
        Tokenizer::~Tokenizer()
        {
        }
        int Tokenizer::GetTokens(
            std::vector<WXML::DOMLib::Token> &,
            std::string &,
            std::vector<WXML::DOMLib::Token> &
            )
        {
            return 0;
        }
    }
}
