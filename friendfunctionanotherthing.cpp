#include<iostream>
using namespace std;
class complex;
class calculator

{

public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumrealcomplex(complex o1, complex o2);
        int sumCompcomplex(complex o1, complex o2);

};

class complex
{
    int a;
    int b;
    // friend int calculator ::sumrealcomplex(complex, complex);
    // friend int calculator ::sumCompcomplex(complex, complex);
    friend class calculator;


public:
    void setnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void printnumber()
    {
        cout << "The  complex number " << a << "+" << b << "i" << endl;
    }
};

int calculator ::sumrealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator :: sumCompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1, 6);
    

    o2.setnumber(2, 7);
    

    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 amd o2 is " << res << endl;
    int resc = calc.sumCompcomplex(o1, o2);
    cout << "the sum of Complex part of o1 amd o2 is " << resc << endl;


    return 0;
}