#include <iostream>
using namespace std;
int v[50][50],m,n,i,j,ok,nr=0;

int main()
{
    cin >> m >> n;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin >> v[i][j];
    for(j=1;j<n;j++){
            ok=1;
        for(i=0;i<m;i++)
            if(v[i][j]==v[i][0])
                ok=0;
        if(ok==1)
            nr++;
    }
    cout<<nr;
    return 0;
}
