#include <iostream>
#include <cstring>
using namespace std;
char e[200];
int ok=1,i;
//e=[(a+b)/2]*4+(b*c+5)

int main()
{
    cin >> e;
    for(i=0;i<strlen(e);i++){
        if(strchr("+-/*",e[i])!=NULL)
            if((strchr("+-/*",e[i-1])!=NULL)||(strchr("([",e[i-1])!=NULL))
                ok=0;
            else if((strchr("+-/*",e[i+1])!=NULL)||(strchr(")]",e[i+1])!=NULL))
                ok=0;
        if(isalnum(e[i])!=0)
            if(isalnum((e[i-1])!=0))
                ok=0;
            else if((isalnum(e[i+1])!=0))
                ok=0;
        if(!((strchr("+-/*()[]=",e[i])!=NULL)||(isalnum(e[i])!=0)))
            ok=0;
    }
    cout << ok;
    return 0;
}
