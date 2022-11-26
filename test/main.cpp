#include <iostream>

using namespace std;

void f(int a)
{
    if(a)
    {
        f(a/16);
        if(a%16<10) cout << a%16;
        else cout <<(char)('A'+(a%16-10));
    }
}
int main()
{
    f(198);
}
