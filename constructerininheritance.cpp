#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "this constructer is called";
    }
    void printdata_base1(void)
    {

        cout << "the value i=of the data1 is " << data1 << endl;
    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "this constructer is called";
    }
    void printdata_base2(void)
    {

        cout << "the value of the data2 is " << data2 << endl;
    }
};

class derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class is called " << endl;
    }
    void print_derived(void)
    {
        cout << "The value of derived1 is " << derived1 << endl;
        cout << "The value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived shubham(1, 2, 3, 4);
    shubham.printdata_base1();
    shubham.printdata_base2();
    shubham.print_derived();
}