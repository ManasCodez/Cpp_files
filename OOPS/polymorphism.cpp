#include<iostream>
#include<string>
using namespace std;
// class student{
// public:
//     string name;
//     int rollno;

//     student(){
//         cout << "Hi i am non-parameterized constructor"<<endl;
//     }
//     student(string name,int rollno){
//         cout << "Hi, i am parameterised constructor"<<endl;
//         this->name=name;
//         this->rollno = rollno;
//     }
//     student(student& obj){
//         cout << "Hi i am a copy constructor"<<endl;
//         this->name=obj.name;
//         this->rollno = obj.rollno;
//     }
// };

// int main(){
//     student s1;//automatically choosing constructor on the basis of parameters passed.
//     student s2("manas",2323);//also called constructor overloading
//     student s3(s2);
// }


class print{
public:
    void show(int x){ //function overloading    
        cout << x; 
    }
    void show(string ch){
        cout << ch;
    }
};

int main(){
    print p1;
    p1.show("Manas");
}