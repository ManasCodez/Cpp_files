#include<iostream>
#include<string>
using namespace std;
// class person{
//     public:
//     string name;
//     int age;
//     person(string name, int age){
//         this->name = name;
//         this->age=age;
//     }
//     // person(){
//     //     cout << "parent constructor"<< endl;
//     // }
//     ~person(){
//         cout << "parent destructor\n";
//     }
// };

    //single inheritance
// class student : private person{ //inheritant in private mode do name and age are private in student class
// public:
//     int rollno; 
//     void getinfo(){
//         cout << "student name: " << name<<endl;
//         cout << "student age: " << age <<endl;
//         cout << "student rollno: " << rollno<<endl;
//     }
//     student(string name,int age,int rollno):person( name, age){
//         this->rollno=rollno;
//     }
//     ~student(){
//         cout << "child destructor"<<endl;
//     }
    
// };






class person{
    public:
    string name;
    int age;
   
};

class student : public person{ 
public:
    int rollno;  
    
};
class gradstudent: public student{ // multi level inheritance
public:
    string researchArea;
    void getinfo(){
        cout << name<<endl;
        cout << age<<endl;
        cout << rollno<<endl;
        cout << researchArea<<endl;
    }
};

int main(){
    gradstudent g1;
    g1.name = "Manas";
    g1.age = 18;
    g1.rollno=3232;
    g1.researchArea="C++";
    g1.getinfo();
    return 0;
}