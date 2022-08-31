#include <iostream>
using namespace std;

class section
{
    int studentid;
    int mark;
    public:
    void setdata(void)
    {
        cout << "enter the id of the student" << endl;
        cin >> studentid;
    }
    void getdata(void)
    {
        cout << "the id of the stuvent is " << studentid << endl;
    }
};
int main()
{
    section acc[5];
    for (int i = 0; i < 5; i++)
    {
        acc[i].setdata();
        acc[i].getdata();
    }

    return 0;
}