#include <iostream>
using namespace std;

class shopItem
{ int id;
    float price;

public:
   

    void  get_number (int a, float b) /*wrong but idk */
    {
        id = a;
        price = b;
    }
    void display_data(void)
    {
        cout << "Code of the item is :" << id << endl;
        cout << "price of the item is : " << price << endl;
    }
};

int main()
{
    int size = 3;
    shopItem *ptr = new shopItem[size];
    shopItem *ptrTemp = ptr;
    int p, i;
    float q;

    for (i = 0; i < size; i++)
    {
        cout << "Enter the id of the item " << i + 1 << endl;
        cin >> p >> q;
        ptr->get_number(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "The Item number : " << i + 1 << endl;
        ptr->display_data();
        ptrTemp++;
    }

    return 0;
}