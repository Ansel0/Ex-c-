#include <iostream>
#include <cstring>
using namespace std;

char t[51];
int i,j;

int main()
{
    cin >> t;
    for(i=0;i<strlen(t);i++)
    {
        if(t[i]=='1')
        {
            for(j=strlen(t)+2;j>i+3;j--)
            {
                t[j]=t[j-3];
            }
            t[i+1]='u';
            t[i+2]='n';
            t[i+3]='u';
            i+=3;
        }
        else if(t[i]=='2')
        {
            for(j=strlen(t)+2;j>i+3;j--)
            {
                t[j]=t[j-3];
            }
            t[i+1]='d';
            t[i+2]='o';
            t[i+3]='i';
            i+=3;
        }
    }
    cout << t;
    return 0;
}
