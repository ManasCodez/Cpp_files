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

    public:

    node* head;
    node* tail;

    list(){
        head = tail = NULL;
    }

    void push_front(int i){ //O(1)
        node* newnode = new node(i); //using new to make a dyanamic  object which will
        if(head == NULL){            //retained even after the function ends.
            head = tail = newnode;
            return;
        }else{
            newnode->next = head;  //can be writed as (*newnode).next = head;
            head = newnode;          //         deferencing and then giving the value
        }
    }

    void push_back(int i){//O(1)
        node* newnode = new node(i);
        if(head == NULL){
            head = tail = newnode;
            return;
        }else{
            tail->next = newnode;
            tail = newnode;
        }
    }

    void pop_front(){//O(1)
        if(head == NULL) return;
        node* temp=head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void pop_back(){//O(n)
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

    void insert(int val , int pos){ //O(n)
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


    int search(int key){ //O(n)
        node* temp = head;
        int i=0;
        while(temp!=NULL){
            if(temp->data == key){
                return i;
            }
            i++;
            temp = temp->next;
        }
        return -1;
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








//cannot find the node where cycle starts
// int main(){ //Slow-Fast Approach
//     list ll;
//     ll.push_front(1);
//     ll.push_front(4);
//     ll.push_front(3);
    
//     node* slow = ll.head;
//     node* fast = ll.head;
//     ll.tail->next = ll.head;  //creates a cycle


//     while(fast!=NULL && fast->next!=NULL){
//         slow = slow->next;
//         fast = fast->next->next;

//         if(slow == fast){
//             cout << "List contains a cycle";
//             return 0;
//         }
//     }
//     cout << "List does not contain any cycle";
//     return 0;
// }






//can find in which node the cycle starts
int main(){ //Slow-Fast approach
    list ll;
    ll.push_front(1);
    ll.push_front(4);
    ll.push_front(3);
    
    node* slow = ll.head;
    node* fast = ll.head;
    ll.tail->next = ll.head;  //creates cycle

    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast){
            slow = ll.head;
            node* prev = NULL;
            while(slow != fast){
                slow = slow->next;
                prev = fast;  //previous node of the fast
                fast = fast->next;
            }
            cout << "The cycle starts at: " << slow->data <<endl;
            prev->next = NULL;   //removes the cycle
            return 0;
        }
    }
    cout << "No cycle exists";
}