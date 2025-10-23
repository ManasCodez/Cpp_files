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

    void pop_front(){
        if(head == NULL) return;
        node* temp=head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){
        if(head == NULL) return;
        if(head == tail){
            delete head;
            head = tail = NULL;
        }
        node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        
        temp->next = NULL;
        delete tail;
        tail = temp;
    
    }

    void insert(int val , int pos){
        node* newnode = new node(val);
        if(pos == 0){
            newnode->next = head;
            head = newnode;
            return;
        }
        node* temp = head;
        int i = 0;

        while(temp!=NULL && i<pos-1){
            temp = temp->next;
            i++;
        }
        if (temp == NULL) {
            cout << "Invalid position!" << endl;
            delete newnode; // avoid memory leak
            return;
        }   

        newnode->next = temp->next;
        temp->next = newnode;
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
    ll.push_back(4);
    
    ll.printll();
    
    ll.pop_front();
    ll.printll();
    ll.pop_back();
    ll.printll();
    ll.insert(3,1);
    ll.printll();
    return 0;
}