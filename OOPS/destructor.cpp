#include<iostream>
#include<string>

using namespace std;

class deepstudent{ // deep copy
    public:
    string name;
    double* cgpaptr; 
    deepstudent(string name, double cgpa){
        this->name=name;
        cgpaptr = new double; //adding new double to allocate new memory
        *cgpaptr = cgpa;//changes value of the new memory address to the required one. 
    }


    deepstudent(deepstudent &obj){
        this->name=obj.name;
        cgpaptr = new double;
        *cgpaptr = *(obj.cgpaptr);
    }

    ~deepstudent(){ //custom destructor , only deletes the static memory
        cout << "Hi I am destrutor!";
        delete cgpaptr; // to delete the dynamically allocated memory.
    }
    void getinfo(){
        cout << "Student name: " << name<<endl;
        cout << "CGPA: " << *cgpaptr << endl;
    }
};


int main(){ // for deep student class
    deepstudent s1("Manas",8.8);
    deepstudent s2(s1);
    s1.getinfo();
    *(s2.cgpaptr)= 9;
    s1.getinfo();
    s2.getinfo();
}