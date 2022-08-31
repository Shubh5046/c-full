#include <iostream>
using namespace std;

int main() 
{
     int a,i=1;
     cout << "Input a number :"<<endl;
    cin>>a;
    
    do{
      cout<<i<<" X "<<a<<" = "<<i*a<<" "<<endl;
      i++;
    }while(i<=10);
    return 0;
}