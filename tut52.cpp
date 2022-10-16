           // ARRAY OF OBJECTS USING POINTERS
#include<iostream>
using namespace std;

class ShopItem{
    int id;
    float price;
    public:
    void setData(int a, float b){
        id =a;
        price =b;
    }
    void getData(void){
    cout<<"code of this item is "<<id<< endl;
    cout<<"Price of this item is "<<price<<endl;
    }
};
//     1  2  3
//           ^
//           |
//           |
//           ptr
int main(){
    int size = 3;  
    //int *ptr = &size;
    // int *ptr= new int [34];
    // ShopItem *ptr=new ShopItem [size];
    // general store 
    // veggies 
    // hardware
    ShopItem *ptr=new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p,i;
    float q;
    for (int i = 0; i < size; i++){
        cout<<"Enter Id and price of item "<<i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p,q);   // <--- This is identical to next line
        ptr->setData(p,q);  
        ptr++;    
    }  
    for (int i = 0; i < size; i++)
    {
        cout<<"Item number: "<< i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    return 0;
}   