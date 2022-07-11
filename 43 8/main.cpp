#include <iostream>
#include <cstring>
using namespace std;
char t[400],voc[100];
char* cuv;
int i,n,nr=0,ok=0;
//Carte lectura soare copaci soare luna Soare soarele
int main()
{
    cin.getline(t,400);
    cuv=strtok(t, " ");
    while(cuv!=NULL){
        for(i=1;i<strlen(cuv);i++){
            if((strchr("aeiouAEIOU",cuv[i]))&&(strchr("aeiouAEIOU",cuv[i-1]))&&(ok==0)){
                ok=1;
                strcpy(voc,cuv);
            }
        }
        if(strcmp(cuv,voc)==0)
            nr++;
        cuv = strtok(NULL, ".,!? ");
    }
    cout << voc << " " << nr;
    return 0;
}
