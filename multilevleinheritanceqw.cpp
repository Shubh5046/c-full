#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}

void student ::get_roll_number()
{
    cout << "The roll number of the student is " << roll_number << endl;
}

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_mark(float, float);
    void get_mark(void);
};

void Exam ::set_mark(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void Exam ::get_mark()
{
    cout << " The mark Obtained in math is " << maths << endl;
    cout << " The mark Obtained in math is " << physics << endl;
};
class Result : public Exam
{
    float percentage;

public:
    void display_results()
    {
        get_roll_number();
        get_mark();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    Result harry;
    harry.set_roll_number(420);
    harry.set_mark(80.0, 90.0);
    harry.display_results();
    return 0;
}