#include <iostream>
#include <fstream>
using namespace std;
int i=0,n,v[1000],j,k,aux,sortat;
int main()
{
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    while(fin >> v[n])
    {
        n++;
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
            if((v[i]==v[j])&&(j!=i))
            {
                for(k=i;k<n-1;k++)
                    v[k]=v[k+1];
                n--;i--;
            }
    }
    do
    {
        sortat=1;
        for(i=0;i<n-1;i++)
        {
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                sortat=0;
            }
        }
    }while(!sortat);
    for(i=0;i<n;i++)
        cout << v[i] << " ";
    return 0;
}
