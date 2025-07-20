#include <iostream>
#include<vector>
using namespace std;

// Peak Index in a Mountain Array O(logn) very easy with O(n) but we have to use O(logn)
int main(){
    vector<int> arr={1,2,3,4,5,9,5,3,1}; // increasing than 9 is peak , after that decreasing
    int n = arr.size();
    int st=1, end=n-2;
    
    while(st<=end){
        int mid = (st + end)/2;
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            cout << st;
            return mid;
        }

        if(arr[mid] < arr[mid+1]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
return 0;  
}
