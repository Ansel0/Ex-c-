#include <iostream>
#include <cstring>
using namespace std;

char s[251],t[251];
int n=0,i;

int main()
{
    n=0;
    cin >> s >> t;
    for(i=0;i<strlen(s);i++)
        if(isdigit(s[i])!=0)
            n=n*10+(s[i]-'0');
    for(i=0;i<strlen(t);i++)
        if(isdigit(t[i])!=0)
            n=n*10+(t[i]-'0');
    cout <<endl << n;
    return 0;
}
