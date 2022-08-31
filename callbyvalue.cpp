#include<iostream>
using namespace std;
int swapPointer (int *a ,int *b){
    int temp = *a;
   * a = *b ;
   * b= temp;
}
int main (){
   int x=4, y=7;
   swapPointer (&x ,&y);
   cout<<"the value of  x is "<< x << "and y after swaping"<< y <<endl;

    return 0;
}  