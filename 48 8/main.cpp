#include <iostream>
#include <cstring>

using namespace std;
int i, j, ok=0, n=50, m=10, suma=0, nr;

int main() {
    struct data{
        int zi,luna,an;
    };
    struct spectacol{
        char denumire[30],autor[20];
        data data_sp;
        int nr_bilete,pret;
    }s[50];
    for(i=0;i<n;i++){
        if(s[i].data_sp.luna==5 && s[i].data_sp.an==2019)
            suma+=s[i].nr_bilete*s[i].pret;
    }
    cout << s << endl;
    //a ^^^
    for(i=0;i<n;i++){
        if(strcmp(s[i].autor,"I.L.Caragiale")==0)
            cout << s[i].data_sp.zi << "/" << s[i].data_sp.luna << "/" << s[i].data_sp.an << endl;
    }
    //b ^^^
    return 0;
}
