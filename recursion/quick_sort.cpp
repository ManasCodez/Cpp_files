#include <iostream>
#include <vector>

using namespace std;

void quick_sort(vector<int>&nums, int pivot,int low,int high){
    for(int i=low; i<=high;i++){
        if(nums[i] > nums[pivot] && i<pivot){
            swap(nums[i],nums[pivot]);
            int j=i;
            i = 0;
            pivot = j;
            
        }else if(nums[pivot]>nums[i] && i>pivot){
            swap(nums[i],nums[pivot]);
            int j=i;
            i = 0;
            pivot = j;
        }
    }
    if (pivot - 1 >= low)
        quick_sort(nums, pivot - 1, low, pivot - 1);

    if (pivot + 1 <= high)
        quick_sort(nums, pivot + 1, pivot + 1, high);
    
}

int main(){
    vector<int>nums={2,5,7,8,6,45,23,4};
    int pivot = nums.size()-1;
    quick_sort(nums,pivot,0,pivot);

    for(int i : nums){
        cout << i << ' ';
    }
}