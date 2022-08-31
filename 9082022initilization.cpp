#include <iostream>
using namespace std;
class BankDeposite
{
    int principla;
    int year;
    int Rateofintrest;
    int ReturnValue;

public:
    BankDeposite() {}
    BankDeposite(int p, int y, float r);
    BankDeposite(int p, int y, int R);
    void show();
};

BankDeposite ::BankDeposite(int p, int y, float r)
{
    principla = p;
    Rateofintrest = r;
    year = y;
    ReturnValue = principla;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue * (1 + r);
    }
}
BankDeposite ::BankDeposite(int p, int y, int R)
{
    principla = p;
    Rateofintrest = float(R / 100);
    year = y;
    ReturnValue = principla;
    for (int i = 0; i < y; i++)
    {
        ReturnValue = ReturnValue * (1 + Rateofintrest);
    }
}

void BankDeposite ::show()
{
    cout << "The principal amount was " << principla
         << "having return value after " << year
         << "year is " << ReturnValue;
}

int main()

{
    BankDeposite bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    
    cout << "enter the value of p , y  , r" << endl;
    cin >> p >> y >> r;
    bd1 = BankDeposite(p, y, r);
    bd1.show();

    

    return 0;
}