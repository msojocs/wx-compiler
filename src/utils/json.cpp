#include <iostream>
#include <map>
#include <iomanip>
#include <sstream>

std::string EscapeToJsonString(std::string const& a2)
{
    std::stringstream ret;
    for (int i = 0; i < a2.length(); i++)
    {
        char cur = a2[i];
        if (cur == '\\' || cur == '"' || cur <= 0x1Fu)
        {
            ret << "\\u";
            ret << std::hex << std::setw(4) << std::setfill('0') << static_cast<int>(cur);
        }
        else
        {
            ret << cur;
        }
    }
    
    return ret.str();
}

std::string DictToJsonString(std::map<std::string, std::string> const& a2)
{
    std::stringstream ret;
    ret << "{";
    bool isFirst = true;
    for(auto kv: a2)
    {
        if (!isFirst)
        {
            ret << ",";
        }
        ret << "\"";
        // key
        ret << EscapeToJsonString(kv.first);
        ret << "\":";

        ret << "\"";
        // value
        ret << EscapeToJsonString(kv.second);
        ret << "\"";
        isFirst = false;
    }
    ret << "}";
    return ret.str();
}
