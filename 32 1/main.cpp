#include <iostream>
#include <fstream>

using namespace std;
int v[100],n,aux1,aux2;
int main()
{
    ifstream fin("numere.in");
    fin >> n;
    for(int i=0;i<n;i++)
        fin >> v[i];
    aux1=v[0]; aux2=v[n-1];
    for(int i=0;i<n/2;i++)
    {
        v[i]=v[i+1];
    }
    v[n/2-1]=aux1;
    for(int i=n-1;i>n/2;i--)
    {
        v[i]=v[i-1];
    }
    v[n/2]=aux2;
    for(int i=0;i<n;i++)
        cout << "--AFISARE--" << endl << v[i] << " ";

    return 0;
}
