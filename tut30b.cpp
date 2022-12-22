#include<iostream>
using namespace std;
class complex
{
    int a, b;

public:
//  complex(void);
    complex(int, int); //  constructor declaration  // kyouki iska naam same hain class ke naam se; same hona zaroori hain.

    void printNumber()
    {
        cout << "Your number is " << a << "+" << b << "i" << endl;
    }
};


// complex :: complex(void) ------->This is default constructor as it takes no parameter 

complex :: complex(int x, int y) // ------->This is paramaterized  constructor as it takes two parameter 
{
    a=x;
    b=y;
    // cout << "Hellow world"
} 


int main(){
    // Implicit  call 
    complex a(4,6);

// Explicit call;
complex b= complex(5,7);

a.printNumber();
b.printNumber();
return 0;
}
