#include <iostream>
using namespace std;
int m,n,v[10][10],mini,i,j,s=0;
int main(){
    cin >> m >> n;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin >> v[i][j];

    for(j=0;j<m;i++){
            mini=v[i][0];
        for(i=0;i<n;j++){
            if(v[i][j]<mini)
                mini=v[i][j];
        }
        s+=mini;
        cout << mini << " ";
    }
    cout << s;
    return 0;
}
