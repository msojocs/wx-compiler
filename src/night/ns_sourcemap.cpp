#include "../include/night.h"

namespace night
{
    
    ns_sourcemap::ns_sourcemap(/* args */)
    {
    }

    ns_sourcemap::ns_sourcemap(ns_sourcemap && src):
        offset_0(src.offset_0),
        offset_24(src.offset_24),
        offset_28(src.offset_28),
        offset_32(src.offset_32),
        offset_56(src.offset_56),
        offset_60(src.offset_60)
    {
    }
    
    ns_sourcemap::ns_sourcemap(ns_sourcemap const& src):
        offset_0(src.offset_0),
        offset_24(src.offset_24),
        offset_28(src.offset_28),
        offset_32(src.offset_32),
        offset_56(src.offset_56),
        offset_60(src.offset_60)
    {
    }

    ns_sourcemap& ns_sourcemap::operator=(ns_sourcemap const& src)
    {
        this->offset_0 = src.offset_0;
        this->offset_24 = src.offset_24;
        this->offset_28 = src.offset_28;
        this->offset_32 = src.offset_32;
        this->offset_56 = src.offset_56;
        this->offset_60 = src.offset_60;
        return *this;
    }

    ns_sourcemap& ns_sourcemap::operator=(ns_sourcemap && src)
    {
        this->offset_0 = src.offset_0;
        this->offset_24 = src.offset_24;
        this->offset_28 = src.offset_28;
        this->offset_32 = src.offset_32;
        this->offset_56 = src.offset_56;
        this->offset_60 = src.offset_60;
        return *this;
    }
    
    ns_sourcemap::~ns_sourcemap()
    {
    }
}