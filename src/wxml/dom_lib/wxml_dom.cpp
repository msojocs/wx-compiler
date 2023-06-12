
#include "../../include/wxml.h"

namespace WXML {
    
    
    namespace DOMLib
    {
        
        WXMLDom::WXMLDom(/* args */)
        {
        }
        
        WXMLDom::~WXMLDom()
        {
        }
        bool WXMLDom::operator==(std::string tag)
        {
            return this->tag.compare(tag) == 0;
        }
    }
}