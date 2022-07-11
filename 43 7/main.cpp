#include <iostream>
#include <cstring>
using namespace std;
int i,dist,nr=0,n,ok=0,msj=0;
char s[100],v;
int main()
{
    cin >> v >> n >> s;
    for(i=0;i<n;i++){
        if(ok=1)
            nr++;
        if(s[i]==v){
            if(ok==1)
                msj=1;
            ok=1;
            dist=nr-1;
        }
    }
    if(msj==1)
        cout << dist;
        else cout << "Nu exista";
    return 0;
}
