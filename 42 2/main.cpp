#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int i,j,k,n;
char t[50];

int main()
{
    cin >> t;
    n = strlen(t);
    for(i=0;i<n;i++){
        if((t[i]=='1')||(t[i]=='2')){
            n+=3;
            for(k=0;k<3;k++)
                for(j=n-1;j>i+1;j--)
                    t[j]=t[j-1];
                if(t[i]=='1'){
                    t[i+1]='u';
                    t[i+2]='n';
                    t[i+3]='u';
                }else if(t[i]=='2'){
                    t[i+1]='d';
                    t[i+2]='o';
                    t[i+3]='i';
                }
        }
    }
    cout << t;

    return 0;
}
