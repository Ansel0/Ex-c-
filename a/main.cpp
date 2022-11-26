#include <iostream>
using namespace std;
int fp,p,n,a[51],i;
int cmd(int a, int b)
{
    while(a!=b)
        if(a>b)
            a-=b;
        else b=b-a;
    return a;
}
void factor(int n, int a[], int &fp, int &p)
{
    int cmmd,i,ok=0;
    cmmd=cmd(a[0],a[1]);
    for(i=2;i<n;i++)
        cmmd=cmd(cmmd,a[i]);
    while(cmmd>1 && ok!=1){
        fp++;
        if(cmmd%fp==0)
            ok=1;
        while(cmmd%fp==0){
            p++;
            cmmd/=fp;
        }
    }
    if(fp==1){
        fp=-1;
        p=0;
    }
}
int main()
{
    fp=1;p=0;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> a[i];
    factor(n,a,fp,p);
    cout << fp << " " << p;
    return 0;
}
