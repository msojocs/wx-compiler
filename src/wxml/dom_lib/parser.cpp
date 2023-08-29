#include "../../include/wxml.h"
#include <cstring>

namespace WXML 
{
    namespace DOMLib 
    {
        Parser::Parser(/* args */)
        {
            this->offset_104.offset_24 = 4;
        }
        
        Parser::~Parser()
        {
        }
        
        void Parser::ATTR()
        {
            auto token = this->Peek();
            if (!token.IsMatch(">")
                && !token.IsMatch("/>"))
            {
                // if(!token)
                // throw "unexpected attribute name"
                int v20 = token.offset_20;
                for (int i = 0; i < v20; i++)
                {
                    char v3 = token.offset_0[token.offset_16 + i];
                    if ((v3 & 0xDF) - 'A' > 25
                    && (v3 - '0') > 10
                    && v3 != '_'
                    && v3 != '-')
                    {
                        throw "unexpected attribute name";
                    }
                }
                if (v20 - 1 > 0xFFFE)
                {
                    throw "unexpected attribute name";
                }
                auto v4 = token.ToString();
                this->peekIndex++;
                auto v19 = this->Peek();
                if (v19.IsMatch("="))
                {
                    this->peekIndex++;
                    auto v6 = this->Peek();
                    int v22 = v6.offset_24;
                    if (v22 == 2)
                    {
                        this->peekIndex++;
                        auto v7 = this->dequeDom.back();
                        v7->offset_48[v4] = v6;
                    }
                }
                else
                {
                    auto v9 = this->dequeDom.back();
                    v9->offset_48[v4] = this->offset_216;

                }
            }
        }
        
        void Parser::ATTR_LIST()
        {
            this->ATTR();
            auto token = this->Peek();
            if (!token.IsMatch(">")
            && !token.IsMatch("/>"))
            {
                this->ATTR_LIST();
            }
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
                std::shared_ptr<WXML::DOMLib::WXMLDom> domPtr(new WXML::DOMLib::WXMLDom());
                
                domPtr->offset_0 = "root";
                this->dom = domPtr;
                dequeDom.push_back(domPtr);
                // DOMS
                this->DOMS();
            }
            return ret;
        }
        
        std::shared_ptr<WXML::DOMLib::WXMLDom> Parser::GetParsed()
        {
            return this->dom;
        }
        void Parser::DOM()
        {
            auto token = this->Peek();
            if (token.offset_24)
            {
                if (token.offset_24 == 4)
                {
                    return;
                }
            }
            else
            {
                if (token.IsMatch("<"))
                {
                    this->peekIndex++;
                    token = this->Peek();
                    auto tag = token.ToString();
                    if (!WXML::DOMLib::Parser::IsValidTag(tag))
                    {
                        throw this->Error("unexpected tag", 0);
                    }
                    this->peekIndex++;
                    this->dequeStr.push_back(tag);
                    std::shared_ptr<WXML::DOMLib::WXMLDom> domPtr(new WXML::DOMLib::WXMLDom());
                    domPtr->offset_0.assign(tag);
                    domPtr->offset_24.assign(domPtr->offset_0);
                    domPtr->offset_84 = token;
                    auto v8 = this->dequeDom.back();
                    // push_back
                    v8->offset_72.push_back(domPtr);
                    // push_back
                    this->dequeDom.push_back(domPtr);
                    this->ATTR_LIST();
                    auto v43 = this->Peek();
                    if(!token.offset_24)
                    {
                        if (v43.IsMatch(">"))
                        {
                            this->peekIndex++;
                            this->DOMS();
                            auto v11 = this->Peek();
                            if (/*v48[5] || */!v11.IsMatch("</"))
                            {
                                auto err = this->Error("unexpected token", &token);
                                throw err;
                            }
                            this->peekIndex++;
                            auto v47 = this->Peek();
                            std::string v40 = "";
                            if (this->dequeStr.begin() == this->dequeStr.end())
                            {
                                v40 = "";
                            }
                            else
                            {
                                v40 = this->dequeStr.back();
                            }

                            if (!v47.IsMatch(&v40[0]))
                            {
                                std::string msg = "expect end-tag `" + v40;
                                msg += v40 + "`.";
                                auto err = this->Error(&msg[0], 0);
                                throw err;
                            }
                            this->peekIndex++;
                            this->dequeStr.pop_back();
                            this->dequeDom.pop_back();
                            v47 = this->Peek();
                            if (!v47.IsMatch(">"))
                            {
                                throw this->Error("unexpected token", 0);
                            }
                            this->peekIndex++;
                            return;
                        }
                        if (v43.IsMatch("/>"))
                        {
                            this->peekIndex++;
                            this->dequeDom.pop_back();
                            this->dequeStr.pop_back();
                            return;
                        }
                    }
                    throw this->Error("unexpected token", 0);
                }
                if (token.IsMatch("</"))
                {
                    if (this->dequeStr.begin() == this->dequeStr.end())
                    {
                        throw this->Error("get tag end without start", 0);
                    }
                    return;
                }
            }
            auto v16 = token.GetContent();
            this->peekIndex++;
            if (v16.length() > 0)
            {
                int v17 = 0;
                char* v18 = &v16[0] + token.offset_16;
                while(token.offset_20 > v17)
                {
                    int v19 = *(uint8_t *)(v18 + v17) - 9;
                    if (v19 > 0x17u || ((0x800013u >> v19) & 1) == 0)
                    {
                        auto v45 = this->dequeDom.back();
                        std::shared_ptr<WXML::DOMLib::WXMLDom> dom(new WXML::DOMLib::WXMLDom());
                        dom->offset_0 = "TEXTNODE";
                        dom->offset_84 = token;
                        v45->offset_72.push_back(dom);
                        break;
                    }
                    ++v17;
                }
            }
        }
        
        WXML::DOMLib::Token Parser::Peek()
        {
            if (this->peekIndex < tokenList.size())
                return tokenList[this->peekIndex];
            return this->offset_104;
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
                if (token.offset_24 == 4)
                    break;
                if (token.IsMatch("</"))
                {
                    if (this->dequeStr.begin() == this->dequeStr.end())
                    {
                        throw WXML::DOMLib::Parser::Error("get tag end without start", nullptr);
                    }
                    break;
                }
            }
            
        }
    }
}