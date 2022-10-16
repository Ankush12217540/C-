//TEMPLATE CLASS    // TEMPLATE CLASS WITH DEFAULT PARAMETER
#include<iostream>
using namespace std;
template<class T1=int , class T2=float , class T3= char>
class Ankush{
    public:
    T1 a;
    T2 b;
    T3 c;
    Ankush(T1 x, T2 y, T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
    }
};
int main(){
    Ankush<> h(5 ,6.4, 'k');
    h.display();
    cout<<endl;
    Ankush< float,char,char> g(4,'o', 'l');
    g.display();
    return 0;
}