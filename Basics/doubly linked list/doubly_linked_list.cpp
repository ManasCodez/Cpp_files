#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *pre;

    node(int val)
    {
        data = val;
        next = NULL;
        pre = NULL;
    }
};

class DLL
{
public:
    node *head;
    node *tail;
    DLL()
    {
        head = NULL;
        tail = NULL;
    }
    void push_front(int val)
    {
        node *newnode = new node(val);
        if (head == NULL)
        {
            head = tail = newnode;
            return;
        }
        else
        {
            newnode->next = head;
            head->pre = newnode;
            head = newnode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            return; // empty list
        }
        if (head == tail)
        {
            head = tail = NULL;
        }
        else{
            node *temp = head;
            head = head->next;
            head->pre = NULL;
            temp->next = NULL;
            delete temp;
        }
    }

    void print()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    DLL ll;
    ll.push_front(1);
    ll.push_front(2);
    ll.print();
    ll.pop_front();
    ll.print();
}