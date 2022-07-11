#include <iostream>
#include <cstring>
using namespace std;
//destinatie(tara,oras) data
int i,n=0;
int main()
{
    struct data {
        int zi,luna,an;
    };
    struct excursie{
        char nume[30], oras[40], tara[30];
        data data_exc;
    }e[300];
    char numed[300];
    strcpy(numed,"nume");
    for(i=0;i<300;i++){
        if(strcmp(numed,e[i].nume)==0){
            cout << e[i].nume << ": " << endl
            << "destinatie: " << e[i].tara << ", " << e[i].oras << endl
            << "data: " << e[i].data_exc.zi << "/" << e[i].data_exc.luna << "/" << e[i].data_exc.an;
            n++;
        }
    }
    if(n==0)
        cout << "Nicio excursie";
    return 0;
}
