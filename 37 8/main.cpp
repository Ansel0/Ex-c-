#include <iostream>

using namespace std;
int n,v[15][15],i,j,x=1;
int main()
{
    cin >> n;
    for(i=0;i<n;i++){
            if(i%2==0)
        for(j=0;j<n;j++){
            v[i][j]=x;
            x++;
        }else if (i%2!=0)
        for(j=n-1;j>=0;j--){
            v[i][j]=x;
            x++;
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cout << v[i][j] << " ";
        cout << endl;
    }
    return 0;
}
