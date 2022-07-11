#include <iostream>
#include <fstream>
using namespace std;
int m,n,v[1000],r[1000],sortat,i,aux;
int main(){
    ifstream fin("bac.txt");
    fin >> m >> n;
    n=m+n;
    m=0;
    for(i=0;i<n;i++)
        fin >> v[i];
    for(i=0;i<n;i++)
        if(v[i]%2!=0){
            r[m]=v[i];
            m++;
        }
    do{
        sortat=1;
        for(i=0;i<m-1;i++){
            if(r[i]>r[i+1]){
                aux=r[i];
                r[i]=r[i+1];
                r[i+1]=aux;
                sortat=0;
            }
        }
    }while(!sortat);
    if(m!=0)
        for(i=m-1;i>=0;i--)
            cout << r[i] << " ";
    else cout << "nu exista";
    return 0;
}
