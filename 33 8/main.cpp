#include <iostream>
#include <fstream>
using namespace std;
int n,i=0,v[501],x,m=-1;
int main(){
    ifstream fin("bac.txt");
    fin >> n;
    for(i=0;i<n;i++)
        fin >> v[i];
    fin >> x;
    for(i=0;i<n;i++)
    {
        if(v[i]>m&&v[i]<=x)
            m=v[i];
    }
    if(m!=-1)
        cout << m;
    else cout << "nu exista";
    return 0;
}
