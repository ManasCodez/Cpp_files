#include<iostream>
#include<vector>
using namespace std;

class circular_queue{
    int f, r;
    int capacity,currsize;
    int* arr;

    public:
    
    circular_queue(int limit){
        capacity = limit;
        currsize=0;
        arr = new int[capacity];
        f=0, r=-1;
    }

    void push(int val){
        if(currsize == capacity){
            cout << "CQ is full";
            return;
        }
        r= (r+1)%capacity;
        currsize++;
        arr[r] = val;
    }

    void pop(){
        if(capacity == 0){
            cout << "CQ is empty";
            return;
        }

        f = (f+1)%capacity;
        currsize--;
    }

    int front(){
        if(capacity ==0){
            cout<< "CQ is empty";
            return -1;
        }
        return arr[f];
    }

};

int main(){
    circular_queue cq(3);
    cq.push(1);
    cq.push(2);
    cq.push(3);
    cout << cq.front()<<endl;
    cq.push(4);
    
}