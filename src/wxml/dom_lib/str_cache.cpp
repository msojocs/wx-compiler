
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
        void StrCache::RenderPathDefine(std::stringstream ss)
        {
            ss << "var x=[";
            // TODO...
            // return ss;
        }
        void StrCache::Insert(std::string s)
        {
            if (!this->d.count(s))
            {
                // this->d[s] = this[5]; // ???
                this->offset_6.push_back(s);
            }
        }
    
        int StrCache::GetStrID(std::string s)
        {
            int result = -1;
            if(this->d.count(s))
            {
                return this->d[s];
            }
            return result;
        }
    }
}