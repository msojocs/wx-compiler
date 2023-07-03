#include "../include/wxml.h"
namespace WXML {
    int NameAllocator::ALPAHBETLEN = 0;
    NameAllocator::NameAllocator(std::string const& a2,std::string const&a3)
    {
        if (NameAllocator::ALPAHBETLEN == 0)
        {
            NameAllocator::ALPAHBETLEN = NameAllocator::ALPAHBET.size();
        }
        this->offset_4.assign(a2);
        this->offset_28.assign(a3);
    }
    
    void NameAllocator::GetNextName(std::string & a2)
    {
        std::stringstream ss;
        ss << this->offset_4 << this->offset_28[this->offset_0 % this->offset_28.length()];
        int v9 = this->offset_0;
        while (v9)
        {
            ss << WXML::NameAllocator::ALPAHBET[v9 % WXML::NameAllocator::ALPAHBETLEN];
            v9 /= WXML::NameAllocator::ALPAHBETLEN;
        }
        this->offset_0++;
        a2 = ss.str();
        

    }
    
    NameAllocator::~NameAllocator()
    {
    }
    
}