#include <iostream>
#include <cstring>
//la zoo sunt 100 de cocori si 120 de pasari flamingo
using namespace std;
int k,nr=0,i,ok=0,nu=0;
char text[100];
int main()
{
    cin.get(text,100);
    for(i=0;i<strlen(text);i++){
        if(isdigit(text[i])!=0){
            nr++;
            if(isdigit(text[i+1])==0){
                if(ok==1 && k!=nr){
                    cout << "NU";
                    nu=1;
                    break;
                }
                k=nr;
                nr=0;
                ok=1;
            }
        }
    }
    if (nu!=1)
    cout << k;
    return 0;
}
