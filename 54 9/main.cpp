#include <iostream>
#include <cmath>
using namespace std;

struct punct{
    float x,y;
    }A,B;

float distanta(punct A, punct B){
    return sqrt((B.x-A.x)*(B.x-A.x)+(B.y-A.y)*(B.y-A.y));
}

int main(){
    A.x=2;A.y=3;
    B.x=-1;B.y=0;
    cout << distanta(A,B);
    return 0;
}
