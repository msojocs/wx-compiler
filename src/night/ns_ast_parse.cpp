#include "../include/night.h"

namespace night
{
    

    NSASTParse::NSASTParse(/* args */)
    {
    }

    NSASTParse::NSASTParse(std::string a2, night::NSToken * a3, night::NSGod * a4)
    {
        this->offset_0 = a2;
        this->offset_24 = a4;
        this->offset_28 = a3;
        this->offset_36 = 0;
        this->offset_40 = 0;
        this->offset_44 = "";
        this->offset_52 = 0;
    }
    
    NSASTParse::~NSASTParse()
    {
    }

    void NSASTParse::is_op_or_comma(std::string const&)
    {

    }
    
    void NSASTParse::is_punctuation(std::string const&)
    {
        
    }

    void NSASTParse::top_down()
    {

    }

}