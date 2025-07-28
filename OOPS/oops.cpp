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
        //non parameterized constructor
        teacher(){ //no return type in the funtion
            name = "NULL";
            dept = "CS";
            subject = "Computer";
        }
        
        //parameterized contructor
        teacher(string name, string d, string s, int sal){
            this->name = name;
            dept = d;
            subject = s;
            salary = sal;
        }
         teacher(teacher& obj){//custom copy constructor
            
            this->name = obj.name;
            this->dept= obj.dept;
            this->subject= obj.subject;
        } 
        

        
    
        //member function
        void change_dept(string new_dept){
            dept = new_dept;
        }

        //setter funtion : sets the value in private attributes
        void setsalary(int new_sal){
            int pass;
            cout << "Enter Password: ";
            cin >> pass;
            if(pass == 12345){
                salary = new_sal;
                cout << "salary updated !!" << endl;
                cout << "New salary: " << new_sal << endl;
            }
            else cout << "Invalid password!!";
            
            
        }

        //getter function : gives the value of private attributes
        void  showsal(){
            int pass;
            cout << "Enter Password: ";
            cin >> pass;
            if(pass == 12345){
                cout << salary;
            }else{
                cout << "Invalid password!!";
            }
            return ;
        }
        
    
};



// class student{ // shallow copy
//     public:
//     string name;
//     double* cgpaptr; 
//     student(string name, double cgpa){
//         this->name=name;
//         cgpaptr = new double;
//         *cgpaptr = cgpa;
//     }
//     student(student &obj){
//         this->name=obj.name;
        
//         this->cgpaptr = obj.cgpaptr;
//     }
//     void getinfo(){
//         cout << "Student name: " << name<<endl;
//         cout << "CGPA: " << *cgpaptr << endl;
//     }
// };


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

    ~deepstudent(){
        cout << "Hi I am destrutor!";
    }
    void getinfo(){
        cout << "Student name: " << name<<endl;
        cout << "CGPA: " << *cgpaptr << endl;
    }
};




// int main(){
    
//     teacher a1("manas", "CS","computer",100000); // constructor call
//     // teacher a2(a1); //default copy constructor
//     teacher t2(a1);//custom copy constructor
    
 
//     student s1("Manas",8.8);
//     student s2(s1); // copy constructor (shaloow copy)
//     s1.getinfo();
//     *(s2.cgpaptr) = 9;
//     s1.getinfo();
//     s2.getinfo();
//     return 0;
// }



int main(){ // for deep student class
    deepstudent s1("Manas",8.8);
    deepstudent s2(s1);
    s1.getinfo();
    *(s2.cgpaptr)= 9;
    s1.getinfo();
    s2.getinfo();
}