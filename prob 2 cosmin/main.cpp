#include <iostream>
#include <fstream>
using namespace std;
int divPrim(int n, int &s){
    int d,h,p=0,ok;
    for(d=2;d*d<=n;d++){
        if(n%d==0){
            ok=1;
            for(h=2;h*h<=d;h++)
                if(d%h==0)ok=0;
            if(ok==1){
                while(n%d==0){
                    p++;
                    n/=d;
                }
                cout << "d-" << d << " p-" << p << endl;
                if(p%2!=0){
                    s+=d;
                }
            }
        }
    }
}
int main()
{
    int s;
    divPrim(360,s);
    cout << s;
    return 0;
}
