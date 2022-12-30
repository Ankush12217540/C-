#include<iostream>
using namespace std;
int sum(int a,int b){
int c = a+b;
return c;
}
// call by reference using pointer
// void swapPointer(int* a,int* b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }


void swapReferenceVar(int &a,int &b){
    int temp =a;
    a=b;
    b=temp;
}
int main(){
    int a=4,b=5;
    // cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
    cout<<"The value of a is "<< a<<" And the value of b is "<<b<<endl;
     //swapPointer(&a,&b);  // This will swap a and b using pointer reference
     swapReferenceVar(a,b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    return 0;
}
