#include <iostream>
using namespace std;
int aux,c,s,f=1,i;
int baza(int n,int b){
    while(n){
        if(n%10>=b)
            return 0;
        n/=10;
    }
    return 1;
}
int main(){
    cout << baza(1235,4);
}
