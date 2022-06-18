#include <iostream>
using namespace std;
int m,n,v[10][10],maxi,i,j,s=0;
int main(){
    cin >> m >> n;
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
            cin >> v[i][j];

    for(i=0;i<m;i++){
            maxi=v[i][0];
        for(j=0;j<n;j++){
            if(v[i][j]>maxi)
                maxi=v[i][j];
        }
        s+=maxi;
        cout << maxi << " ";
    }
    cout << s;
    return 0;
}
