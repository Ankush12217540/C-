#include<iostream>
using namespace std;

    // struct employee
    // {
    //     /* data */
    //      int eId;
    //      char favchar;
    //      float salary; 
    // };
    // int main(){
    //     struct employee Ankush;
    //     struct employee Harry;
    //     struct employee Ankit;
    //     Ankush.eId = 1;
    //     Ankush.favchar = 'a';
    //     Ankush.salary = 1200000;
    //     cout<<"The value  of Ankush eId is "<<Ankush.eId<<endl;
    //     cout<<"The value of Ankush favourite character is "<<Ankush.favchar<<endl;
    //     cout<<"The value of "<<Ankush.salary<<endl;
    //     cout<<"The value of Harry eId is "<<Harry.eId<<endl;





// // //   ***** using shortcuts to stuct employee
   
//    typedef struct employee
//      {
//         int eId;
//         char favchar;
//         float salary;
//      }ep;
//       int main(){
//         ep harry;
//         struct employee subhamDas;
//         struct employee Ankush;
//         harry.eId=1;
//         harry.favchar='c';
//         harry.salary=120000;
//         cout<<"The value  of Ankush eId is "<<harry.eId<<endl;
//          cout<<"The value of Ankush favourite character is "<<harry.favchar<<endl;
//          cout<<"The value of "<<harry.salary<<endl;

//      return 0;
//      }


 
// //*** UNION

// union money
// {
//     int rice;  //4
//     char car;   //1
//     float pound;  //4
// };

// int main(){
//     union money m1;
//     m1.rice=34;
//     m1.car='c';
//      cout<<m1.rice<<endl;
//     cout<<m1.car<<endl;

// return 0;
// }

// ****Enum
int main(){
enum meal{breakfast,lunch,dinner};
meal m1=breakfast;
cout<<m1<<endl;
meal m2=lunch;
cout<<m2<<endl;
cout<<breakfast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;
return 0;
}