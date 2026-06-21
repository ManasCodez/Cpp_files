#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* next;

    node(int data){
        val = data;
        next = NULL;
    }
};

class LinkedList{  
    node* head = NULL;
    public:
    void push(int val){   //logic according to the stack
        node* newnode = new node(val);
        if(head ==NULL){
            head = newnode;
        }else{
            newnode->next = head;
            head=newnode;
        }

    }

    void pop(){ //we will pop from the head
        if(head ==NULL){
            return;
        }
        node* temp = head;
        head=head->next;
        temp->next =   NULL;
        delete temp;
    }

    int top(){
        return head->val;
    }

    bool empty(){
        return head == NULL;
    }
};

int main(){
    LinkedList ll;
    ll.push(10);
    ll.push(20);
    ll.push(30);
    ll.pop();

    cout << ll.top();
}