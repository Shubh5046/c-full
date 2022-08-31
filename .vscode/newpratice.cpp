#include <iostream>
using namespace std;
class shopItem
{
    int Id;
    float Price;

public:
    void get_value(int a, float b)
    {
        Id = a;
        Price = b;
    }
    void getDisplay(void)
    {
        cout << "Code of the item is : " << Id << endl;
        cout << "Price  of the item is :" << Price << endl;
    }
};

int main()
{
    int size = 3;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;

    int i, p;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the Id and price of the item " << i + 1 << endl;
        cin >> p >> q;
        ptr->get_value(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << " The item number is : " << i + 1 << endl;
        ptr->getDisplay();
        ptrTemp++;
    }
    return 0;
}