#include <iostream >
using namespace std;

template <class T>
class harry
{
public:
    T data;
    harry(T a)
    {
        data = a;   
    }
    void display();
};

template <class T>
void harry<T>::display()
{
    cout << data;
}
int main()
{
    harry<int> h(5.7);
    cout << h.data << endl;
    h.display();
    return 0;
}