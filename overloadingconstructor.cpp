#include <iostream>
using namespace std;

class complex
{
    int x, y;

public:
    int complex ();
    {
        x = 0;
    }

    int complex(int a, int b);
    {
        x = a;
        y = b;
    }

    int complex(int a);
    {
        x = a;
        y = 0;
    }
    void printnumber();
    {
        cout << "The  complex number " << x << "+" << y << "i" << endl;
    }
};

int main()
{
    complex o1 ( 8 , 6);

    o1.printnumber();
    return 0;
}