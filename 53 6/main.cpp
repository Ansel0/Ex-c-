#include <iostream>
using namespace std;
int a,b,c[30],i,p[30],j,np;
int prime(int n, int y, int x[30])
{
    j=0;
    for(i=0;i<n;i++){
        if((x[i]%y)!=0){
            p[j]=x[i];
            j++;
        }
    }
    np=j;
    for(j=0;j<np;j++)
        cout << p[j] << " ";
    cout << endl << np;
}
int main(){
    cin >> a >> b;
    for(int k=0;k<a;k++)
        cin >> c[k];
    prime(a,b,c);
}
