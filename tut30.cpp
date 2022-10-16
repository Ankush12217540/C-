#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(void);  // constructor decelaration

    void printNumber(){
        cout<<"Your Number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex:: complex(void) // ----> This is default constructor as it takes no parameter
{
    a=0;
    b=0;
}
int main(){
    complex a;
    a.printNumber();
    return 0;
}