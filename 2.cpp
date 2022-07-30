#include <iostream>
#include <string>
using namespace std;


int main()
{
    string str;
    genline(cin,str);

    char c = tolower(getchar());

    uint16_t n = 0;
    for (auto i:str) //容器遍历 auto &a:b可用于赋值
    {
        if(tolower(i) == c)
            ++n;
    }
    cout  << n << endl;
}
