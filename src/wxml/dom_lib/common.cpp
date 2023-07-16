#include "../../include/wxml.h"


namespace WXML
{
    

    namespace DOMLib
    {
        
        std::string joinString(std::vector<std::string>& data, char split)
        {
            std::stringstream ss;
            for (int i = 0; i < data.size(); i++)
            {
                ss << data[i];
                if (i != data.size() - 1)
                    ss << split;
            }
            
            return ss.str();
        }

        std::vector<std::string> splitString(std::string const& str, char split)
        {
            int pos = 0;
            std::vector<std::string> result;
            for (int i = str.find(split, pos); i != -1; i = str.find(split, pos))
            {
                auto sub = str.substr(pos, i - pos);
                result.emplace_back(sub);
                pos = i + 1;
            }
            result.emplace_back(str.substr(pos));
            return result;
        }

        std::string resolvePath(std::string const& path1, std::string const& path2)
        {
            std::string result;
            if (path2[0] != '/')
            {
                auto p1Split = splitString(path1, '/');
                auto p2Split = splitString(path2, '/');
                // 把文件名pop出去
                p1Split.pop_back();
                for (int i = 0; i < p2Split.size(); i++)
                {
                    if (p2Split[i] == "..")
                    {
                        p1Split.pop_back();
                    }else if(p2Split[i] != "\0" && p2Split[i] != ".")
                    {
                        p1Split.push_back(p2Split[i]);
                    }
                }
                result = joinString(p1Split, '/');
                
            }
            if (path1[0] == '.' && path2[0] == '/')
            {
                result = "." + path2;
            }
            if (
                result.size() <= 4 ||
                result.substr(result.size() - 5) != ".wxml"
            )
            {
                result.append(".wxml");
            }
            return result;
        }
        
        void recurseDependencies(std::shared_ptr<WXML::DOMLib::WXMLDom> const& dom, std::string const& filePath, std::set<std::string> & pathSet)
        {
            std::string a1 = dom->offset_0;
            if (a1 == "import" || a1 == "include")
            {
                if(dom->offset_48.count("src"))
                {
                    std::string relativePath = dom->offset_48["src"].ToAttrContent();
                    std::string depPath = resolvePath(filePath, relativePath);
                    pathSet.insert(depPath);
                }

            }
            for (int i = 0; i < dom->offset_72.size(); i++)
            {
                recurseDependencies(dom->offset_72[i], filePath, pathSet);
            }
            
        }

        bool AttrsCompartor(std::pair<std::string,WXML::DOMLib::Token> const& a1,std::pair<std::string,WXML::DOMLib::Token> const& a2)
        {
            return a1.second.offset_56 < a2.second.offset_56;
        }
        
        std::string removern(std::string const& a2)
        {
            std::string a1;
            for (int i = 0; i < a2.length(); i++)
            {
                if (i >= a2.length()) break;
                char v3 = a2[i];
                if (v3 != 13 || a2[i + 1] != '\n')
                    a1.push_back(v3);
            }
            return a1;
        }
    }

}