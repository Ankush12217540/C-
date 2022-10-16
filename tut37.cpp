#include<iostream>
using namespace std;

// Base Class 
class Employee{
    public:
    int id;
    float salary;
    Employee(int inpId){
        id= inpId;
        salary=34.0;
    }
    Employee(){}

};

// 
// Derived class syntax
/*
class{{derived-classn-name}} :{{ visibility-mode}}  {{base class name}}
{
    class members/ methods/ etc...
}

NOTE:
1. Default visibility mode is private
2.Privte Visibilty mode: Public memember of base class becomes 
  the private memeber of derived class
3.Public Visibiliyi mode: public memember of base class become
 the public member of derived class
 4.Private member are never inherited;
*/


// creating a programmer class derived from Employee base class
class Programmer : public Employee{
    public:
    Programmer(int inpId){
        id = inpId;
    }
    int languageCode =9;
    void getData(){
        cout<<id<<endl;
    }
};


int main(){
    
    Employee Ankush(1),Harry(2);
    cout<<Ankush.salary<<endl;
    cout<<Harry.salary<<endl;

    Programmer skillF(10);
    cout<<skillF.languageCode;
    skillF.getData();
    return 0;
}