#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_number(int a)
    {
        roll_number = a;
    }
    void print_number(void)
    {
        cout << "The roll number of the Student is : " << roll_number << endl;
    }
};

class test : virtual public student
{
protected:
    float phyiscs, maths;

public:
    void set_marks(float m1, float m2)
    {
        phyiscs = m1;
        maths = m2;
    }
    void print_marks(void)
    {
        cout << "The mark obtained in subjest physics is " << phyiscs << endl;
        cout << "The mark obtained in subjest maths is " << maths << endl;
    }
};

class sport : virtual public student
{
protected:
    float score;

public:
    void set_score(float a)
    {
        score = a;
    }
    void print_score(void)
    {
        cout << "The mark obtained in the pt class is " << score << endl;
    }
};

class result : public test, public sport
{
protected:
    float total;

public:
    void display(void)
    {
        total = phyiscs + maths + score;

        print_number();
        print_marks();
        print_score();
        cout<<" The result of the student is : "<< display<<endl;

    }
};

int main (){
    result Shubham;
    Shubham.set_number(4056);
    Shubham.set_marks(90.0 , 85.0);
    Shubham.set_score(80.0);
 
    Shubham.display();
}