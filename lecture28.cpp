#include<iostream>
using namespace std;
class y;
class x{
int data;
public:
  void setvalue(int value  ){
      data = value;
  }
friend int sum (x , y);
};

class y{
    int num;
    public:
     void setvalue(int value  ){
      num = value;
  }
  friend int sum (x , y);

};

int sum( x o1,y o2 ){
    cout<<"the sum of the value of two number x and y is "<< o1.data + o2.num <<endl;
}

int main(){
    x a;
    a.setvalue (9);

    y b;
    b.setvalue (8);

    sum(a,b );

    return 0;
}