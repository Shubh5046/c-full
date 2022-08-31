#include<iostream>
using namespace std;
int sum (int ,int);
int main(){
int num1, num2;
cout<<"print the value of num1"<<endl;
cin>>num1;
cout<<"print the value of num2"<<endl;
cin>>num2;
cout<<"the Sddition of num1 and Num2 is : "<<sum(num1,num2)<<endl;
    return 0;

}
int sum (int a , int b){
    int c = a+b;
    return c;
};