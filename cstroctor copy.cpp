#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void);

    void printnum (){
        cout<<" the value of the complex num is "<< a<< " + " << b<<"i"<< endl;
    }
};

complex :: complex(void)
{
    a=10;
    b=6;
}

int main(){

    complex c1;
    c1.printnum();
}