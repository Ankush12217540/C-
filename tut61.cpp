/*C++ : File I/O [ Reading and Writing to a file]
## 3 USEFUL CLASSES:
1.fstreambase                                     |
2.ifstream---->derived from fstreambase           | ===>#include<fstream>
3.ofstream---> derived from fstreambase

## READ OPERATION:
ifstream in("this.txt");
string st;
in>>st;     // just like cin

## WRITE OPERATION
ofstream out("this.txt");
string st="Harry";
out<<st;  // writes to a file this.txt
          |
*/ 

#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream hout("sample60.txt");
    //creating a name string  and filling the variable entered by the user
    cout<<"Enter your number "<<endl;
    string name;
    cin>>name;
    hout<<name +" is my name "<<endl;
    hout.close();
     

    ifstream hin("sample60b.txt ");
    string content;
    hin>>content;
    cout<<"The content of the file is: "<<content;

return 0;
}