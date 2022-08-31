#include<iostream>
using namespace std;
float cyrrencyreciever( int currentmoney  , float factor =1.04){
    return currentmoney*factor;
}
int main(){
    int money=100000;
    cout<<"the money that is "<<money<<"will recieved after deposite is"<<cyrrencyreciever(money)<<endl;

}