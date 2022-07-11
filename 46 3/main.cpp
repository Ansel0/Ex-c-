#include <iostream>
#include <cstring>
using namespace std;
int i,nr=0;
int main()
{
    struct data{
    int zi,luna,an;
    };
    struct consultatie{
    char pacient[20],cabinet[40];
    data data_cons;
    }c[100];
    while(i<100){
        if(c[i].data_cons.zi==10 && c[i].data_cons.luna==8 && c[i].data_cons.an==2019 && strcmp(c[i].cabinet,"stomatologie")){
            cout << c[i].pacient << " ";
            nr++;
        }
        i++;
    }
    cout << endl << nr;
    return 0;
}
