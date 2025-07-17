#include <iostream>
#include <vector>

using namespace std;

int partition(vector<int>&nums,int st, int end){
    int pivot = end;
    int i=0;
    for(int j=st ; j<=end; j++){
        if(nums[j]<pivot){
            swap(nums[i],nums[j]);
            i++;
        }
    }
    swap(nums[i],nums[end]);
    return i;
}



void quick_sort(vector<int>&nums, int st,int end){
    if(st<end){
        int pivot = partition(nums,st,end);
        quick_sort(nums,st,pivot-1); // for left side
        quick_sort(nums,pivot+1,end);//for right side
    }
    
}

int main(){
    vector<int>nums={5,2,6,4,1,3};
        
    quick_sort(nums,0,nums.size()-1);

    for(int i : nums){
        cout << i << ' ';
    }
}