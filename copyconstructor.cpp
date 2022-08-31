#include <iostream>
using namespace std;

class number
{
    int a;

public:
    number(){};
    number(int num)
    {
        a = num;
    }
       number (number &obj){
        cout<<" yes this value got printed!!!";
        a = obj.a;
       }
    void displayNum(){
        cout<<" the number is "<< a <<endl;
    }
};

int main(){

    number z1 , z2(45) , z3;
z2.displayNum();

number z(z2);
z.displayNum ();
}