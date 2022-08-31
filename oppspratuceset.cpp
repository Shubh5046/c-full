#include <iostream>
using namespace std;
class student
{
private:
    int a, b, c;

public:
    int d, e, f;
    void impodata(int a1, int b1, int c1);
    void getdata()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
        cout << "the value of f is " << f << endl;
    }
};
void student ::impodata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}
int main()
{
    student shubham;
    shubham.d = 44;
    shubham.e = 85;
    shubham.f = 55;
    shubham.impodata(4, 8, 6);
    shubham.getdata();
    return 0;
}