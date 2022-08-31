#include <iostream>
using namespace std;

class base1
{
protected:
    int base1num;

public:
    void set_base1num(int a)
    {
        base1num = a;
    }
};
class base2
{
protected:
    int base2num;

public:
    void set_base2num(int a)
    {
        base2num = a;
    }
};

class base3
{
protected:
    int base3num;

public:
    void set_base3num(int a)
    {
        base3num = a;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "Print the value of base 1  : " << base1num << endl;
        cout << "Print the value of base 2  : " << base2num << endl;
        cout << "Print the value of base 3  : " << base3num << endl;
        cout << "the sum of three num is " << base1num + base2num + base3num << endl;
    }
};

int main()
{
    derived Shubham;
    Shubham.set_base1num(56);
    Shubham.set_base2num(5);
    Shubham.set_base3num(48);
    Shubham.show();

    return 0;
}