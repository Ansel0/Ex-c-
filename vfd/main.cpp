#include <iostream>
#include <cmath>

using namespace std;
int v[100], mare, mic, n;

int main()
{
    cin >> n;
    cin >> v[1];
    mare = v[1];
    mic = v[1];
    for (int i=2;i<=n;i++)
        {
        cin >> v[i];
        if(mare < v[i])
        mare = v[i];
        if(mic > v[i])
        mic = v[i];
        }
    cout << abs(mare-mic);

    return 0;

}
