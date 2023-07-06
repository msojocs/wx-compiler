
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
                this->offset_0[s] = this->offset_20;
                this->offset_24.push_back(s);
            }
        }
    
        int StrCache::GetStrID(std::string s)
        {
            int result = -1;
            if(this->offset_0.count(s))
            {
                return this->offset_0[s];
            }
            return result;
        }
    }
}