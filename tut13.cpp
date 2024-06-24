#include<iostream>
using namespace std;
int main(){
    //  **** array examples:
    
    int marks[4]={23,45,56,89};
    int mathmarks[4];
     mathmarks[0]=478;
     mathmarks[1]=578;
     mathmarks[2]=778;
     mathmarks[3]=789;
     cout<<"These are mathmarks"<<endl;
    cout<<mathmarks[0]<<endl;
    cout<<mathmarks[1]<<endl;
    cout<<mathmarks[2]<<endl;
    cout<<mathmarks[3]<<endl;

 
     cout<<"These are marks"<<endl;
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    marks[2]=99;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;

    ///*** how to print array content using loop
    cout<<"These are marks"<<endl;
    for(int i=0;i<=3;i++){
        cout<<"The value of marks "<<i <<" is "<< marks[i]<<endl;
    }

    // pointers and array
    int* p=marks; 
    cout<<*(p++)<<endl;
    cout<<*p<<endl;
    cout<<*(++p)<<endl;
    // cout<<"The value of *p i.e mark[0] is "<<*p<<endl;
    // cout<<"The value of *(p+1) i.e mark[1] is "<<*(p+1)<<endl;
    // cout<<"The value of *(p+2) i.e mark[2] is "<<*(p+2)<<endl;
    // cout<<"The value of *(p+3) i.e mark[3] is "<<*(p+3)<<endl;


return 0;
}
