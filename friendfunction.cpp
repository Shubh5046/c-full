#include <iostream>
using namespace std;

class complex
{
    int a, b;
friend complex sumcomplex(complex o1, complex o2);
public:
    void setnumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnumber()
    {
        cout << "the complex number is " << a << "+" << b << "i" << endl;
    }
    
};
complex sumcomplex(complex o1, complex o2 )

    {  complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b)) ;
    return o3;
}

int main()
{
    complex c1, c2, sum;

    c1.setnumber(1,2);
    c1.printnumber();
    c1.setnumber(3,4);
    c1.printnumber();

    sum = sumcomplex(c1,c2);
    sum.printnumber();

    return 0;
}



