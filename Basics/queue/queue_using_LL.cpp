#include<iostream>
using namespace std;


class node{
    public:
    int val;
    node* next;

    node(int value){
        val = value;
        next = NULL;
    }
};

class Queue{
    public:
    node* head=NULL;
    node* tail=NULL;


    void push(int val){
        node* newnode = new node(val);
        if(head == NULL){
            head = tail = newnode;
            return;
        }
        tail->next = newnode;
        tail= newnode;

    }

    void pop(){
        if(head== NULL) return;

        if(head->next == NULL){
            delete head;
            head = tail=NULL;
            return;
        }
        node* pre = head;
        head = head->next;
        pre->next= NULL;
        delete pre;
    }
    
    int front(){
        if(head == NULL) return -1;
        return head->val;
    }

    void print(){
        node* temp = head;
        while(temp!=NULL){
            cout << temp->val << " -> ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.pop();
    q.pop();
    
    q.print();
    q.front();
}