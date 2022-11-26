#include <iostream>
using namespace std;
int n1,x1[50],y1[50],eg,i,j;
int egale(int n,int x[50],int y[50])
{
    i=1;j=1;eg=0;
    while(i<=n && j<=n){
        if(x[i]<y[j])
            i++;
        else if(x[i]==y[j]){
            i++;j++;eg++;
        }
        else j++;
    }
    cout << eg;
}
int main(){
    cin >> n1;
    for(i=0;i<n1;i++)
        cin >> x1[i];
    for(i=0;i<n1;i++)
        cin >> y1[i];
    egale(n1,x1,y1);
}
