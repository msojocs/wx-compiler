
#include "../../include/wxml.h"


namespace WXML {
    
    
    namespace DOMLib
    {
        StrCache::StrCache(/* args */)
        {
        }
        
        StrCache::~StrCache()
        {
        }
        void StrCache::RenderPathDefine(std::stringstream &ss)
        {
            ss << "var x=[";
            for (int i = 0; i < this->offset_24.size(); i++)
            {
                if (i)
                    ss << ",";
                ss << "'";
                WXML::Rewrite::ToStringCode(this->offset_24[i], ss);
                ss << "'";
            }
            ss << "];";
            
        }
        void StrCache::Insert(std::string s)
        {
            if (!this->offset_0.count(s))
            {
                // Note: 不能合成一行，否则数量会错误（比实际值大1）
                int size = this->offset_0.size();
                this->offset_0[s] = size;
                // this->offset_0[s] = this->offset_0.size(); // 会导致size的值比实际大1
                this->offset_24.push_back(s);
            }
        }
    
        int StrCache::GetStrID(std::string s)
        {
            int result = -1;
            if(this->offset_0.count(s))
            {
                // printf("GetStrID: %s, size: %d\n", s.data(), this->offset_0[s]);
                return this->offset_0[s];
            }
            return result;
        }
    }
}