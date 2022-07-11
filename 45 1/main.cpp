#include <iostream>
#include <cstring>
using namespace std;
char nm[200][30],comparat[30],aux[30];
int nearanjat=1,i,cmp,aox;
int main(){
    struct melodie{
    char nume[30],autor[20],tara[20];
    int loc_top,an_top;
    }m[200];
    strcpy(comparat,m[0].nume);
    for(int i=0;i<200;i++)
        if((strcmp(m[i].tara,"Romania")==0)&&(m[i].an_top==2018)&&(m[i].loc_top<=3))
            cout << m[i].nume<<endl;
    // a)^^^
    while(nearanjat==1){
            nearanjat=0;
        for(i=0;i<200;i++){
            if(i>=1){
                if(strcmp(m[i].nume,comparat)<0){
                    strcpy(aux,comparat);
                    strcpy(comparat,m[i].nume);
                    strcpy(m[i].nume,aux);
                    nearanjat=1;
                }
            }
        }
    }
    for(i=0;i<3;i++)
        cout << m[i].nume << " ";
    // b)^^^
    strcpy(comparat,m[0].tara);
    nearanjat=1;
    while(nearanjat==1){
            nearanjat=0;
        for(i=0;i<200;i++){
            if(i>=1){
                if((strcmp(m[i].tara,m[i-1].tara)==0)&&(m[i].loc_top<m[i-1].loc_top)){
                    aox=cmp;
                    cmp=m[i].loc_top;
                    m[i].loc_top=aox;
                    nearanjat=1;
                }
            }
        }
    }
    for(i=0;i<200;i++)
        cout << m[i].nume;
    // c) ^^^
    return 0;
}
