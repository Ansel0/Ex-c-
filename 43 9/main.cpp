#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;
int i,j,n,lg,nr;
char cuvant[30],lista[40][20],*s,*l,aux[20];
int main()
{
    ifstream fin("cuvinte.in");
    ofstream fout("cuvinte.out");

    fin >> n >> lg;
    cout << n << " " << lg << endl;
    while(fin >> cuvant){
        if(strlen(cuvant)==lg){
        strcat(lista[nr],cuvant);
        nr++;
        }
    }
    for(i=0;i<nr-1;i++){
        for(j=1;j<nr;j++){
            if(strcmp(lista[i],lista[j])>0){
                strcpy(aux,lista[i]);
                strcpy(lista[i],lista[j]);
                strcpy(lista[j],aux);
            }
        }
    }
    for(i=0;i<nr;i++)
        fout << lista[i] << endl;
    return 0;
}
