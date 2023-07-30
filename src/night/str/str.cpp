#include "../../include/night.h"
#include "../../include/wxa.h"
#include "../../include/wxml.h"

namespace night
{
    
    namespace str
    {
        std::string get_token(std::string const& a2, int a3)
        {
            std::string result;
            char v3;
            while (a3 < a2.length())
            {
                v3 = a2[a3];
                if ((v3 & 0xdf) - 65 > 0x19u && v3 != '_' && v3 - '0' > 9u)
                {
                    break;
                }
                ++a3;
                result.push_back(v3);
            }
            return result;
            
        }

        /**
        */
        int path_combine(std::string const& a1, std::string const& a2, std::string& a3)
        {
            std::string v11;
            MMBizWxaAppComm::PathCombine(a1, a2, v11);
            int code = 0;
            if (v11.length() > 3)
            {
                std::string v14 = v11.substr(v11.length() - 3);
                code = v14 == ".wxs";
                if (code)
                {
                    code = 2;
                }
                else
                {
                    std::string v3 = WXML::Rewrite::ToStringCode(v11);
                    a3 = v3;
                }
            }
            return code;
        }
    } // namespace str
} // namespace night
