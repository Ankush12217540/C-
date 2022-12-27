                           // POINTER TO OBJECTS AND ARROW OPERATOR
#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // complex c1;
    // complex *ptr = &c1;                 // * star laga ke deference ho jata hain
    complex *ptr = new complex; // new laga ke ek naya object ban jata hain
                                // (&) ampersand laga ke  address ho hata hain

    // c1.setData(1,54); is same as
    //   (*ptr).setData(1,54);  is exactly same as
    ptr->setData(1, 54);

    // c1.getData();
    //   (*ptr).getData(); is as good as
    ptr->getData();

    

    //ARRAY OF OBJECTS
    complex *ptr1 = new complex[4];
    ptr1->setData(1,4);
    ptr1->getData();    
     return 0;
}
