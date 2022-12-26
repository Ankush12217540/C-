#include<iostream>
using namespace std;
class Base{
    protected:
    int a;
    private:
    int b;
};
/* for a proteted member:
                     Public derivation       private derivatio   protected derivation
 1.private member     Not inherited            Not Inherited      Not inherited
 2.protected member   Protected                  Private           Private
 3.public member       Public                   Private            Protected
 */

class Derived: public Base {

};

int main(){
    Base b;
    Derived d;
    cout<<b.a;    // will not work since a is protected in both base as well as derived class
    return 0;
    
return 0;
}
