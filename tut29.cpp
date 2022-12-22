#include <iostream>

using namespace std;

 
// CONSTRUCTOR
class complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special name function with same name as of the class.
    // It is used to initialize objects of its class
    // It is aautomatically invoked(call,execute) whenevwer an object is created

    complex(void); //  constructor declaration  // kyouki iska naam same hain class ke naam se; same hona zaroori hain.

    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};


complex :: complex(void) // ------->This is default constructor as it takes no parameter 
{
    a=0;
    b=0;
}
int main()
{
    complex c1, c2, c3;
    c1.printNumber();
    c2.printNumber();
    c3.printNumber();
    return 0;
}

//  PROPERTIES OF CONSTRUCTOR:
/*
 1. It should be decaled in the public section of the class 
 2. They are automatically inviked whenever the object is created
 3.They cannot return vslues and dont have return types
4.It cananot have default arguments
5.we cananot refer to their address 

*/
