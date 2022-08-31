#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Myclass
{
public:
    T1 a;
    T2 b;
    T3 c;

    Myclass(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }

    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
    }
};

int main() {
Myclass <> h(7 , 4.5 , 'G');
h.display();

Myclass<float, char, char> g(1.6, 'o', 'c');
    g.display();
    return 0;
}