#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}
int main()
{
    int a;
    cout << "enter the value ";
    cin >> a;
    if (a < 1)
    {
        cout << "we can noy find that !! erreor.... ";
    }
    else
    {
        cout << "the factorial of the number " << a << " is " << factorial(a) << endl;
    }
}