#include <iostream >
using namespace std;

template <class T1, class T2>
void swab(T1 &a, T2 &b)
{
    T temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 3, y = 6;
    swab(x, y);
    cout << x << endl
         << y;
    return 0;
};

/*wrong code */