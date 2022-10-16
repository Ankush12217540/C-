#include<iostream>
#include<fstream>
using namespace std;
/*
The useful classes for working with files in c++ are:
1.fstreambase
2.ifstream-->derived from fstreambase
3.ofstream-->derived from fstreambase
*/
/*In order to work with files in c++, you will have to open it.Primarily, There are 2 ways to open a file:
1.Using the constructor -->tut62.cpp
2.using the member function "open()" of class  tut62.cpp
*/ 
int main(){
    string st = "Harry Bhai";
    string st2;
    // Opening files using constructor and writing it
    ofstream out("sample60.txt");   // write operation
    out<<st;

    // Opening files using constructor and reading from it;
    ifstream in("sample60b.txt");   // read operation;
    in>>st2;
    cout<<st2<<endl;
    // cout<<st2<<endl;
    getline(in, st2);
    // getline(in, st2);
    // getline(in, st2);
    // cout<<st2;
   
    
return 0;
}