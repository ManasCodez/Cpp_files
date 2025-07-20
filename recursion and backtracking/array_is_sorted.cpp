#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool issorted(vector<int>&nums , int n ){
    if(n==1){
        return true;
    }
    if(nums[n-2] > nums[n-1] ){
        return false;   
    }
    return issorted(nums , n-1);
}

int main(){
    vector<int>nums = {1,2,3,4,5};
    int n =5;
    cout << issorted(nums,n);
}