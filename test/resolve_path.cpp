#include <iostream>
#include "../src/include/wxml.h"

using namespace std;

int main(void) 
{
    printf("test....\n");
    string a = "./page/API/components/set-tab-bar/set-tab-bar.wxml";
    string b = "../../../common/head.wxml";
    string result = WXML::DOMLib::resolvePath(a, b);
    printf("%s\n", result.c_str());
    return 0;
}