#include "../include/bittest.h"

unsigned char bittest(std::int32_t const *a, std::int32_t b)
{
    auto const bits{ reinterpret_cast<unsigned char const*>(a) };
    auto const value{ bits[b >> 3] };
    auto const mask{ (unsigned char)(1 << (b & 7)) };
    return (value & mask) != 0;
}