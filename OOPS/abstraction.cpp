#include<iostream>
#include<string>
using namespace std;

// class parent{
// public:
//     string name;
    
// };

// class  child : protected parent{ // name is inherited but can't be accessed
// public:
//     int clas;
// };

// int main(){
//     child c1;
//     c1.clas = 12;
//     cout << c1.clas;
// }



// class shape{   //abstract class, we can't create a object of this class.
// public:
//     virtual void draw()=0;//pure virtual function
// };

// class circle:public shape{
// public:
//     void draw(){
//         cout << "Draw circle";
//     }
// };

// int main(){
//     circle s;
//     s.draw();

//     return 0;
// }





// void func(){
//     static int x=0; // runs only single time and stores the value
//     cout << x<<endl;
//     x++;
// }
// int main(){
//     func();
//     func();
//     func();
    
//     return 0;
// }





class ABC{
public:
    ABC(){
        cout << "I am constructor"<<endl;
    }
    ~ABC(){
        cout << "I am destructor"<<endl;
    }
};


int main(){

    if(true){
        static ABC obj;
    }
    
    cout << "Funtions ends" << endl;
    return 0;
}