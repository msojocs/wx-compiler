
#include "../include/wxml.h"

namespace WXML {
    
    namespace Rewrite
    {
        void ToStringCode(char const* src, int len, std::stringstream &ss)
        {
            for (size_t i = 0; i < len; i++)
            {
                char v4 = src[i];
                if ( v4 == '\''/*39*/ )
                {
                    ss << "\\x27";
                    continue;
                }
                if ( v4 <= '\''/*39*/ )
                {
                    if ( v4 == '"'/*34*/ )
                    {
                        ss << "\\x22";
                        continue;
                    }
                    if ( v4 > '"'/*34*/ )
                    {
                        if ( v4 == '&'/*38*/ )
                        {
                            ss << "\\x26";
                            continue;
                        }
                    }
                    else
                    {
                        if ( v4 == '\n'/*10*/ )
                        {
                            ss << "\\n";
                            continue;
                        }
                        if ( v4 == '\r'/*13*/ )
                        {
                            ss << "\\r";
                            continue;
                        }
                    }
                    goto LABEL_31;
                }
                if ( v4 == '>' /*62*/ )
                {
                    ss << "\\x3e";
                    continue;
                }
                if ( v4 <= '>' /*62*/ )
                {
                    if ( v4 == '<'/*60*/ )
                    {
                        ss << "\\x3c";
                        continue;
                    }
                    if ( v4 == '='/*61*/ )
                    {
                        ss << "\\x3d";
                        continue;
                    }
                LABEL_31:
                    ss << v4;
                    continue;
                }
                if ( v4 != '\\'/*92*/ ){
                    ss << v4;
                    continue;
                }
                char v6 = src[i + 1];
                if ( v6 - '\\'/*92*/ > 0x18u )
                {
                    if ( v6 == '\''/*39*/ || v6 == '"'/*34*/ )
                    {
                LABEL_29:
                        ss << "\\";
                        continue;
                    }
                }
                else if ( ((0x1440001u >> (v6 - '\\'/*92*/)) & 1) != 0 )
                {
                    goto LABEL_29;
                }
                ss << "\\x5c";
            
            }
            
        }
        void ToStringCode(std::string const&src, std::stringstream & ss)
        {
            ToStringCode(src.data(), src.size(), ss);
        }
        void ToStringCode(std::string const& a1, std::string& a2)
        {
            try
            {
                std::stringstream ss;
                ToStringCode(a1.data(), a1.size(), ss);
                // TODO:
                a2 = ss.str();
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
        std::string ToStringCode(std::string const&a2)
        {
            std::string result;
            ToStringCode(a2, result);
            return result;
        }
        std::string ToStringCode2(char const* src, int len)
        {
            std::stringstream ss;
            for (size_t i = 0; i < len; i++)
            {
                char v3 = src[i];
                if ( v3 == '\''/*39*/ )
                {
                    ss << "\\x27";
                    continue;
                }
                if ( v3 > 39 )   // '\''
                {
                    if ( v3 == 62 )  // '>'
                    {
                        ss << "\\x3e";
                        continue;
                    }
                    if ( v3 > 62 ) // '>'
                    {
                        if ( v3 == 92 ) // '\'
                        {
                            ss << "\\\\";
                            continue;
                        }
                    }
                    else
                    {
                        if ( v3 == 60 ) // '<'
                        {
                            ss << "\\x3c";
                            continue;
                        }
                        if ( v3 == 61 ) // '='
                        {
                            ss << "\\x3d";
                            continue;
                        }
                    }
                }
                else
                {
                    if ( v3 == 34 )  // '"'
                    {
                        ss << "\\x22";
                        continue;
                    }
                    if ( v3 > 34 )
                    {
                        if ( v3 == 38 ) // '&'
                        {
                            ss << "\\x26";
                            continue;
                        }
                    }
                    else
                    {
                        if ( v3 == 10 ) // '\n'
                        {
                            ss << "\\n";
                            continue;
                        }
                        if ( v3 == 13 )
                        {
                            ss << "\\r";
                            continue;
                        }
                    }
                }
                ss << v3;
            }
            return ss.str();
        }
        std::string ToStringCode2(std::string const&src)
        {
            return ToStringCode2(src.data(), src.size());
        }
        std::string ToStringCode3(char const* src, int len)
        {
            std::stringstream ss;
            for (int i = 0; i < len; i++)
            {
                char v3 = src[i];
                if ( v3 == 61 ) // '='
                {
                    ss << "\\x3d";
                    continue;
                }
                if ( v3 > 61 ) // '='
                {
                    if ( v3 == 62 ) // '>'
                    {
                        ss << "\\x3e";
                        continue;
                    }
                }
                else
                {
                    if ( v3 == 38 )  // '&'
                    {
                        ss << "\\x26";
                        continue;
                    }
                    if ( v3 == 60 )   // '<'
                    {
                        ss << "\\x3c";
                        continue;
                    }
                }
                ss << v3;
            }
            return ss.str();
        }
        std::string ToStringCode3(std::string const& src)
        {
            return ToStringCode3(src.data(), src.size());
        }
    }
}