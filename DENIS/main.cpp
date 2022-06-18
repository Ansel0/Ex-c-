#include <iostream>

using namespace std;

int main()
{
    int nr, x=0, p=1, n, d, ok, u;
    cin >> nr;
    //for(nr; nr>0; nr--)
    {
        cin >> n;
        while (n>0)
        {
            u=n%10;
            x=u+p*x;
            p=p*10;
            n=n/10;
        }
        cout << x;
    }
    return 0;
}
