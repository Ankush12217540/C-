          //INITIALIZATION LIST IN CONSTRUCTOR

#include <iostream>
    using namespace std;

/*
Syntax for initialization list constructor:
constructor argument-list) : INITILIZATION SECTION
{
    assignment + other code;
}

*/
class Test
{
    int a;
    int b;
    
public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i+j)
    // Test(int i, int j) : a(i), b(i*j)
    // Test(int i, int j) : a(i), b(a + j)
//    Test(int i, int j) : b(j) , a(i+b) //--->RED Flag  this will create problem because
//     //  a will be initialized first   

Test (int i , int j): a(i)
    {
        b=j;
        cout<<"Constructor executed "<<endl;
        cout<<"The value of a is : "<<a<<endl;
        cout<<"The value of b is: "<<b<<endl;
    }
};

int
main()
{
    Test t(4,6);
    return 0;
}
