#include <iostream>
#include <cstring>

using namespace std;
int i,j,k,n,m,nr=0;
char s[250],t[250];

int main()
{
    cin >> s >> t;
    n=strlen(s);
    for(i=0;i<n;i++)
        if(isdigit(s[i]))
            nr=nr*10+int(s[i])-48;
    n=strlen(t);
    for(i=0;i<n;i++)
        if(isdigit(t[i]))
            nr=nr*10+int(t[i])-48;
    cout << nr;
    return 0;
}
