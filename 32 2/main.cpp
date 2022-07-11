#include <iostream>

using namespace std;

int main()
{
    int v[100],n,i,j,ok=1,d;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> v[i];
    for(i=0;i<n;i++)
    {
        ok=1;
        for(d=2;d<=v[i]/2;d++)
            if(v[i]%d==0)ok=0;
        if(ok==1)
        {
            n++;
            for(j=n;j>=i+2;j--)
                v[j]=v[j-1];
            v[i+1]=0;
            i++;
        }
    }
    for(i=0;i<n;i++)
        cout << v[i] << " ";
    return 0;
}
