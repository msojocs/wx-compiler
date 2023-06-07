#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<string> t;
    t.push_back("123456");
    t.push_back("7890");
    cout << t.at(0) << endl;
    return 0;
}