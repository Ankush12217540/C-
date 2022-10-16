#include<iostream>
using namespace std;

// //  RECURSION USED IN FINDING FACTORIAL OF A NUMBER
// int factorial(int n){
//     if (n<=1){
//         return 1;
//     }
//     return n * factorial(n-1);
// }

// // step by step calculation of factorial:
// // factorial(4)= 4* factorial(3);
// // factorial(4)= 4*3* factorial(2);
// // factorial(4)= 4*3*2* factorial(1);
// // factorial(4)= 4*3*2*1;
// // factorial(4)= 24;
// int main(){
//     // factorial of a number;
//     // 6! = 6*5*4*3*2*1
//     //0!=1 by definition
//     // 1! = 1 by definition
//     // n! = n*(n-1)!
//     int a;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
//     cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
//     return 0;
// }


// RECURSION USED IN FINDING FIBONACCI SEQUENCE POSITION
int fib(int n){
    if(n<2){
        return n;
    }
    return fib(n-2) + fib(n-1);
    }

    int main(){
        int a;
        cout<<"Enter the number"<<endl;
        cin>>a;
        cout<<"The term in fibonacci Sequence at position "<<a <<" is "<<fib(a)<<endl;
        return 0;
    }