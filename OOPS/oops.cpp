#include<iostream>
#include<string>

using namespace std;


class  teacher{
    private: // by default all the attributes and methods are private in c++;
    
    //properties or attributes
        int salary; 

    public: 
        string name;
        string dept;
        string subject;
    
    
   
        void change_dept(string new_dept){
            dept = new_dept;
        }

        //setter funtion : sets the value in private attributes
        void setsalary(int new_sal){
            salary = new_sal;
            
        }

        //getter function : gives the value of private attributes
        int  showsal(){
            return salary;
        }
        
    
};

int main(){
    
    teacher t1;
    t1.name = "manas";
    t1.setsalary(10000);
    cout << t1.name << endl;
    cout << t1.showsal();
    return 0;
}