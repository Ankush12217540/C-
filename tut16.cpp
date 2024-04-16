#include<iostream>
using namespace std;


int sum(int a, int b){
  int c=a+b;
  return c;
}
// CALL BY USING C++ REFERENCE VALUE;
// void swapReferenceVar(int &a,int &b){
//   int temp=a;
//   a=b;
//   b=temp;
// } 

// CALL BY USING REFERENCE POINTER
 void swapPointer(int* a,int* b){
  int temp=*a;
  *a=*b;
  *b=temp;
 }
main(){
  int a=4;int b=5;
  cout<<"sum of 4 and 5 is "<<sum(4,5)<<endl;
  cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
//  swapReferenceVar(a,b);
swapPointer(&a, &b);
   cout<<"The value of a is "<<a<<" And the value of b is "<<b <<endl;
  return 0;
}
