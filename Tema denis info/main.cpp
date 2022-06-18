#include <iostream>
#include <cmath>

using namespace std;
double a,b,c,x,x1,x2,delta;

int main()
{
    cout << "a= ";cin >> a; // citeste a
    cout << "b= ";cin >> b; // citeste b
    cout << "c= ";cin >> c; // citeste c

    cout << a << "x^2+" << b << "x+" << c <<endl; // afisam functia

    delta = b*b-4*a*c; // aflam delta
    cout << "delta= " << delta << endl; // afisam delta

    if(a==0 && b==0)
    {
        cout << "Nu exista";
    }
    else if (a==0 && b!=0)
    {
        x=-1*b/a; // aflam x
        cout << "x= " << x << endl; // afisam x
        cout << "Doamna, nu stiu daca ati gresit dumneavoastra sau eu, dar nu reusesc";
    }
    else if (a!=0)
    {
        if(delta>0)
        {
            x1=(-1*b+sqrt(delta))/2*a; // aflam x1
            cout << "x1= " << x1 << endl; // afisam x1
            x2=(-1*b-sqrt(delta))/2*a; // aflam x2
            cout << "x2= " << x2; // afisam x2
        }else if(delta==0)
        {
            x=-1*b/2*a; // aflam x
            cout << "x=" << x; // afisam x
        }else if(delta<0)
        {
            cout << "Nu se pot calcula radacini";
        }
    }

    return 0;
}
