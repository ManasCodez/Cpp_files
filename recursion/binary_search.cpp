#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//binary search using recursion 
int binsearch(vector<int>nums, int target, int st , int end){
    
    if(st>end) return -1;
    int mid = st + (end-st)/2;

    if(nums[mid]== target) return mid;

    if(nums[mid] > target){
        return binsearch(nums, target,st, mid-1);
    }else if(nums[mid]<target){
        return binsearch(nums, target,mid+1, end);
    }

    return -1;
}


int main(){
    vector<int>nums = {-1,0,2,3,4,6,8};
    int target  = 5;
    int st=0 , end = nums.size()-1;
    cout << binsearch(nums, target,st,end);
}