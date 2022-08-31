#include <iostream>

using namespace std;
int main()
{
    int age;
    cout << "\nPlease tell me your age : ";
    cin >> age;
    if (age < 18)
    {
        cout << "\nSorry You can not drive ";
    }
    else if (age == 18)
    {
        cout << " \nyou can drive Vaichel under 100cc ";
    }
    else
    {
        cout << "\nyou Can drive everything";
    }
}
