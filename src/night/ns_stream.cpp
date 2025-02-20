#include "../include/night.h"
#include <exception>
#include <stdexcept>

namespace night
{
    
    NSStream::NSStream(/* args */)
    {
    }
    NSStream::NSStream(std::string const& a2, std::string const& a3, uint a4)
    {
        this->offset_0.assign(a2);
        this->offset_24.assign(a3);
        this->offset_52 = a4;
        this->offset_56 = 1;
    }
    
    NSStream::~NSStream()
    {
    }

    PeekData NSStream::peek(void)
    {
        PeekData ret;
        if (this->offset_48 < this->offset_24.length())
        {
            char v3 = this->offset_24.at(this->offset_48);
            ret.data = v3;
            ret.offset_4 = this->offset_52;
            ret.offset_8 = this->offset_56;
        }
        else
        {
            ret.data = 0;
            ret.offset_4 = 0;
            ret.offset_8 = 0;
        }
        return ret;
    }

    bool NSStream::eof(void)
    {
        return this->peek().data == 0;
    }

    PeekData NSStream::peek_2(void)
    {
        PeekData ret;
        if (this->offset_48 + 1 < this->offset_24.length())
        {
            char v3 = this->offset_24.at(this->offset_48 + 1);
            int v4 = this->offset_52;
            int v5 = this->offset_56 + 1;
            if (v3 == '\n')
            {
                v4++;
                v5 = 1;
            }
            ret.data = v3;
            ret.offset_4 = v4;
            ret.offset_8 = v5;
        }
        else
        {
            ret.data = 0;
            ret.offset_4 = 0;
            ret.offset_8 = 0;
        }
        return ret;
    }

    bool NSStream::eof_2(void)
    {
        return this->peek_2().data == 0;
    }

    PeekData NSStream::next(void)
    {
        PeekData ret;
        if (this->offset_48 < this->offset_24.length())
        {
            char v7 = this->offset_24.at(this->offset_48);
            this->offset_48++;
            int v5 = this->offset_52;
            int v6 = this->offset_56;
            if (v7 == 10) // \n
            {
                this->offset_56 = 1;
                this->offset_52++;
            }
            else
            {
                this->offset_56++;
            }
            ret.data = v7;
            ret.offset_4 = v5;
            ret.offset_8 = v6;
        }
        else
        {
            ret.data = 0;
            ret.offset_4 = 0;
            ret.offset_8 = 0;
        }
        return ret;
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
        
        throw std::runtime_error(v10.c_str());
    }

}