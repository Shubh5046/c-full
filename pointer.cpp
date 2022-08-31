#include<iostream>
using namespace std;
int main(){
int i=3;
int*c= &i;
int**d= &c;
// cout<<"the address of  is "<<&i<<endl;
// cout<<"the value of the address"<<*c<<endl;

cout<<"the adress is "<<&c<<endl;
cout<<"the value of  is "<<**d<<endl;
    return 0;

}