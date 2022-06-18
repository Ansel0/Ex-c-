#include <iostream>

using namespace std;
int n,v[10][10],i,j,aux;
int main()
{
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> v[0][i];
    }
    for(i=1;i<n;i++)
    {
        aux=v[i-1][0];
        for(j=1;j<n;j++)
            v[i][j-1]=v[i-1][j];
        v[i][n-1]=aux;
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}
