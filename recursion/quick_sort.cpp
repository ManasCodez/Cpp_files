#include <iostream>
#include <vector>

using namespace std;

void quick_sort(vector<int>&nums, int pivot,int low,int high){

    if(low >=high) return;

    for(int i=low; i<=high;i++){
        if(nums[i] > nums[pivot] && i<pivot){
            swap(nums[i],nums[pivot]);
            int j=i;
            i = min(i,pivot-1);
            pivot = j;
            
        }else if(nums[pivot]>nums[i] && i>pivot){
            swap(nums[i],nums[pivot]);
            int j=i;
            i = min(i,pivot-1);
            pivot = j;
        }
    }
    if (pivot - 1 >= low)
        quick_sort(nums, pivot - 1, low, pivot - 1);

    if (pivot + 1 <= high)
        quick_sort(nums, pivot + 1, pivot + 1, high);
    
}

int main(){
    vector<int>nums={10, 1, 9, 2, 8, 3, 7,-43,-1,-48};
        int pivot = nums.size()-1;
        quick_sort(nums,pivot,0,pivot);

    for(int i : nums){
        cout << i << ' ';
    }
}