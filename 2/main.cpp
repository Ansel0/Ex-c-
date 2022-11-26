#include <iostream>

using namespace std;

int main()
{
    int i,d,s;
    for(i=2;i<=1000000;i+=2){
        s=0;
        for(d=1;d<=i/2;d++)
            if(i%d==0)
                s+=d;
        if(i==s)
            cout << i << " ";
    }
}
