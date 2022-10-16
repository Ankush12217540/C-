#include<iostream>
using namespace std;

class simple{

int data1;
int data2;
int data3;
public:
simple(int a,int b=9, int c=8){
    data1 =a;
    data2=b;
    data3=c;
 
}
void printData(void);
};

void simple:: printData(){
    cout<<"The value of data is "<<data1<<" , "<< data2<<" and "<< data3 <<endl;

}

int main(){
    simple s(1,5,7);   // agar dusra  ya tisra number add nahi karte hain to default value aa jaayaga ,agar add karte tho
    // upar wala value overwrite hp jaayega
    s.printData();    
return 0;
}