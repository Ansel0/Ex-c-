#include <iostream>

using namespace std;
int n;
long P;
int main()
{
    cin >> n;
    P=1;
    while(n>0){
        P*=10;
        n--;
    }
    cout << P;
    return 0;
}
