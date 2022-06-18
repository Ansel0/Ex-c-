#include <iostream>
#include <fstream>
using namespace std;
int n,v[500],i=0,j;
int main()
{
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    fin >> n;
    while(fin >> v[i])
        i++;
    for(i=0;i<n;i++)
    {
        if(v[i]%2==0)
        {
            n+=1;
            for(j=n-1;j>i;j--)
                v[j]=v[j-1];
            v[i+1]=2019;
        }
    }
    for(i=0;i<n;i++)
        cout << v[i] << " ";
    return 0;
}
