#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
int n,i=0;
char v[1000];
string cuvant;
int main()
{
    vector<string> line;
    ifstream fin("cuvinte.in");
    ofstream fout("cuvinte.out");

    while (std::getline(fin, cuvant))
    {
        line.push_back(cuvant);
        cout << cuvant;
    }

    return 0;
}
