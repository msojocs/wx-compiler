#include "../include/night.h"

namespace night
{
    NSToken::NSToken(/* args */)
    {
    }
    
    NSToken::~NSToken()
    {
    }
    night::ns_node* NSToken::peek(void)
    {
        auto result = this->offset_8;
        if (!result)
        {
            result = this->read_next();
            this->offset_8 = result;
        }
        return result;
    }
    night::ns_node* NSToken::read_next(void)
    {
    }
    night::ns_node* NSToken::next(void)
    {
        auto result = this->offset_8;
        this->offset_8 = 0;
        if (!result)
        {
            return this->read_next();
        }
        return result;
    }

    bool NSToken::eof(void)
    {
        return this->peek() == 0;
    }

    void NSToken::push(night::ns_node*)
    {
        
    }


    void NSToken::err(std::string const& a2, int a3, int a4, bool a5)
    {
        this->offset_4.err(a2, a3, a4, a5);
    }
}