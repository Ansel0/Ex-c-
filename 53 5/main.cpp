#include <iostream>
using namespace std;
int nr,a[30],i,aux,sc,suma=0;
int numere(int n,int v[30])
{
    for(i=0;i<n;i++){
        aux=v[i];
        sc=0;
        while(aux>9){
            sc+=aux%10;
            aux/=10;
        }
        if(sc==aux)
            suma+=v[i];
    }
    if(suma==0)
        suma=-1;
    cout << suma;
}
int main(){
    cin >> nr;
    for(i=0;i<nr;i++){
        cin >> a[i];
    }
    numere(nr,a);
}
