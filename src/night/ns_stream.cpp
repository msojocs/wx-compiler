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
    void NSStream::err(std::string const& a2, int a3, int a4, bool a5)
    {
        std::string v10;
        std::string v13 = this->offset_0;
        v13.append(":");
        v10 += v13;
        std::string v12;
        if (a5)
        {
            v12 = std::to_string(a3);
            v12.append(":");
            v10 += v12;
            v12 = std::to_string(a4);
        }
        else
        {
            v12 = std::to_string(this->offset_52 + a3);
            v12.append(":");
            v10 += v12;
            v12 = std::to_string(this->offset_56 + a4);
        }
        v12.append(":");
        v10 += v12;
        v10 += a2;
        throw v10;
    }

}