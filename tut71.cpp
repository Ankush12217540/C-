        // VECTOR        // Refer to cplusplus reference website for vector methods

#include<iostream>
#include<vector>
using namespace std; 

template <class T>
void Display(vector<T> &v) {                      /* 'vector<int>' ek data type ke jaise hain jaise ki integer, float,etc 
     {                                               uske baad ek reference le lenge integer vector  */              
    cout<<"Displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)             // v.size()-->vector ki size return karega.... refer to (cplusplus) website
    {
       cout<<v[i]<< "  " ;                       // using this vector as like array; taking space so that element should have space between them
    //    cout<<v.at(i)<< "  " ;                         // using this vector as like array; taking space so that element shold have space between them
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;         //Zero integer length vector   
    vector<char> vec2(4);      // 4 element character vector
//     vec2.push_back('5');
//    Display(vec2);

//     vector<char> vec3(vec2);      // 4 element character vector from vec2
// Display(vec3);
    vector<int> vec4(4,13);         // 6-element vector of 3s    
    Display(vec4);
    cout<<vec4.size(); 

    // vector<int> v(6,3);       // 6-element vector of 3s     

    int element, size=5;
    // cout<<"Enter the size of your vector: "<<endl;
    // cin>>size;
    // for (int i = 0; i < size; i++)
    // {
    // cout<<"Enter an element to add to this Vector: ";
    // cin>>element;
    // vec1.push_back(element);           // jo bhi  element aap lena chahte hain  //Adds a new element at the end of the vector,
                                                    // after its current last element. The content of val is copied (or moved) to the new element.
    
    // }
    // vec1.pop_back();                // Removes the last element in the vector, effectively reducing the container size by one.
    // Display(vec1);
    // vector<int>::iterator iter = vec1.begin();     //The vector is extended by inserting new elements before the element at the specified position,
                                                      // effectively increasing the container size by the number of elements inserted.
   
    // // vec1.insert(iter+1,5,566);
    // // Display(vec1); 
return 0;
}
