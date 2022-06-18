#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
    /*string linie;
    ifstream numere("numere.in");
    while(getline(numere, linie))
    {

    }*/

    char str[] = "Geeks for Geeks";

    // Returns first token
    char token = strtok(str, " ");

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }

    return 0;
}
