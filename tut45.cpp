                                    // VIRTUAL BASE CLASS
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your Roll.No is " << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << " your result is here: " << endl
             << "maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Yout PT score is " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
       print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    result ankush;
    ankush.set_marks(94.54, 99.98);
    ankush.set_number(42000);
    ankush.set_score(9);
    ankush.display();
    return 0;
}