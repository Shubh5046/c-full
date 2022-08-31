#include <iostream>
using namespace std;
class c2;
class c1
{
    int val1;
 friend int internum (c1 &, c2 &);
public:
    void setnum(int a)
    {
        val1 = a;
    }
    void display(void)
    {
        cout << val1 << endl;
    }
};

class c2
{
    int val2;
  friend int internum (c1 &, c2 &);
public:
    void setnum(int a)
    {
        val2 = a;
    }
    void display(void)
    {
        cout << val2 << endl;
    }
};

int internum (c1 &x, c2 &y){
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2=temp;
}


int main(){
    c1 oc1;
    c2 oc2;

    oc1.setnum(45);
    oc2.setnum(69);
internum (  oc1 , oc2);

cout << "The value of c1 after exchanging becomes: ";
  oc1.display();
  cout << "The value of c2 after exchanging becomes: ";
  oc2.display();

}