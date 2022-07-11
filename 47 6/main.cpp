#include <iostream>
#include <cstring>

using namespace std;
int i, j, k, n;

int main() {
    struct student{
        char nume[20],grupa[10],bursa[3];
        int an_studiu, nr_credite;
    }st[300];
    for(i=0;i<300;i++){
        if(st[i].nr_credite>=30)
            strcpy(st[i].bursa,"Da");
            else strcpy(st[i].bursa,"Nu");
    }
    //a ^^^
    for(i=0;i<300;i++){
        if(strcmp(st[i].bursa,"Da")==0){
            cout << st[i].nume << ": " << st[i].an_studiu << ", " << st[i].grupa << endl;
        }
    }
    return 0;
}
