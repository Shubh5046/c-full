#include <iostream>
using namespace std;
class employ
{
   int id;
   static int count;

public:
   void Setdata(void)
   {
      cout << "enter the id " << endl;
      cin >> id;
      count++;
   }
   void getdata(void)
   {
      cout << "the id of the employ is " << id << " and the employ number is  " << count << endl;
   }
   static void getcount(void)
   {
      cout << "the value of count is " << count << endl;
   }
};
int employ ::count;
int main()
{

   employ shubh, rohan, gandu;
   shubh.Setdata();
   shubh.getdata();
   employ ::getcount();

   rohan.Setdata();
   rohan.getdata();
   employ ::getcount();

   gandu.Setdata();
   gandu.getdata();
   employ ::getcount();

   return 0;
}