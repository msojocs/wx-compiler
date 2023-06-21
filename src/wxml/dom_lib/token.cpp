
#include "../../include/wxml.h"

namespace WXML 
{
    namespace DOMLib 
    {
        /*
        Token
        00（起点） B6 BF 00（文件内容） 80 CC BF 00  01 00 00 00(行数?) 01 00 00 00(行长度?) // 15
        01 00 00 00(pos) 04 00 00 00(size)  00 00 00 00 00（布尔值） F6 97 00 // 31
        38 F0 97 00 00 00 00 00  00 CC FA 00 CC F0 97 00 // 47
        00 00 BF 00 00 00 00 00  FF FF FF FF 54 F0 97 00 // 63
        00 00 00 00 00 3A 53 00  00 00 00 00 78 F0 97 00 // 79
        00 00 00 00 00(?) F2 97 00  70 F0 97 00 00 00 00 00
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
            // 有缓存（offset_84），直接返回
            if( this->offset_0.size() == 0 || this->offset_84)
                return this->offset_88;
            char * v6 = &this->offset_0[0] + this->offset_16;
            int v8 = this->offset_20;
            int v7 = *v6 == '\''/*39*/ || *v6 == '"'/*34*/;
            if ( v8 > 0 )
            {
                char v1 = v6[v8 - 1];
                if ( v1 == '"'/*34*/ || v1 == '\''/*39*/ )
                --v8;
            }
            int v2 = 0;
            int v3 = 0;
            char Src[30];
            // 重写
            for (; v7 < v8; v7++)
            {
                char v4 = v6[v7];
                if ( v4 == '\\'/*92*/ )
                {
                    if ( !v2 )
                    {
                        v2 = 1;
                        continue;
                    }
                }
                else if ( v2 )
                {
                    switch ( v4 )
                    {
                        case 'n':
                            Src[v3] = 10;// \n "\\n" -> "\n"
                            break;
                        case 't':
                            Src[v3] = 9; // \t "\\t" -> "\t"
                            break;
                        case 'r':
                            Src[v3] = 13; // \r "\\r" -> "\r"
                            break;
                    }
                }
                else
                {
                    Src[v3] = v4;
                }
                ++v3;
                v2 = 0;
                Src[v3] = 0;
                if ( v3 == 30 ) // buffer
                {
                    // v10[0] = v11;
                    // std::string::_M_construct<char const*>(v10, Src, (size_t)&Size);
                    // std::string::append((_DWORD *)(a1 + 88), (int)v10);
                    // std::string::_M_dispose(v10);
                    this->offset_88.append(Src, v3);
                    Src[0] = 0;
                    v2 = 0;
                    v3 = 0;
                }
            }
            
            if ( v3 )
            {
                // v10[0] = v11;
                // std::string::_M_construct<char const*>(v10, Src, (size_t)&Src[v3]);
                // std::string::append((_DWORD *)(a1 + 88), (int)v10);
                // std::string::_M_dispose(v10);
                this->offset_88.append(Src, v3);
            }
            this->offset_84 = true;
            return this->offset_88;
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
                v4 = this->offset_0.substr(this->offset_16, this->offset_20);
                this->offset_32 = v4;
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
        