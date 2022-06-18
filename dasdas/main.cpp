#include <iostream>
#include <string.h>
#include <istream>

using namespace std;


int main()
{
    char s[] = "caractere";
    s[2] = s[2] -1;
    strcpy(s,s+2);
    strcpy(s+3,s+7);
    strupr(s);
    cout<<s;
    return 0;
}
