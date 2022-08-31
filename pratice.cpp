#include<iostream>
using namespace std;
class shop{
    int itemid[100];
    int itemprice[100];
    int counter ;
public:
void initcounter(void) { counter = 0 ;}
void setprice (void);
void displayprice(void);
};
 
 void shop :: setprice (void){
     

    cout<<"enter the itemid"<<counter+1<<endl;
    cin>>itemid[counter];
   
cout<<"enter the itemprice"<<endl;
    cin>>itemprice[counter];
    counter++;
 }

 void shop ::displayprice (void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"the item id is"<<itemprice[i]<< " with price is"<<itemprice[i]<<endl;
    }
    
 }

 int main(){
    shop dukan;
    dukan.setprice();
    dukan.setprice();
    dukan.setprice();
    dukan.initcounter();
    return 0;

 }