#include<iostream>
#include<cstring>
using namespace std;

class CWH{
    protected:
    string title;
    float rating;
    public:
     CWH(string s, float r){
        title =s;
        rating = r;
     }
    virtual void display(){
        cout<<" bogus code "<<endl;   // after removing 'virtual' from display, and printing 'bogus code'  ,we will get two bogus code as output
     }
};

class CWHVideo: public CWH
{
    int videolength;
    public:
    CWHVideo(string s, float r, int vl): CWH(s,r){
        videolength = vl;
    }
    void display(){
        cout<<"Thsi is an amazing video with title "<<title<<endl;
        cout<<"Rating: "<<rating<<"Out of 5 Stars "<<endl;
        cout<<"Length of this video is: "<<videolength<<" minutes"<<endl;
    } 
};

class CWHText: public CWH
{
    int words;
    public:
    CWHText(string s, float r, int wc): CWH(s,r){
        words=wc;
    }
    void display(){
        cout<<"This is an amazing text tuitorial  with title "<<title<<endl;
        cout<<"Rating of this text tutorial: "<<rating<<"Out of 5 Stars "<<endl;
        cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
    }
};

int main(){
    string title;
    float rating, videolength;
    int words;

    // For Code With Harry Video: 
    title= "Django tutorial Text ";
    videolength =4.46;
    rating = 4.76;
    CWHVideo djVideo(title, rating, videolength);
    // djVideo.display();


     // for Code With Harry  Text:
    title= "Django tutorial Text";
    words= 433;
    rating= 4.89; 
    CWHText djText(title , rating, videolength);
    // djText.display();

    // 
    CWH *tuts[2];
    tuts[0] = &djVideo;
    tuts[1]=&djText;

    tuts[0]->display();
    tuts[1]->display();
return 0;
} 
/* Rules for Virtual functons
1.They cannot be static
2,They are acccesed by object pointer
3.Virtaul machine can be a friend ofanother class
4.A vurtual in base class might not be used.
5. If a virtual functions is defined in a base class, there is no necessity of redefiningit in the derived class 
*/
