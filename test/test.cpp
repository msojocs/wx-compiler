#include <iostream>
#include <deque>

using namespace std;

int main(int argc, char const *argv[])
{
    std::deque<std::string> que;
    que.push_back("123");
    int i = 0;
    while (que.begin() != que.end())
    {
        que.pop_back();
        cout << "count: " << ++i << endl;
        if (i > 100) break;
    }
    que.clear();
    
    return 0;
}
