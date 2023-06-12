#include "../include/wxml.h"
namespace WXML {
    int NameAllocator::ALPAHBETLEN = 0;
    NameAllocator::NameAllocator(std::string const& a2,std::string const&a3)
    {
        if (NameAllocator::ALPAHBETLEN == 0)
        {
            NameAllocator::ALPAHBETLEN = NameAllocator::ALPAHBET.size();
        }
        this->offset_1.assign(a2);
        this->offset_7.assign(a3);
    }
    
    NameAllocator::~NameAllocator()
    {
    }
    
}