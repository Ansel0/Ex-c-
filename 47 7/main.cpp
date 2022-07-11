#include <iostream>
#include <cstring>

using namespace std;
int i, j, ok=0, n=200, m=10, s=0, nr;

int main() {

    struct examinare{
        char tip_examinare[10],disciplina[20];
        int nr_credite;
    };
    struct student{
        char nume[20],grupa[10];
        examinare e[10];
        int an_studiu, nr_total_credite;
    }st[200];

    strcpy(st[0].nume,"Anton");
    strcpy(st[0].grupa,"A");
    st[0].an_studiu=2017;
    strcpy(st[0].e[0].tip_examinare,"proiect");
    strcpy(st[0].e[0].disciplina,"mate");
    st[0].e[0].nr_credite=7;

    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
            st[i].nr_total_credite+=st[i].e[j].nr_credite;
    }
    //a ^^^
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
            if((strcmp(st[i].e[j].tip_examinare,"proiect")==0)&&(st[i].e[j].nr_credite!=0))
                cout << st[i].nume << " " << st[i].an_studiu << " " << st[i].grupa << " " << st[i].e[j].disciplina << endl;
    //b ^^^
    for(i=0;i<n;i++){
        nr=st[i].e[0].nr_credite;
        for(j=1;j<m;j++)
            if(nr<st[i].e[j].nr_credite)
                nr=st[i].e[j].nr_credite;
        s+=nr;
    }
    cout << s;
    //c ^^^
    return 0;
}
