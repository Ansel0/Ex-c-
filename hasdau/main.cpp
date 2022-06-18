#include <iostream>
using namespace std;
int main()
{
    int i,j,m,n,a[20][20],x=1,k;
    cin >> n;
    m=n;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            a[i][j]=x++;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            if(i=j)
            for(k=j;k<n;k++)
                a[i][k]=a[i][k+1];
    m--;
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
