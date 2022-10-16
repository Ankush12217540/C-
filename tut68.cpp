// Member function Templates  // overlaoding template function
#include <iostream>
using namespace std;

template <class T>
class Ankush
{
public:
    T data;
    Ankush(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Ankush<T>:: display(){
    cout<<data;
};


void func(int a){
    cout<<"I am first func() "<<a<<endl;
}

template <class T>
void func1(T a){
    cout<<"I am templatised func() "<<a<<endl;
}

int main()
{
// // Ankush<float> p(5.7);
// Ankush<char> p('c'); 
// cout<<p.data<<endl;
// p.display();

// func(4);  // Exact match takes the highest priority
func1(4);  // Exact match takes the highest priority
    return 0;
}