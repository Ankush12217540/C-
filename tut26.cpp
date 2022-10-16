#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    void setNumber(int n1,int n2){
        a=n1;
        b=n2;
    }

// Below lines means that non member - sumcomplex function is allowed to do anything
// with my private parts(member)

friend complex sumcomplex(complex o1,complex o2);
void printNumber(){
    cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
}
};

complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;

}

int main(){
    complex c1,c2,sum;
    c1.setNumber(1,4);
    c1.printNumber();

    c1.setNumber(5,8);
    c1.printNumber();

    sum=sumcomplex(c1,c2);
    sum.printNumber();
return 0;
}

/* Properties of friend functions
1. Not in scope of class
2. since it is not in the scope of class, it cananot be called from that
 object of that class.  c1.sumcomplex()==Invalid
 3.can be invoked without the help of any object
 4. usually contains the arguements
 5. can be declared inside public or private section of class
 6. It cannot  access the member directly by their names need object-name.member-name
  to access any member.

  */
