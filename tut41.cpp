                                    //  MULTIPLE INHERITANCE

 #include<iostream>
 using namespace std;

 /* Syntax for inheriting in multiple inheritance
  class DerivedC: visibility-mode base1, visibility-mode base2
   {
    class body of class "DerivedC"
  }; 
*/

class Base1{
  protected:
   int base1int ;
   public:
   void set_base1int(int a){
    base1int=a;
   }

};
class Base2{
  protected:
   int base2int ;
   public:
   void set_base2int(int a){
    base2int=a;
   }

};

class Base3{
  protected:
   int base3int ;
   public:
   void set_base3int(int a){
    base3int=a;
   }

};

class Derived: public Base1, public Base2, public Base3{
  public:
  void show(){
    cout<<"The value of Base1 is "<<base1int<<endl;
    cout<<"The value of Base2 "<<base2int<<endl;    
    cout<<"The value of Base3 "<<base3int<<endl;    
    cout<<"The sum of these value is "<< base1int + base2int +base3int <<endl;
  }
};

/* 
The inherited derived class will something like this:
Data members:
   base1int()----->protected
   base2int()----->protected
   base3int()----->protected
Member Functions:
   set_base1int()----->public
   set_base2int()----->public
   set_base3int()----->public
   set_show() ------->public
*/
 int main(){
  Derived ankush;
  ankush.set_base1int(23);
  ankush.set_base2int(24);
  ankush.set_base3int(25);
  ankush.show();
    
 return 0;
 }                                   