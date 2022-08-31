#include<iostream>
using namespace std;

class shop{
    int itemid[100];
    int itemprice[100];
    int counter;
      
      public:
      void initcounter(void) { counter = 0 ;}
      void setprice(void);
      void displayprice(void);

};
 void shop :: setprice (void) {
 cout<<"Enter id of your item "<<counter+1<<endl;
 cin>>itemid[counter];
  cout<<"Enter price of your item"<<endl;
  cin>>itemprice[counter];
  counter++;
    }

    void shop :: displayprice(void ){
        for (int i = 0; i < counter; i++)
        {
            cout<<"the pice of the item with item id"<<itemid[i]<< "is"<<itemprice[i]<<endl;
        }
        
    }

    int main (){
        shop dukkan;
        dukkan.initcounter();
        dukkan.setprice();
         dukkan.setprice();
          dukkan.setprice();
          dukkan.displayprice();

 return 0;
    }