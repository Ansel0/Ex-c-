#include <iostream>
using namespace std;
int i,j,x,n,v[100][100];
int main()
{
    cin >> n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> v[i][j];
    cin >> x;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    for(i=0;i<n;i++)
        if(v[0][i]%x==0)
            cout << v[0][i] << " ";
    for(i=1;i<n-1;i++)
        if(v[i][0]%x==0)
            cout << v[i][0] << " ";
    for(i=0;i<n;i++)
        if(v[n-1][i]%x==0)
            cout << v[n-1][i] << " ";
    for(i=1;i<n-1;i++)
        if(v[i][n-1]%x==0)
            cout << v[i][n-1] << " ";
    return 0;
}
