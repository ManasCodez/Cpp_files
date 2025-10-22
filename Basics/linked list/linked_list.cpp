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
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    ll.printll();
    return 0;
}