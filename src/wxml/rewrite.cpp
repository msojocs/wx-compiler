
#include "../include/wxml.h"
#include <cstdio>

namespace WXML {
    
    namespace Rewrite
    {
        void ToStringCode(char const* src, int len, std::stringstream &ss)
        {
            for (int i = 0; i < len; i++)
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
        
        void GetToken(std::string const& a1,std::vector<std::pair<int,std::string>> & a2)
        {
            for (int i = 0; i < a1.length(); )
            {
                int v9 = a1.length() - i;
                const char* v6 = &a1[i];
                int v8 = -1;
                int lt = WXML::RPX::acceptID(v6, v9);
                if (lt)
                {
                    lt = 1;
                    if (WXML::RPX::acceptNum(v6, v9))
                    {
                        lt = 2;
                        if (WXML::RPX::acceptStr(v6, v9))
                        {
                            lt = 3;
                            if (!WXML::RPX::acceptSymbol(v6, v9, v8))
                            {
                                lt = (v8 == 7) + 3;
                            }
                        }
                    }
                }
                std::string v10(a1.begin() + i, a1.end() - v9);
                a2.push_back(std::make_pair(lt, v10));
                i = a1.length() - v9;

            }
        }
        
        int RewriteImg(std::string const& a1, std::string& a2, std::string a3, int a4, int a5)
        {
            std::vector<std::pair<int,std::string>> v21;
            WXML::Rewrite::GetToken(a1, v21);
            a2 = "";
            bool v17 = 1;
            int result = 0;
            for (int i=1; i < v21.size(); i++)
            {
                auto cur = v21[i - 1];
                if (
                    cur.second == "url"
                    && v21[i].second == "("
                )
                {
                    std::string v24 = "";
                    while (v21.size() > ++i)
                    {
                        if (v21[i].second == ")")
                        {
                            const char*sa = v24.data();
                            while (v24.length() > 0 && (*sa == ' ' || *sa == '\t'))
                            {
                                sa++;
                            }
                            if (
                                !strncmp(sa, "http://", 7)
                                || !strncmp(sa, "https://", 8)
                                || !strncmp(sa, "//", 2)
                                || !strncmp(sa, "data:", 5)
                            )
                            {
                                std::string v26 = "url(" + v24 + ")";
                                a2 += v26;
                            }
                            else
                            {
                                std::stringstream v29;
                                v29 << "url(" << sa << "-do-not-use-local-path-" << a3;
                                v29 << "&" << a4 << "&" << a5 << ")";
                                std::string v26 = v29.str();
                                a2 += v26;
                                result = 1;
                            }
                            if (++i == v21.size())
                            {
                                v17 = 0;
                            }
                            break;
                            
                        }
                        auto v5 = v21[i];
                        if (v5.first != 4)
                        {
                            if (v5.first == 2)
                            {
                                std::string v29 = v5.second.substr(1, v5.second.length() - 2);
                                v24 += v29;
                            }
                            else
                            {
                                v24 += v5.second;
                            }
                        }
                    }
                    
                }
                else
                {
                    a2 += v21[i].second;
                }
            }
            if (v21.end() != v21.begin() && v17)
            {
                a2 += v21.back().second;
            }

            return result;
        }
        int RewriteRPX(std::string const& a1, std::string& a2, char const* a3, char const* a4)
        {
            std::vector<std::pair<WXML::STRTOKEN, std::string>> v22;
            WXML::Rewrite::GetToken(a1, v22);
            a2 = "";
            bool v17 = true;
            for (int i = 1; i < v22.size(); i++)
            {
                auto cur = v22[i];
                if (v22[i - 1].first == 1 && !cur.first && !cur.second.compare("rpx"))
                {
                    std::string v29 = a4;
                    std::string v25 = a3;
                    v25.append(v22[i - 1].second);
                    v25.append(v22[i].second);
                    // int v8 = v25.length() + v29.length();
                    v25.append(v29);
                    a2 += v25;
                    if (++i == v22.size())
                    {
                        v17 = false;
                    }
                }
                else
                {
                    a2 += v22[i - 1].second;
                }
            }
            if (v22.begin() != v22.end() && v17)
            {
                a2 += v22.back().second;
            }
            if (a2.length() == a1.length())
            {
                if (a2.length())
                {
                    return a2 != a1;
                }
                return 0;
            }
            else
            {
                return 1;
            }
            
        }
    }
}