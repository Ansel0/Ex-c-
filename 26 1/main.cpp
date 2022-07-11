#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int x,p=0,xm,pm;
    ifstream fin("numere.in");
    //ofstream fout("numere.out");
    while(fin>>x)
    {
        p++;
        if(x%5==0)
            {
                xm=x;
                pm=p;
            }
    }
    cout << xm << " " << pm;
    return 0;
}
