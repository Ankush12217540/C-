/*There are two type of header files:
1.System header files: It comes with compiler*/
#include<iostream>
// #include"this.d"--->this will produce an error
//  if this.d is not present in the current directory
using namespace std;

int main(){
    int a=4, b=5;  
   cout<<"operators in c++:"<<endl;
   cout<<"following are operators in c++:"<<endl;
   //Arithmetics operators
   cout<<"followings are Arthemetics operators"<<endl;
   cout<<"The value of a+b is "<<a+b<<endl;
   cout<<"The value of a-b is "<<a-b<<endl;
   cout<<"The value of a*b is "<<a*b<<endl;
   cout<<"The value of a/b is "<<a/b<<endl;
   cout<<"The value of a%b is "<<a%b<<endl;
   cout<<"The value of a++ is "<<a++<<endl;
   cout<<"The value of a-- is "<<a--<<endl;
   cout<<"The value of ++a is "<<++a<<endl;
   cout<<"The value of --a is "<<--a<<endl;
   cout<<endl;
//    assignment operators---> used to assign values to variables
// int a=3, b=5;
// char d='d';


     //Comparison operators
     cout<<"The following are comparision operators"<<endl;
     cout<<"The value of a==b is "<<(a==b)<<endl;
     cout<<"The value of a!=b is "<<(a!=b)<<endl;
     cout<<"The value of >= is "<<(a>=b)<<endl;
     cout<<"The value of a<=b is "<<(a<=b)<<endl;
     cout<<"The value of a>b is "<<(a>b)<<endl;
     cout<<"The value of a<b is "<<(a<b)<<endl;

     // The following are logical operators
    cout<<"The following are logical operators in c++ operators"<<endl;
     cout<<"The value of  logical and operator ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
     cout<<"The value of  logical or operator ((a==b) || (a<b)) is "<<((a==b) || (a<b))<<endl;
     cout<<"The value of  logical not operator (!(a==b) || (a<b)) is "<<(!(a==b))<<endl;
    

    return 0;
}