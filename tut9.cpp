#include<iostream>
using namespace std;

int main(){
    // //This is tuitorial 9
    int age;
    cout<<"Tell me your age "<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"you cannot come to my party"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid and you will get a kid pass to party"<<endl;
    }
    else if(age<1){
        cout<<"you are not yet born"<<endl;
    }
    else{
        cout<<"you can come to party"<<endl;
    }

// selection control structure: Switch Case Statements
// switch(age)
// {
//     case 18:
//     cout<<"you are 18"<<endl;
//     break;

//     case 2:
//     cout<<"you are 18"<<endl;
//     break;

//     case 22:
//     cout<<"you are 22"<<endl;
//     break;

//     default:
//     cout<<"no special cases"<<endl;
//       break;
// }
     
    return 0;
}
