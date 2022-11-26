#include <iostream>
using namespace std;
//n numere intregi, cate sunt prime
int i,n,a[30],nr=0;
int prim(int x){
    for(int d=2;d<=x/2;d++)
    {
        if(x%d==0)
            return 0;
    }
    return 1;
}
int main()
{
    cin >> n;
    for(i=1;i<=n;i++)
        cin >> a[i];
    for(i=1;i<=n;i++){
        if(prim(a[i])==1)
            nr++;
    }
    cout << nr;
    return 0;
}
