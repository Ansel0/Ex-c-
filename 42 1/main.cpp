#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
char s[201];
char c[21];
int i,j,n=0;
int main()
{
    ifstream fin("sir.in");
    ofstream fout("sir.out");
    fin.getline(s,201);
    fin.getline(c,21);
    for(i=0;i<strlen(s);i++)
        if(s[i]==c[0]&&(i==0||s[i-1]==' '))
        {
            n++;
            j=i+1;
            while(s[j]!=' '&&j<strlen(s))
                j++;
            strcpy(s+i,s+j);
        }
    fout << s << endl << n;
    return 0;
}
