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

    char NSStream::peek(void)
    {
        if (this->offset_48 < this->offset_24.length())
        {
            char v3 = this->offset_24.at(this->offset_48);
            return v3;
        }
        else
        {
            return 0;
        }
    }

    bool NSStream::eof(void)
    {
        return this->peek() == 0;
    }

    char NSStream::peek_2(void)
    {
        if (this->offset_48 + 1 < this->offset_24.length())
        {
            char v3 = this->offset_24.at(this->offset_48 + 1);
            if (v3 == '\n')
            {
                this->offset_52++;
                this->offset_56 = 1;
            }
            return v3;
        }
        else
        {
            return 0;
        }
    }

    bool NSStream::eof_2(void)
    {
        return this->peek_2() == 0;
    }

    char NSStream::next(void)
    {
        if (this->offset_48 < this->offset_24.length())
        {
            char v7 = this->offset_24.at(this->offset_48);
            this->offset_48++;
            if (v7 == 10) // \n
            {
                this->offset_56 = 1;
                this->offset_52++;
            }
            else
            {
                this->offset_56++;
            }
            return v7;
        }
        else
        {
            return 0;
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