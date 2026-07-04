#include<iostream>
#include<queue>
#include<deque>
using namespace std;

int main(){
    // queue<int>q;
    // q.push(1);
    // cout << q.front();

    deque<int>dq;


    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(3);
    dq.push_back(4);
    dq.pop_back();
    dq.pop_front();
    cout << dq.front() << ' ';
    cout << dq.back();
}