#include <iostream>
using namespace std;
int m,n,v[50][50],i,j,x,ok;
int main()
{
    cin >> m >> n;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin >> v[i][j];
    for(i=0;i<m;i++){
        ok=0;
        j=0;
        while(j<n-1){
            x=v[i][j];
            if(v[i][j+1]!=x)
                ok=1;
            j++;
        }
        if(ok==0)
            cout << i+1 << " " << x << endl;
    }
    return 0;
}
