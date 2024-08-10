#include "../../include/wxml.h"

// WXML::DOMLib::ParseException
namespace WXML
{
    namespace DOMLib
    {
        
        ParseException::ParseException(/* args */)
        {
        }
        
        ParseException::ParseException(std::string& msg)
        {
            this->msg = msg;
        }
        
        ParseException::~ParseException()
        {
        }
        const char * ParseException::what()
        {
            return this->msg.c_str();
        }
        
    }
}