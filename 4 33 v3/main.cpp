#include <iostream>
#include <fstream>
using namespace std;
int n=1,i,v[1000],x,j;
int main(){
    ifstream fin("numere.in");
    ofstream fout("numere.out");
    fin >> v[0];
    while(fin >> x){
        for(i=0;i<n;i++){
            if(x==v[i]){
                break;
            }else if(x<v[i]){
                n++;
                for(j=n-1;j>i;j--)
                    v[j]=v[j-1];
                v[i]=x;
                break;
            }else if (i == n-1){
                n++;
                v[n-1] = x;
            }
        }
    }
    for(i=0;i<n;i++)
        cout << v[i] << " ";
    return 0;
}
