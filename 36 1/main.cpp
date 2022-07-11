#include <iostream>
using namespace std;
int n, v[20][20],i,j,x;
int main(){
    cin >> n >> x;
    for(i=0;i<n;i++){
        v[i][0]=x;
        v[0][i]=x;
    }
    for(i=1;i<n;i++){
        for(j=1;j<n;j++)
            v[i][j]=v[i-1][j]+v[i][j-1];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}
