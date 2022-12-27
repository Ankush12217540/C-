#include<iostream>
#include<cmath>

using namespace std;
/* create 2 classes:
  1.SimpleCalcualtor--->Takes input of two number using utility function 
    and perfor +,-,*,/  and display result using another function
  2.ScientificCalculator--->Takes input of 2 number using a utility
   function and perform any four scientific operation of your choice

   Create another HybridCalculator and inherit it using these two classes:
   Q1. What types of inheritance are you using?  ------------------------------> multiple Inheritance
   Q2. Which modes of inheritance are you using?-------------> public SImpleCalculator, public ScientificCalculator;
   Q3. Create an object of HybridCalculator and display results using simple and scientific calculator.
   Q4.  How is code resuability implemented?

*/

class SimpleCalculator {
    int a,b;
    public:
    void getdataSimple(){
        cout<<"Enter the value of a "<<endl;
        cin>>a;
        cout<<"Enter the value of b "<<endl;
        cin>>b;
    }   
    void performOperationSimple(){
        cout<<"The value of a+b is: "<<a+b<<endl;
        cout<<"The value of a-b is: "<<a-b<<endl;
        cout<<"The value of a*b is: "<<a*b<<endl;
        cout<<"The value of a/b is: "<<a/b<<endl;
    } 
};

class ScientificCalculator{
    int a,b;
    public:
    void getdataScientific(){
        cout<<"Enter the value of a "<<endl;
        cin>>a;
        cout<<"Enter the value of b "<<endl;
        cin>>b;
    }   
    void performOperationScientific(){
        cout<<"The value of cos(a) is: "<<cos(a)<<endl;
        cout<<"The value of sin(a) is: "<<sin(a)<<endl;
        cout<<"The value of  is exp(a): "<<exp(a)<<endl;
        cout<<"The value of tan(a) is: "<< tan(a)<<endl;
    } 

  
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{

};
int main(){
   //  SimpleCalculator calc;
//    ScientificCalculator calc;
//     calc.getdata();
//     calc.performOperation();
HybridCalculator calc;
calc.getdataScientific();
calc.performOperationScientific();
calc.getdataSimple();
calc.performOperationSimple();
return 0;
}
