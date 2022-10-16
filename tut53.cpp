#include<iostream>
using namespace std;
class A{
    int a;
    public:
    A & setData(int a){
        // void setData(int a){
        this->a=a;
       // return*this;
    }
    void GetData(){
        cout<<"The value of a is "<<a<<endl;
    }
};
int main(){
    // this is a keyword which is a ponter which points to the objects which which invokes the member function
    A a;
    a.setData(4).GetData();
    // a.GetData();  //--> isko explictly lagane ki jaroorat nahi hain,upar wale se ho jaayega.. using this function
return 0;
}