#include<iostream>
#include<fstream>
using namespace std;



int main(){
    ofstream out;
    out.open("sample60.txt ");
    out<<"This is me\n";
    out<<"This is also me "<<endl;
    out<<"This is alsi me ";
    out.close();
 
    ifstream in;
    string st, st2;
    in.open("sample60.txt");
    // in>>st>>st2;
    // cout<<st<<endl;

    while(in.eof()==0){      // eof-->end of file
    getline(in , st);
    cout<<st<<endl;

        }

in.close();
 
return 0;
}
