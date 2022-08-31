#include <iostream>
using namespace std;

class Base
{
    int Data1;

public:
    int Data2;
    void setdata();
    int getdata1();
    int getdata2();
};


void Base ::setdata()
{
    Data1 = 10;
    Data2 = 20;
}
int Base ::getdata1()
{
    return Data1;
}

int Base ::getdata2()
{
    return Data2;
}

class Derived : public Base
{
    int Data3;

public:
    int process();
    int display();
};

int Derived ::process()
{
    Data3 = Data2 * getdata1();
}
int Derived ::display()
{
    cout << "The value of the  Data1 is " << getdata1 << endl;
    cout << "The value of the  Data2 is " << Data2 << endl;
    cout << "The value of the  Data3 is " << Data3 << endl;
}

int main()
{
    Derived der;
    der.setdata();
    der.process();
    der.display();

    return 0;
}