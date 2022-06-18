#include <iostream>
#include <fstream>
using namespace std;
int v[10000],i,j,n=0,r[99],ls,ld,ok=0;
int main()
{
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    while(fin>>v[n])
        n++;
    for(i=0;i<n;i++)
    {
        r[v[i]]=v[i];
    }
    for(j=0;j<100;j++)
    {
        ok=0;
        for(i=0;i<100;i++)
        {
            if(v[i]==r[j] && ok==0 && v[i]!=0 && r[j]!=0)
            {
                ls = i;
                ok=1;
                cout << v[i] << " ";
            }
            if(v[i]==r[j] && v[i]!=0 && r[j]!=0)
            {
                ld=i;
            }
        }
        if(ld-ls!=0)
            ld--;
        if(ok==1)
        cout << ld-ls << endl;
        ld=0;
        ls=0;
    }
    return 0;
}
