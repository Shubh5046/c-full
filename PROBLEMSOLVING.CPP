#include <iostream>
#include <cmath>
using namespace std;

class simpleCalculator
{

    int a, b;

public:
    void getData_simple(void)
    {
        cout << "The value of a is : ";
        cin >> a;

        cout << "The value of b is : ";
        cin >> b;
    }

    void performSimpleCalculation()
    {
        cout << "The value of the operation a + b is : " << a + b << endl;
        cout << "The value of the operation a - b is : " << a - b << endl;
        cout << "The value of the operation a * b is : " << a * b << endl;
        cout << "The value of the operation a / b is : " << a / b << endl;
    }
};

class ScientificCalculator
{

    int a, b;

public:
    void getData_Scientific(void)
    {
        cout << "The value of a is : ";
        cin >> a;

        cout << "The value of b is : ";
        cin >> b;
    }

    void performScientificCalculation()
    {
        cout << "The value of the operation sin (a) is : " << sin(a) << endl;
        cout << "The value of the operation cos(a) is : " << cos(a) << endl;
        cout << "The value of the operation  tan(a) is : " << tan(a) << endl;
        cout << "The value of the operation exp(a) is : " << exp(a) << endl;
    }
};

class HybridCalculator : public simpleCalculator, public ScientificCalculator
{
};

int main()
{
    HybridCalculator calc;

    calc.getData_Scientific();
    calc.performScientificCalculation();

    calc.getData_simple();
    calc.performSimpleCalculation();
}