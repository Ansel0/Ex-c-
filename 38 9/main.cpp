#include <iostream>
#include <cmath>
using namespace std;
int v[15][15],n,i,j,nr=0,x=1;
int main()
{
    cin >> n;
    while(nr < float(n)/2)
    {
        for(i=nr;i<n-nr-1;i++){
            v[nr][i]=x;
            x++;
        }
        for(i=nr;i<n-nr-1;i++){
            v[i][n-nr-1]=x;
            x++;
        }
        for(i=n-nr-1;i>nr;i--){
            v[n-nr-1][i]=x;
            x++;
        }
        for(i=n-nr-1;i>nr;i--){
            v[i][nr]=x;
            x++;
        }
        nr++;
    }
    if(n%2!=0)
        v[nr-1][nr-1]=n*n;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}
