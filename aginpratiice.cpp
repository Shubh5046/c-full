#include <iostream>
using namespace std;

class y;

class X
{
    int val1;

    friend int calculator(X &, Y &);

public:
    void setnum(int a)
    {
        val1 = a;
    }
    void displaynum(void)
    {
        cout << val1 << endl;
    }
};

class Y
{
    int val2;

    friend int calculator(X &, Y &);

public:
    void setnum(int a)
    {
        val2 = a;
    }
    void displaynum(void)
    {
        cout << val2 << endl;
    }
};

int calculator(X &e, Y &f)
{

    int temp = e.val1;
    e.val1 = f.val2;
    f.val2 = temp;
}

int main()
{
    X o1;
    Y o2;

    o1.setnum(564);
    o2.setnum(856);
    calculator(o1, o2);

    cout << "The value of c1 after exchanging becomes: ";
    o1.displaynum();
    cout << "The value of c2 after exchanging becomes: ";
    o2.displaynum();
}