#include<iostream>;
using namespace std;

int sum(int a,int b){
    cout<<"using function with 2 arguments"<<endl;
    return (a+b);
}


 int sum(int a, int b, int c){
    cout<<"using function with 3 argument"<<endl;
 return a+b+c;
 }

 // finding volume of cuboid:
 int volume(double r,int h){
    return( 3.14*r*r*h);
 }

// volume of cube
int volume(int a){
    return a*a*a;
}

// volume of rectangular box
int volume(int l,int b,int h){
    return l*b*h;
}

int main(){
cout<<"The sum of 4 and 5 is "<<sum(4,5)<<endl;
cout<<"The sum of 5,6 and 7 is "<<sum(5,6,7)<<endl;
cout<<"The volume of cuboid with radius 10cm and height 15cm is "<<volume(10,15)<<" cubic centimeter"<<endl;

cout<<"The volume of cube of side length 5 cm is "<<volume(5) <<"centimeter cube"<<endl;
cout<<"The volume of rectangular box with l=5, b=6, c=6 is  "<<volume(5,6,7)<<endl;
return 0;
}
