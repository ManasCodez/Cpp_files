#include<iostream>
using namespace std;


class node{
public:

    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

class list{

    node* head;
    node* tail;
    
public:
    list(){
        head = tail = NULL;
    }

    void push_front(int i){
        node* newnode = new node(i); //using new to make a dyanamic  object which will
        if(head == NULL){            //retained even after the function ends.
            head = tail = newnode;
            return;
        }else{
            newnode->next = head;  //can be writed as (*newnode).next = head;
            head = newnode;          //         deferencing and then giving the value
        }
    }

    void push_back(int i){
        node* newnode = new node(i);
        if(head == NULL){
            head = tail = newnode;
            return;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }
    
    void printll(){
        node* i = head;
        while(i != NULL){
            cout << i->data << " -> ";
            i = i->next;
        }
        cout << "NULL" << endl;
    }
 
};


int main(){
    list ll;
    
    ll.push_back(1);
    ll.push_back(2);
    ll.push_back(3);
    ll.printll();
    return 0;
}