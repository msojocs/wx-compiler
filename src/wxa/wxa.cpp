#include "../include/wxa.h"

namespace MMBizWxaAppComm
{

    
    void SplitBySlash(std::string const& a1, std::vector<std::string> & a2)
    {
        int v2 = -1;
        int i;
        for ( i = 0; i < a1.length(); i++)
        {
            if (a1[i] == '/')
            {
                if (i - v2 > 1)
                {
                    auto v4 = a1.substr(v2 + 1, i - v2 - 1);
                    a2.emplace_back(v4);
                }
                v2 = i;
            }
        }
        if (i - v2 > 1)
        {
            auto v4 = a1.substr(v2 + 1, i - v2 - 1);
            a2.emplace_back(v4);
        }
        
    }

    void PathCombine(std::string const& a1, std::string const& a2, std::string& a3)
    {
        std::vector<std::string> dirList;
        if (a2.length() == 0 || a2[0] != '/')
        {
            MMBizWxaAppComm::SplitBySlash(a1, dirList);
            if (a1.length() > 0)
            {
                if (a1.back() != '/')
                {
                    dirList.pop_back();
                }
            }
        }
        
        std::vector<std::string> v15;
        MMBizWxaAppComm::SplitBySlash(a2, v15);
        for (int i = 0; i < v15.size(); i++)
        {
            if (v15[i] == "..")
            {
                if (dirList.begin() != dirList.end())
                {
                    dirList.pop_back();
                }
            }
            else if (v15[i].compare("."))
            {
                dirList.push_back(v15[i]);
            }
        }
        std::string v8;
        if (a1.length() > 0 && a1[0] == '/' || a2.length() > 0 && a2[0] == '/')
        {
            v8 = "/";
        }
        a3 = v8;
        for (int i = 0; i < dirList.size(); i++)
        {
            if (i)
            {
                a3.append("/");
            }
            a3.append(dirList[i]);
        }
        
        
    }
}