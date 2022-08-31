#include <iostream>
using namespace std;
// float funcavg(T1 a, T2 b)
// // {
// //     float avg = (a + b) / 2.0;
// //     return avg;
// // }
// // float funcavg2(int a, int b)
// // {
// //     return avg;
// }
// template <class T1, class T2>
// float funcavg(T1 a, T2 b)
// {
//     float avg = (a + b) / 2.0;
//     return avg;
// }
template <class T>
void swapp(T1 &a, T2 b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    // float a;
    // a = funcavg(5.4, 2.4);
    // printf("The average value of the the two number is %f  ", a);
    int x = 5, y = 7;
    swapp(x, y);
            cout
        << x << endl
        << y;

    return 0;
};