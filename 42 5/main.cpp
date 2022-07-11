#include <iostream>
#include <cstring>
#include <fstream>
//lumina, asteroizi, comete, albine, oceane, oaza soare, alba.
using namespace std;
int ok=0;
char t[200],r[200];
char* s;
int main()
{
    cin.get(t,200,'\n');
    s = strtok(t, " .,!?");
    while(s != NULL){
        if((strchr("aeiou",s[0]))&&(strchr("aeiou",s[strlen(s)-1]))){
            strcat(r,s);
            strcat(r," ");
            ok=1;
        }
        s = strtok(NULL, ".,!? ");
    }
    if(ok==1)cout << r;
    else cout << "Nu exista";
    return 0;
}
