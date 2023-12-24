
#include "../../include/wxml.h"

namespace WXML 
{
    namespace DOMLib 
    {
        Token::Token()
        {
        }
        
        Token::Token(std::string &content)
        {
            this->offset_0 = content;
        }
        
        Token::Token(WXML::DOMLib::Token&& token):
            offset_0(token.offset_0),
            offset_8(token.offset_8),
            offset_12(token.offset_12),
            offset_16(token.offset_16),
            offset_20(token.offset_20),
            offset_24(token.offset_24),
            offset_28(token.offset_28),
            offset_32(token.offset_32),
            // offset_40(token.offset_40),
            // offset_48(token.offset_48),
            offset_56(token.offset_56),
            offset_60(token.offset_60),
            offset_84(token.offset_84),
            offset_88(token.offset_88)
        {
        }
        Token::Token(WXML::DOMLib::Token const& token)
        {
            this->offset_0 = token.offset_0;
            this->offset_8 = token.offset_8;
            this->offset_12 = token.offset_12;
            this->offset_16 = token.offset_16;
            this->offset_20 = token.offset_20;
            this->offset_24 = token.offset_24;
            this->offset_28 = token.offset_28;
            this->offset_32 = token.offset_32;
            // this->offset_40 = token.offset_40;
            // this->offset_48 = token.offset_48;
            this->offset_56 = token.offset_56;
            this->offset_60 = token.offset_60;
            this->offset_84 = token.offset_84;
            this->offset_88 = token.offset_88;
        }
        WXML::DOMLib::Token& Token::operator=(WXML::DOMLib::Token const& token)
        {
            this->offset_0 = token.offset_0;
            this->offset_8 = token.offset_8;
            this->offset_12 = token.offset_12;
            this->offset_16 = token.offset_16;
            this->offset_20 = token.offset_20;
            this->offset_24 = token.offset_24;
            this->offset_28 = token.offset_28;
            this->offset_32 = token.offset_32;
            // this->offset_40 = token.offset_40;
            // this->offset_48 = token.offset_48;
            this->offset_56 = token.offset_56;
            this->offset_60 = token.offset_60;
            this->offset_84 = token.offset_84;
            this->offset_88 = token.offset_88;
            return *this;
        }
        WXML::DOMLib::Token& Token::operator=(WXML::DOMLib::Token && token)
        {
            this->offset_0 = token.offset_0;
            this->offset_8 = token.offset_8;
            this->offset_12 = token.offset_12;
            this->offset_16 = token.offset_16;
            this->offset_20 = token.offset_20;
            this->offset_24 = token.offset_24;
            this->offset_28 = token.offset_28;
            this->offset_32 = token.offset_32;
            // this->offset_40 = token.offset_40;
            // this->offset_48 = token.offset_48;
            this->offset_56 = token.offset_56;
            this->offset_60 = token.offset_60;
            this->offset_84 = token.offset_84;
            this->offset_88 = token.offset_88;
            return *this;
        }
        
        Token::~Token()
        {
        }
        void Token::SetContent(std::string &content)
        {
            this->offset_0 = content;
        }
        std::string & Token::GetContent()
        {
            return this->offset_0;
        }
        int Token::GetPos()
        {
            return this->offset_16;
        }
        int Token::GetSize()
        {
            return this->offset_20;
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
        int ToAttrContent_i = 0;
        std::string Token::ToAttrContent()
        {
            ToAttrContent_i++;
            int inner_ToAttrContent_i = ToAttrContent_i;
            // 有缓存（offset_84），直接返回
            if( this->offset_0.size() == 0 || this->offset_84)
                return this->offset_88;
            this->offset_88 = "";
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
                    Src[v3] = v4;
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
                        default:
                            Src[v3] = v4;
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
                                return false;
                            continue;
                        }
                        if ( v5 <= '/'/*47*/ )
                        {
                            if ( v5 != '$' )
                                return false;
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
            if (this->offset_0.size() > 0)
            {
                auto v4 = this->offset_20;
                for (int i = 0; ; i++)
                {
                    if (v4 <= i)
                        return str[v4] == 0;
                    if (this->offset_0[this->offset_16 + i] != str[i])
                    {
                        break;
                    }
                }
                return false;
                
            }
            return false;
        }
    }
}
        