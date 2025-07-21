#include<iostream>
#include<vector>
#include <algorithm> 
using namespace std;
vector<int> nextPermutation(vector<int>& nums) {
    int pivot=-1;
    for(int i=nums.size()-2; i>=0; i--){
        if(nums[i]<nums[i+1]){
            pivot=i;
            break;
        }
    }
    if(pivot==-1){
        sort(nums.begin(), nums.end());
        return nums;
    }
    int m=pivot+1;
    for(int i=pivot+1; i<nums.size(); i++){
        if(nums[i] <= nums[m] && nums[i]>nums[pivot]){
            m=i;
            
        }
    }
    swap(nums[m] , nums[pivot]);
    reverse(nums.begin() + pivot + 1, nums.end());
    return nums;
}

int main(){
    vector<int>nums={1,2,3};
    vector<int> a= nextPermutation(nums);
    for( int i:nums){
        cout << i<<' ';
    }
}


