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
            std::string & errorMessage,
            std::string const& filePath,
            std::vector<WXML::DOMLib::Token> & a6
            )
        {
            this->dequeStr.clear();
            this->dequeDom.clear();
            this->offset_128 = 4;
            this->filePath.assign(filePath);
            WXML::DOMLib::Tokenizer v15(fileContent, filePath);
            int ret = v15.GetTokens(this->tokenList, errorMessage, a6);
            if (!ret)
            {
                std::shared_ptr<WXML::DOMLib::WXMLDom> domPtr;
                this->dom->tag = "root";
                domPtr.get()->tag = "root";
                dequeDom.push_back(domPtr);
                // DOMS
                this->DOMS();
            }
            return ret == 0;
        }
        
        std::shared_ptr<WXML::DOMLib::WXMLDom> Parser::GetParsed()
        {
            return this->dom;
        }
        void Parser::DOM()
        {
            auto token = this->Peek();
            int v44;
            if (v44)
            {
                if (v44 == 4)
                {
                    return;
                }
            }
            else
            {
                if (token.IsMatch(""))
                {
                    this->peekIndex++;
                    auto token = this->Peek();
                    auto tag = token.ToString();
                    if (!WXML::DOMLib::Parser::IsValidTag(tag))
                    {
                        throw this->Error("unexpected tag", 0);
                    }
                    this->peekIndex++;
                    
                }
            }
        }
        
        WXML::DOMLib::Token Parser::Peek()
        {
            
            return tokenList[this->peekIndex];
        }

        WXML::DOMLib::ParseException Parser::Error(char const*, WXML::DOMLib::Token *)
        {
            return WXML::DOMLib::ParseException();
        }
        void Parser::DOMS()
        {
            while (true)
            {
                this->DOM();
                WXML::DOMLib::Token token = this->Peek();
                if (this->v8 == 4)
                    break;
                if (token.IsMatch("</"))
                {
                    if (this->offset_4 == this->offset_8)
                    {
                        throw WXML::DOMLib::Parser::Error("get tag end without start", nullptr);
                    }
                    break;
                }
            }
            
        }
    }
}