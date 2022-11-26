#include <iostream>
using namespace std;

int i,j,n,m,linie1,linie2,a[40][40],aux,c,b,l1,l2,v[40][40];

void interschimbare(int n, int m, int linie1, int linie2, int a[40][40])
{
    for(j=0;j<m;j++){
        aux=a[linie1][j];
        a[linie1][j]=a[linie2][j];
        a[linie2][j]=aux;
    }
}
int main(){
    cin >> c >> b >> l1 >> l2;
    for(i=0;i<c;i++)
        for(j=0;j<b;j++)
            cin >> v[i][j];
    interschimbare(c,b,l1,l2,v);
}
