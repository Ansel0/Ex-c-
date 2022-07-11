#include <iostream>
#include <cstring>

using namespace std;
int i, j, ok=0, n=100, m=10, suma=0, nr=0;

int main() {
    struct data{
        int zi,luna,an;
    };
    struct conferinta{
        char denumire[30],oras[20],tara[25],tematica[20];
        data data_conf;
        char nume[20], tip_inreg[20];
    }c[100];
    for(i=0;i<n;i++){
        if(c[i].data_conf.an==2019 && strcmp(c[i].tematica,"IT")==0 && strcmp(c[i].tip_inreg,"lector")==0){
            if(strcmp(c[i].tara,"Romania")==0 || strcmp(c[i].tara,"SUA")==0 || strcmp(c[i].tara,"Japonia")==0)
                cout << c[i].nume << endl;
        }
    }
    //a ^^^
    for(i=0;i<n;i++){
        if(c[i].data_conf.an==2019 && c[i].data_conf.luna==4 && strcmp(c[i].tematica,"medicina")==0 && strcmp(c[i].oras,"Iasi")==0 && strcmp(c[i].tip_inreg,"participant")==0){
            nr++;
            cout << c[i].nume << " ";
        }
    }
    cout << endl << nr;
    return 0;
}
