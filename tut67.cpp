     // Function Template  // Function Template with parameters
#include<iostream>
using namespace std;
// int funcAverage(int a, int b){
//     float avg =(a+b)/2;
//     return avg;
// }
// int funcAverage2(int a, float b){
//     float avg =(a+b)/2;
//     return avg;
// }

template <class T1, class T2>    //temmplate aane se kis tarah ka data type enter wo farak nahi partha hain
float funcAverage(T1 a, T2 b){
    float avg= (a+b)/2.0;
    return avg;
}

template<class T>
void swapp(T &a, T &b){
T temp=a;
a=b;
b=temp;
}
int main(){
    float a;
    a=funcAverage(5,2);
    printf("The average of these number is %.3f\n", a);
    int x=5, y=7;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}