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







//multi level inheritance
// class person{
//     public:
//     string name;
//     int age;
   
// };

// class student : public person{ 
// public:
//     int rollno;  
    
// };
// class gradstudent: public student{ // multi level inheritance
// public:
//     string researchArea;
//     void getinfo(){
//         cout << name<<endl;
//         cout << age<<endl;
//         cout << rollno<<endl;
//         cout << researchArea<<endl;
//     }
// };







//multi inheritance
// class student{
// public:
   
//     string name;
//     int rollno;
// };

// class teacher{
// public:
    
//     string subject;
//     int salary;
// };
// class teachingAssistant:public student,public teacher{
// public:
    
//     void getinfo(){
//         cout << name<<endl;
//         cout << rollno<<endl;
//         cout << subject<<endl;
//         cout << salary<<endl;
//     }
// };




//hierarchial inheritance
class person{
public:
    string name;
    int age;
};
class student : public person{
    int rollno;
};
class teacher: public person{
    string subject;
};

int main(){
    student s1;
    teacher t1;
    s1.name = "Manas";
    t1.name = "Sharma";
    cout <<s1.name<<endl;
    cout << t1.name<<endl; 
    return 0;
}