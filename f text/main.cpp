#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    //citire
    string text;
    ifstream fisier("file.txt");
    while(getline (fisier, text))
        cout << text << endl;
    fisier.close();

    //scriere
    ofstream fisier2("file2.txt");
    fisier2 << "hahdahfhsd";
    fisier2.close();

    return 0;
}
