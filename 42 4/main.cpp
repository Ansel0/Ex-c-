#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
using namespace std;
int i, j, n, k;
char mini[30],maxi[30],cuv[30];

int main()
{
    ifstream fin("cuvinte.in");
    ofstream fout("cuvinte.out");
    fin >> n >> mini >> maxi;
    while(fin>>cuv)
    {
        if(strcmp(mini,cuv)>0)
            for(i=0;i<strlen(mini);i++)
        {
            mini[i]=cuv[i];
        }
        if(strcmp(maxi,cuv)<0)
            for(i=0;i<strlen(maxi);i++)
        {
            maxi[i]=cuv[i];
        }
    }
    fout << mini << endl << maxi;
    return 0;
}
