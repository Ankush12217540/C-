#include<iostream>
using namespace std;

int main(){
// for (int i = 0; i < 40; i++)
// {
//     /* code */
//     cout<<i<<endl;
//     if (i==2){
//         break;              // **  loop se exit karwa dega,break karne se pahle code likha tha
//     }

    

// //      /**** 2 will not be printed
// for(int i=0;i<40;i++){
//     if(i==2){
//         break;
//     } cout<<i<<endl;
// 

//    *** yaha bhi 2 print nahi hoga
for (int i = 0; i < 40; i++)
{
    
    if(i==2){
        continue;
    }cout<<i<<endl;
}
return 0; 
}
