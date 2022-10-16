#include<iostream>

using namespace std;
int main(){
    /* loops in c++:
    1. for loop
    2.while loop
    3.do-while loop */
   
    /* for loop in c++ */
    // int i=1;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;
    // cout<<i<<endl;
    // i++;

//  *** printing number 1 to 100 using for loop i.e shortcut to print
// ***for loop syntax
// for(initialization; condition; updation)
// //{
//     loop body(c++ code);
// }

//*****infinite loop syntax
for(int i=1;i<=40;i++){
cout<<i<<endl;
}
 //syntax of infinite for loop
// for(int i=1; 39<=300;i++)
// {
//     cout<<i<<endl;
// }


/* while loop in c++ */
//syntax:
//while(condition)
//{
    // c++ statement
// }
    // printing 1 to 40 using while loop
    // int i=10;
    // while(i<=40){
    //     cout<<i<<endl;
    //     i++;
    // }


    // // example of infinite while loop
    // int i=1;
    // while(true)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }


/* Do while loop in c++  */
//syntax:
//  do{
//  c++ statements;
//  }while(condition);
//  printing 1 to 40 using while loop
// int i=1;
// do{
//     cout<<i<<endl;
//     i++;
// }while(6*1);

// writing multiplication table usind do while loop
// int a,i=1;
//     cout<<"input a number:"<<endl;
//     cin>>a;
//     do{
//         cout<<i<<"X"<<a<<"="<<i*a<<endl;
//         i++;
//         }while(i<=10);
    return 0;
}