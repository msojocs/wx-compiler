#include "../include/string_utils.h"

std::string& trim(std::string &s) 
{
    if (s.empty()) 
    {
        return s;
    }
 
    s.erase(0, s.find_first_not_of(" "));
    s.erase(s.find_last_not_of(" ") + 1);
    return s;
}


void split(std::vector<std::string> result, std::string source, std::string mark) {
    int currentPos = 0;
    for (int i = source.find(mark, 0); ; i = source.find(mark, currentPos))
    {
        std::string ele = source.substr(currentPos, i);
        trim(ele);
        result.emplace_back(ele);
        if (i == -1)
            break;
        currentPos = i + 1;
    }
    
}