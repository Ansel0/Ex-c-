#include <iostream>
using namespace std;
int x,ok,n,i,aux,nr=0,num[9],inv[9],n1,n2,j;
int dpalindrom(int a,int b){
    for(n=a;n<=b;n++){
        aux=n;
        i=0;
        while(aux){
            inv[i]=aux%10;
            aux/=10;i++;
        }
        nr=i;i=0;
        for(i=0;i<nr;i++){
            num[i]=inv[nr-i-1];
        }
        ok=1;
        for(i=2;i<nr-2;i++){
            if(inv[i]!=num[i])
                ok=0;
        }
        if(ok==1)
            cout << n << " ";
    }
}
int main(){
cin >> n1 >> n2;
    dpalindrom(n1,n2);
}
