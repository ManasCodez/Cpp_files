#include<iostream>
using namespace std;

class node{
public: 
    int data;
    node* next;
    node(int val){
        data = val;
        next =NULL;
    }

};

class list{
    node* head;
    node* tail;

public:
    list(){
        head = tail = NULL;
    }

    void push_front(){
            node* newnode = new node(val);
            if(head == NULL){
                head = tail =newnode;
                return;
            }else{
                (*newnode).next = head;
                head = newnode;
            }
    }
    
};

int main(){
    list ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);
    return 0;
}