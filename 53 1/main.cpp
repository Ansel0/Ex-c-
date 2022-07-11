#include <iostream>
using namespace std;
int aux,c,s,f=1,i;
int suma_cifre(int n){
    aux=n;
    while(aux!=0){
        c=aux%10;
        aux/=10;
        f=1;
        for(i=2;i<=c;i++){
            f*=i;
        }
        s+=f;
    }
    return s;
}
int main(){
    cout << suma_cifre(231);
}
