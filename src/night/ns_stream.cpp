#include "../include/night.h"

namespace night
{
    
    NSStream::NSStream(/* args */)
    {
    }
    NSStream::NSStream(std::string const&,std::string const&,uint)
    {
    }
    
    NSStream::~NSStream()
    {
    }

    void NSStream::peek(void)
    {
        if (this->offset_48 < this->offset_24.length())
        {
            char v3 = this->offset_24.at(this->offset_48);
        }
        else
        {

        }
    }
    void NSStream::peek_2(void)
    {
        if (this->offset_48 + 1 < this->offset_24.length())
        {
            char v3 = this->offset_24.at(this->offset_48 + 1);
            if (v3 == '\n')
            {
                this->offset_52++;
                this->offset_56 = 1;
            }
        }
        else
        {

        }
    }

}