#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
    Point(int a, int b){
        x=a;
        y=b;
    }
    void displayPoint(){
        cout<<"The Point is ("<<x<<", "<<y<<")"<<endl;
    }
};
// Create a function(mk) which takes 2 point objects  and compute the distance
// between those points

int main(){
    Point p(1,1);
    p.displayPoint();

    Point q(1,1);
    p.displayPoint();
    return 0;
}