#include <iostream>
using namespace std;
int match=1,tabla[3][3],i;
int main()
{
    while(match==1){
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                cout << tabla[i][j];
                if(i<2)
                    cout << " | ";
            }
            if(i<2)
                cout << endl << "--------" << endl;
        }
    }
    return 0;
}
