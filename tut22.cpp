// OOPs ---> Classes and Objects

//  c++--> initially called---> c with classes by bjarne stroustroup
// class--->extension of structure(in c)
// structures has limitation:
//             ->memmber are public
//             -> no methods
// classes ----> structure+ more
// classes-->can have methods and properties
// classe---> can make few member as private and few as public
// structures in c++ are typedefed
// you can declare objects along with the class declaration like this:
/* class Employee{
    // class defnition
} harry,rohan,lovish; */
// harry.salary = 8 make no sense if salary is private

// Nesting of member functions:

#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};


void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) == '1';
        }
        else
        {
            s.at(i) == '0';
        }
    }
}

void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
   // b.chk_bin();
    b.ones_compliment();
    b.display();
    return 0;
}
