#include <iostream>
#include <cstring>
using namespace std;
int aur=0,argint=0,bronz=0;
int main()
{
    strcut melodie{
    char nume[20],judet[30],nume_medalie[10];
    int an;
    }sp[500];
    while(sp[i]!=NULL){
        if(sp[i].an==2019){
            if(sp[i].nume_medalie=="aur")
                aur++;
            else if(sp[i].nume_medalie=="argint")
                argint++;
            else if(sp[i].nume_medalie=="bronz")
                bronz++;
        }
        i++;
    }
    return 0;
}
