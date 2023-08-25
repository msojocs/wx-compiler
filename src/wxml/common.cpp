
#include "../include/wxml.h"

namespace WXML {
    void StrSplitList4ClassSuffix(
        char const* a1,
        char const* str,
        std::vector<std::pair<WXML::STRTOKEN,std::string>> & a3
        )
    {
        const char* v3 = nullptr;
        if (a1 && str)
        {
            for (int i = strlen(str); ; a1 = v3 + i)
            {
                v3 = strstr(a1, str);
                if (!v3)
                {
                    break;
                }
                if (a1 != v3)
                {
                    std::string v6(a1, v3);
                    a3.emplace_back(1, v6);
                }
                a3.emplace_back(0, "[1]");

            }
            if (*a1)
            {
                a3.emplace_back(1, a1);
            }
            
        }
    }
    void RenderStrToken(std::pair<WXML::STRTOKEN,std::string> & a1, std::stringstream & a2)
    {
        if (a1.first)
        {
            if (a1.first != 1)
            {
                return ;
            }
            a2 << "\"" << a1.second << "\",";
        }
        else
        {
            a2 << a1.second << ",";
        }
    }

    bool IsFloat(char const* t)
    {
        int v1 = ((t[0] - '+') & 0xFD) == 0;
        bool v2 = false;
        // while (true)
        // {
        //     char v3 = t[v1];
        //     if (!v3)
        //     {
        //         return true;
        //     }
        //     if (v3 != '.')
        //     {
        //         if (v3 - '0' <= 9)
        //         {
        //             v1++;
        //             continue;
        //         }
        //         break;
        //     }
        //     if (v2)
        //     {
        //         return false;
        //     }
        //     v2 = true;
        //     v1++;
        // }
        // return false;
        int len = strlen(t);
        for (int i = v1; i < len; i++)
        {
            if (t[i] == '.')
            {
                if (v2)
                {
                    // 有两个小数点
                    return false;
                }
                v2 = true; // 标记有小数点
                continue;
            }
            if (t[i] - '0' > 9 || t[i] - '0' < 0)
            {
                // 非数字
                return false;
            }
        }
        
        return true;
    }
    bool IsFloat(std::string const& a1)
    {
        if (a1.length())
        {
            return IsFloat(a1.data());
        }
        else
        {
            return false;
        }
    }
    void GetStrForMakingCSS(std::string const& a1, std::stringstream & a2)
    {
        std::vector<std::pair<WXML::STRTOKEN, std::string>> v7;
        WXML::StrSplitList4RPX(a1.data(), "%%?", "rpx?%%", v7);
        for (int i = 0; i < v7.size(); i++)
        {
            auto cur = v7[i];
            if (cur.first == 1)
            {
                std::vector<std::pair<WXML::STRTOKEN,std::string>> v10;
                WXML::StrSplitList4ClassSuffix(cur.second.data(), "%%HERESUFFIX%%", v10);
                for (int j=0; j < v10.size(); j++)
                {
                    WXML::RenderStrToken(v10[i], a2);
                }
            }
            else if (!cur.first)
            {
                WXML::RenderStrToken(cur, a2);
            }
        }
        
    }

    void StrSplitList4RPX(char const* a1, char const* str, char const* subStr, std::vector<std::pair<WXML::STRTOKEN, std::string>> & a4)
    {
        if (subStr != nullptr && str != nullptr && a1)
        {
            int v7 = strlen(str);
            int v6 = strlen(subStr);
            while (true)
            {
                const char* v4 = strstr(a1, str);
                if (!v4)
                {
                    break;
                }
                int v18 = 0;
                if (a1 != v4)
                {
                    std::string v16(a1, v4);
                    v18 = 1;
                    a4.emplace_back(v18, v16);
                }

                a1 = &v4[v7];
                const char* size = strstr(&v4[v7], subStr);
                if (!size)
                {
                    std::string v16(v4);
                    v18 = 1;
                    a4.emplace_back(v18, v16);
                    return ;
                }
                std::string v10(a1, size);
                if (WXML::IsFloat(v10))
                {
                    std::string v13;
                    // v13.reserve( + 3);
                    v13.append("[0,");
                    v13.append(v10);
                    v13.append("]");
                    int v18 = 0;
                    a4.emplace_back(v18, v13);
                    a1 = &size[v6];
                }
                else
                {
                    std::string v16(v4, a1);
                    int v18 = 1;
                    a4.emplace_back(v18, v16);

                }
            }
            if (!*a1)
            {
                return;
            }
            std::string v16(a1);
            int v18 = 1;
            a4.emplace_back(v18, v16);
            
        }
    }
}