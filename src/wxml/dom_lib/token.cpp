
#include "../../include/wxml.h"

namespace WXML 
{
    namespace DOMLib 
    {
        /*
        Token
        00（起点） B6 BF 00（文件内容） 80 CC BF 00  01 00 00 00(行数?) 01 00 00 00(行长度?)
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
        int Token::GetTemplateContent(std::string const& templateStr, std::string& result)
        {
            int v2 = 0;
            int v10 = templateStr.length();
            int v3 = v10 - 1;
            while (v2 < v10 && templateStr[v2] == ' ')
            {
                ++v2;
            }
            while (v3 > 0 && templateStr[v3] == ' ')
            {
                --v3;
            }
            int v4 = v2 + 2;
            if (v2 + 2 >= v10)
                return -1;
            if (templateStr[v2] != '{')
                return -1;
            if (templateStr[v2 + 1] != '{' || v3 <= 1)
                return -1;
            // {{ exp }}
            if (templateStr[v3] == '}' && templateStr[v3 - 1] == '}')
            {
                int v7 = v3 - 2;
                do
                {
                    if (templateStr[v4] != ' ')
                        break;
                    ++v4;
                } while (v10 != v4);
                do
                {
                    if (templateStr[v7] != ' ')
                        break;
                } while (v7-- != 0);
                if (v4 < v7)
                {
                    result = templateStr.substr(v4, v7 - v4 + 1);
                    return 0;
                }
            }
            return -1;
            
        }
        std::string Token::ToAttrContent()
        {
            return "";
        }
        bool Token::IsValidVariableName(std::string const& a1)
        {
            char v1 = a1[0];
            int v2;

            if ( v1 == '_'/*95*/ || v1 == '$'/*36*/ || (v2 = (v1 & 0xDF) - 'A'/*65*/, v2 <= 0x19u) ) // 0x19u 25
            {
                for (int i = 0; ; i++)
                {
                    if (a1.length() <= i)
                        return true;
                    char v5 = a1[i];
                    int v6;
                    if ( v5 <= '`'/*96*/ )
                    {
                        if ( v5 > '@'/*64*/ )
                        {
                            if ( v5 <= 'Z'/*90*/ )
                                continue;
                            if ( v5 != '_' )
                                return 0;
                        }
                        if ( v5 <= '/'/*47*/ )
                        {
                            if ( v5 != '$' )
                                return 0;
                            continue;
                        }
                        v6 = v5 <= '9'/*57*/;
                    }
                    else
                    {
                        v6 = v5 <= 'z'/*122*/;
                    }
                    if ( !v6 )
                        return false;
                }
                
            }
            return false;
        }
        std::string Token::ToString()
        {
            std::string v4 = this->offset_32;
            if (this->offset_0.size() > 0 && !this->offset_28)
            {
                v4 = this->offset_32.substr(this->offset_16, this->offset_20);
                this->offset_28 = true;
            }
            return v4;
        }
    
        bool Token::IsMatch(char const* str)
        {
            bool result = false;
            if (this->offset_0.size() > 0)
            {
                auto v4 = this->offset_20;
                for (int i = 0; ; i++)
                {
                    // if (v4 <= i)
                    //     return 
                }
                
            }
            return result;
        }
    }
}
        