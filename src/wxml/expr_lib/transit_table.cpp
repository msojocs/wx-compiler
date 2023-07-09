#include "../../include/wxml.h"

namespace WXML
{
    
    namespace EXPRLib
    {
        TransitTable::TransitTable(/* args */)
        {
        }
        
        TransitTable::~TransitTable()
        {
        }
        int TransitTable::GetExprNTType(void)
        {
            return 14;
        }
        int TransitTable::GetAttrListNTType(void)
        {
            return 12;
        }
        void Init(void)
        {
        
        }
    }
}