#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int v[100],i=0,n,mnr=0,nr=1;
    ifstream fin("bac.txt");
    while(fin >> v[i])
        i++;
    n=i;
    for(i=2;i<n;i++)
    {
        if((v[i-1]!=v[i])&&(v[i-2]!=v[i])&&(v[i-1]!=v[i-2]))
            nr++;
        else {
        if(nr>mnr)
        mnr=nr;
        nr=1;
        }
        cout << v[i-2] << " " << v[i-1] << " " << v[i] << endl;
    }
    cout << mnr;
    return 0;
}
