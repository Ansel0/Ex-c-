#include <iostream>
#include <fstream>
using namespace std;
int n,i=0,v[100],j;
int main()
{
    ifstream fin("numere.in");
    fin >> n;
    while(fin >> v[i])
        i++;
    for(i=0;i<n-1;i++)
    {
        if(v[i+1]==v[i])
        {
            for(j=i+1;j<n-1;j++)
                v[j]=v[j+1];
                n--;
        }
    }
    for(i=0;i<n;i++)
        cout << v[i] << " ";
    return 0;
}
