#include <iostream>
using namespace std;

class shopItem
{
    int id;
    float price;

public:
    void set_value(int a, float b)
    {
        id = a;
        price = b;
    }
    void getDisplay(void)
    {
        cout << "Code of the item is : " << id << endl;
        cout << " price of the item is : " << price << endl;
    }
};

int main()
{
    int size = 3;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrtemp = ptr;
    int p, i;
    float q;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the id of the item " << i + 1 << endl;
        cin >> p >> q;
        ptr->set_value(p, q);
        ptr++;
    }

    for (i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrtemp->getDisplay();
        ptrtemp++;
    }
    return 0;
}