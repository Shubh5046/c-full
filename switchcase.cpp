#include <iostream>

using namespace std;
int main()
{
    int day;
    cout << "tell me your date ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "monday";
        break;
    case 2:
        cout << "tuesday";
        break;
    case 3:
        cout << "wednesday";
        break;
    case 4:
        cout << "wednesday";
        break;
    case 5:
        cout << "thursday";
        break;
    case 6:
        cout << "friday";
        break;
    case 7:
        cout << "satrarday";
        break;
    default:
        break;
    }

    return 0;
}