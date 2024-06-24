#include<iostream>
using namespace std;
 inline int product(int a,int b){
    // Not recomended to use below line with inline function
    //static int c=0;   //This execute only once
    //c=c+1;  //Next time when this function run, the value of c will be retaned 
    return a*b;
}
float moneyReceived(int currentMoney, float factor=1.04){     // Default Arguement should be always written rightmost side
    return currentMoney*factor;
} 


// CONSTANT ARGUMENT
int strlen(const char *p){

}
int main(){
    int a;int b;
    // cout<<"Enter the value of a "<<endl;
    // cin>>a;
    // cout<<"Enter the value of b ";
    // cin>>b; 
      int money=100000;                               // There will no difference in output after using inline function
    // cout<<"The product of two number a and b is "<<product(a,b)<<endl; //for inline function execution will be faster;
    cout<<"If you have money "<< money<<"Rs in your bank account,you will receive "<<moneyReceived(money)<<"Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<< money<<"RS in your account,you will receive "<<moneyReceived(money,1.10);
return 0;
}
