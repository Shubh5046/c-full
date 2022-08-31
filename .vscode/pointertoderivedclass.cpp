#include <iostream >
using namespace std;
class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "Displying base class variable var base  " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display()
    {
        cout << "Displying base class variable var base  " << var_base << endl;
        cout << "Displying base class variable var derived  " << var_derived << endl;
    }
};

int main()
{
    BaseClass *baseclas_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    baseclas_pointer = &obj_derived;

    baseclas_pointer->var_base = 32;
    baseclas_pointer->display();

    DerivedClass *derivedclass_pointer;
    
    derivedclass_pointer = &obj_derived;
    derivedclass_pointer->var_derived = 2500;
    derivedclass_pointer->var_base = 5600;
    derivedclass_pointer->display();
}
