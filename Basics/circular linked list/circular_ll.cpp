#include<iostream>
using namespace std;

class node{
public:
    int data;
    node* next;

    node(int val){
        data = val;
        next=NULL;
    }
};

class CLL{

    node* head;
    node * tail;
public:

    CLL(){
        head = tail = NULL;
    }

    void print(){
        node* temp = head;
        if(temp == NULL){
            cout << "List is empty";
            return;
        }
        do{
            cout<< temp->data << ' ';
            temp=temp->next;
        }while(temp!=head);
    }
    void push_front(int val){
        node * newnode = new node(val);
        if(head==NULL){
            head = tail = newnode;
            head->next = tail;
            tail->next= head;
            return;
        }
        
       
        tail->next = newnode;
        newnode->next=head;
        head=newnode;
    }

    void push_back(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
            head->next = tail;
            tail->next = head;
            return;
        }

        tail->next = newnode;
        newnode->next = head;
        tail = newnode;
    }

    void pop_front(){
        if(head == NULL){
            cout << "List is Already empty!!";
            return;
        }
        if(head == tail){
            delete head; 
            head = tail = NULL;
            return;
        }
        node* temp = head;

        tail->next = temp->next;
        head = temp->next;
        delete temp;
    }

    void pop_back(){
        if(head == NULL){
            cout << "list already empty!";
            return;
        }
        if(head == tail){
            delete head;
            head = tail = NULL;
            return;
        }

        node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        node* del = tail;
        tail = temp;
        tail->next= head;

        delete del;
        
    }
};


int main(){
    CLL cll;

    // cll.push_front(1);
    cll.push_front(2);
    cll.push_front(3);

    cll.push_back(4);

    cll.pop_front();
    cll.pop_back();
    cll.print();
}