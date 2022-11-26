#include <iostream>

using namespace std;
int fr[100]={0},v[100],i,n,j;
int main()
{
    cin >>n;
    for(i=1;i<=n;i++)
        cin>>v[i];
    for(i=1;i<=n;i++){
        fr[v[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(fr[v[i]]>1){
            v[i]=6999999;
            fr[v[i]]--;
             cout << v[i] <<" ";
        }
    }
    for(i=1;i<n;i++)
        cout << v[i] << " ";
}

