#include <iostream>
#include <cstring>
using namespace std;
int i,maxi=0,nos=0;
int main()
{
    struct angajat{
        char nume[30], functie[20], departament[30];
        int salariu_baza, ora_sp, nr_ore_sp, total_sporuri, salariu_obt;
    }a[300];
    for(i=0;i<300;i++){
        a[i].salariu_obt=a[i].salariu_baza+a[i].total_sporuri+a[i].ora_sp*a[i].nr_ore_sp;
    }
//a ^^^
    for(i=0;i<300;i++){
        if(strcmp(a[i].departament,"productie")==0){
            if(a[i].salariu_obt>maxi)
                maxi=a[i].salariu_obt;
        }
    }
    cout << maxi << endl;
//b ^^^
    for(i=0;i<300;i++){
        if(strcmp(a[i].departament,"marketing")==0){
            nos+=a[i].nr_ore_sp;
        }
    }
    cout << nos;
//c ^^^
    return 0;
}
