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
            cout << "i am custom copy constructor\n";
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




int main(){
    
    teacher a1("manas", "CS","computer",100000); // constructor call
    // teacher a2(a1); //default copy constructor
    teacher t2(a1);//custom copy constructor
    cout << t2.name;
    return 0;
}