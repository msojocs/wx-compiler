#include "../src/include/wxml.h"

using namespace std;

void PrintVectorBase(std::vector<std::shared_ptr<WXML::EXPRLib::Base>> &ret)
{
    bool isFirst = true;
    for (auto &&i : ret)
    {
        if (!isFirst)
        {
            cout << "," << endl;
        }
        isFirst = false;
        cout << "{" << endl;
        if (i->offset_0 == WXML::EXPRLib::off_55F20C)
        {
            cout << "\"offset_0\": " << "\"0x55f20c\"," << endl;
            cout << "\"offset_4\": \"" << i->offset_4_str << "\"," << endl;
            cout << "\"offset_32\": " << i->offset_32 <<"," << endl;
            cout << "\"offset_36\": \"" << i->offset_36 << "\"" << endl;
        }
        else if(i->offset_0 == WXML::EXPRLib::off_55F220)
        {
            cout << "\"offset_0\": " << "\"0x55f220\"," << endl;
            cout << "\"offset_4\": \"" << i->offset_4_str << "\"," << endl;
            cout << "\"offset_32\": 0," << endl;
            cout << "\"offset_36\": \"<EMPTY std::string>\"" << endl;
        }
        else if(i->offset_0 == WXML::EXPRLib::off_55F1E4)
        {
            cout << "\"offset_0\": " << "\"0x55f1e4\"," << endl;
            cout << "\"offset_4\": " << i->offset_4_int << "," << endl;
            cout << "\"offset_32\": 0," << endl;
            cout << "\"offset_36\": \"not available\"" << endl;
        }
        else if(i->offset_0 == WXML::EXPRLib::off_55F1F8)
        {
            cout << "\"offset_0\": " << "\"0x55f1f8\"," << endl;
            cout << "\"offset_4\": \"0xabababab -> 0xabababab\"," << endl;
            cout << "\"offset_32\": 0," << endl;
            cout << "\"offset_36\": \"not available\"" << endl;
        }
        cout << "}" << endl;
    }
    
}
void PrintBNF(WXML::EXPRLib::BNF & ret)
{
    cout << "{" << endl;
    cout << "\"offset_0\": {" << endl;
    // cout << "\"type\": \"std::vector\"," << endl;
    cout << "\"size\": " << ret.offset_0.size() << "," << endl;
    cout << "\"capacity\": " << ret.offset_0.capacity() << "," << endl;
    cout << "\"data\": [" << endl;
    PrintVectorBase(ret.offset_0);
    cout << "]" << endl;
    cout << "}" << endl;
    cout << "}" << endl;
}
void PrintVectorBNF(std::vector<WXML::EXPRLib::BNF> &ret)
{
    // cout << "\"type\": \"std::vector\"," << endl;
    cout << "\"size\": " << ret.size() << "," << endl;
    cout << "\"capacity\": " << ret.capacity() << "," << endl;
    cout << "\"data\": [" << endl;
    bool isFirst = true;
    for (auto &&i : ret)
    {
        if (!isFirst)
        {
            cout << ",";
        }
        isFirst = false;
        PrintBNF(i);
    }
    
    cout << "]" << endl;
}
void PrintMapString(std::map<std::string, std::vector<WXML::EXPRLib::BNF>> &ret)
{
    
    // cout << "{" << endl;
    cout << "\"size\": " << ret.size() << "," << endl;
    cout << "\"data\": [" << endl;
    bool isFirst = true;
    for (auto &&i : ret)
    {
        if (!isFirst)
        {
            cout << ",";
        }
        isFirst = false;
        cout << "{" << endl;
        cout << "\"key\": \"" << i.first << "\"," << endl;
        cout << "\"value\": {" << endl;
        PrintVectorBNF(i.second);
        cout << "}" << endl;
        cout << "}" << endl;
    }
    cout << "]" << endl;
    // cout << "}" << endl;
}
void PrintMapInt(std::map<int, std::map<std::string, std::vector<WXML::EXPRLib::BNF>>>& ret)
{
    cout << "{" << endl;
    cout << "\"size\": " << ret.size() << "," << endl;
    cout << "\"data\": [" << endl;
    bool isFirst = true;
    for (auto &&i : ret)
    {
        if (!isFirst)
        {
            cout << ",";
        }
        isFirst = false;
        cout << "{" << endl;
        cout << "\"key\": " << i.first << "," << endl;
        cout << "\"value\": {" << endl;
        PrintMapString(i.second);
        cout << "}" << endl;
        cout << "}" << endl;
    }
    cout << "]" << endl;
    cout << "}" << endl;
    
}
int main(void)
{
    auto instance = WXML::EXPRLib::TransitTable::GetInstance();
    instance->Init();
    std::map<int, std::map<std::string, std::vector<WXML::EXPRLib::BNF>>> ret = instance->ret;
    PrintMapInt(ret);
    return 0;
}