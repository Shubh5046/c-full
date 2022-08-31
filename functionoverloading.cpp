#include<iostream>
using namespace std;
int sum (int a , int b){
    return (a+b);
}
int product (int a , int b , int c){
    return (a*b*c);
}
int area ( int a , int b ){
    return (a*b);
}
int tarea ( int x , int y ){
    return(0.5 * x * y);
}
int main(){
    cout<<"the sum of two number is"<<sum(3,4)<<endl;
  cout<<"the product of two number is "<<product(2,5,3)<<endl;

 cout<<"area of a rectangle "<<area (5 ,6)<<endl;
 cout<<"the area of a triangle having hight 7 and bredth 8 is "<<tarea( 7,8) << endl;
    return 0;
}