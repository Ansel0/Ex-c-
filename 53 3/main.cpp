#include <iostream>
using namespace std;
int inv,aux;
int palindrom(int n){
    aux=n;
    while(aux!=0){
        inv=inv*10+aux%10;
        aux/=10;
    }
    if(inv==n)
        return 1;
    else return 0;
}
int main(){
    cout << palindrom(17671);
}
