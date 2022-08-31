#include <iostream>
using namespace std;

class employee
{

public:
    int id;
    float salary;

    employee(int inpay)
    {
        id = inpay;
        salary = 4500.00;
    }
    employee() {}
};
class programmer : public employee
{
public:
 
    int languagecode;
    programmer(int inpay)
    {
        id = inpay;
        languagecode = 9;
    }
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employee shubhm(1), Rahul(2);
    cout << shubhm.salary << endl;
    cout << Rahul.salary << endl;
    programmer skilf(1);
    cout << skilf.languagecode << endl;
    cout << skilf.id << endl;
    skilf.getdata();

    return 0;
}