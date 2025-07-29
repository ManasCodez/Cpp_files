#include<iostream>
#include<string>
using namespace std;
class person{
    public:
    string name;
    int age;
    // person(string name, int age){
    //     this->name = name;
    //     this->age=age;
    // }
    person(){
        cout << "parent constructor"<< endl;
    }
};

class student : public person{
public:
    int rollno; 
    void getinfo(){
        cout << "student name: " << name<<endl;
        cout << "student age: " << age <<endl;
        cout << "student rollno: " << rollno<<endl;
    }
    student(){
        cout << "child constructor"<<endl;
    }
    
};

int main(){
    student s1;
    s1.name = "Manas";
    s1.age = 18;
    s1.rollno = 232370001;
    s1.getinfo();
    return 0;
}