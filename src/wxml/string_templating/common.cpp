#include "../../include/wxml.h"
namespace WXML
{
    namespace StringTemplating
    {
        int Deal_i = 0;
        int Deal(
            char const* Str,
            std::string &a2,
            std::vector<WXML::StringTemplating::Token> &a3,
            bool & a4
            )
        {
            Deal_i++;
            int inner_Deal_i = Deal_i;
            int v4 = strlen(Str);
            int v5 = 0;
            int v12 = 0;
            int v17 = 0;
            int i;
            for ( i = 0; i < v4 - 1; i++)
            {
                char v6 = Str[i];
                char v7 = Str[i + 1];
                if (v17 == 2)
                {
                    if (v6 == '\\')
                    {
                        ++i;
                        continue;
                    }
                    v12 = 1;
                    if (v6 != '"')
                    {
                        v12 = v17;
                    }
                    v17 = v12;
                    continue;
                }
                if (v17 > 2)
                {
                    if (v6 == '\\')
                    {
                        i++;
                        continue;
                    }
                    v12 = 1;
                    if (v6 != '\'')
                    {
                        v12 = v17;
                    }
                    v17 = v12;
                    continue;
                }
                if (v17)
                {
                    if (v6 != '}' || v7 != '}')
                    {
                        if (v6 == '"')
                        {
                            v17 = 2;
                            continue;
                        }
                        v12 = 4;
                        if (v6 != '\'')
                        {
                            v12 = v17;
                        }
                        v17 = v12;
                        continue;
                    }
                    if (i > v5)
                    {
                        int v8 = i - 1;
                        while (true)
                        {
                            char v9 = Str[v5];
                            if (v9 != ' ' && v9 != '\t')
                                break;
                            ++v5;
                        }
                        while(v5 < v8)
                        {
                            char v10 = v8[Str];
                            if (v10 != ' ' && v10 != '\t')
                            {
                                goto LABEL_30;
                            }
                            --v8;
                        }
                        if (v5 != v8)
                        {
                            goto LABEL_31;
                        }
                        LABEL_30:
                        WXML::StringTemplating::Token v20;
                        v20.offset_0 = true;
                        std::string v19;
                        // TODO: 待确认
                        v19.append(Str, v5, v8 -v5 + 1);
                        v20.offset_4 = v19;
                        a3.push_back(v20);
                        a4 = true;
                        
                    }
                    LABEL_31:
                    v17 = 0;
                    v5 = i + 2;
                    ++i;
                }
                else if (v6 == '{' && v7 == '{')
                {
                    if (i > v5)
                    {

                        WXML::StringTemplating::Token v20;
                        std::string v19;
                        v19.append(Str, v5, i -v5);
                        v20.offset_0 = false;
                        v20.offset_4 = v19;
                        a3.push_back(v20);
                    }
                    v17 = 1;
                    v5 = i + 2;
                    i++;
                }
            }
            if (v17) return 1;
            int v13 = ~(i - v4);
            if (i < v4 - 1)
                v13 = 0;
            int v14 = i + v13;
            if (v5 <= v14)
            {
                WXML::StringTemplating::Token v20;
                std::string v19;
                v19.append(Str, v5, v14 - v5 + 1);
                v20.offset_0 = false;
                v20.offset_4 = v19;
                a3.push_back(v20);
            }
            
            return v17;
        }
    } // namespace StringTamplating
    
} // namespace WXML
