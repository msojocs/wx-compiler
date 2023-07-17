#include "../../include/wxml.h"

namespace WXML
{
    
    namespace EXPRLib
    {
        void OutputAsStringOrKeyWord(
            std::stringstream & a1,
            std::string const& a2,
            std::string const& a3,
            bool &a4)
        {
            if (a2 == "true")
            {
                a1 << WXML::EXPRLib::OPShort::CONST << ",true";
                return;
            }
            if (a2 == "false")
            {
                a1 << WXML::EXPRLib::OPShort::CONST << ",false";
                return;
            }
            a4 = true;
            if (a2 != "$global")
            {
                a1 << WXML::EXPRLib::OPShort::NAME << ",'" << a2 << "'";
                return;
            }
            a1 << WXML::EXPRLib::OPShort::CS_GLOBAL;
        }
    }
}