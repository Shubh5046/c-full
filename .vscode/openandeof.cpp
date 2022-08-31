
#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out;
    out.open("textfile.txt");
    out << "This is me ";
    out.close();

    ifstream in;
    string st;
    in.open("textfile.txt");
    while (in.eof() == 0)
    {

        getline(in, st);
        cout << st << endl;
    }
    return 0;
}