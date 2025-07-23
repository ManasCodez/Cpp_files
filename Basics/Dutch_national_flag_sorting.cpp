#include<iostream>
#include<vector>
using namespace std;
//dutch national flag sorting algorithm 
//for sorting 0,1,2 using a single in place loop 

int main(){
    vector<int>nums={2,0,0,2,0,};
    int low=0, mid=0;
    int n=nums.size();
    int high=n-1;
    while(mid<=high){
        
        if(nums[mid]==0){
            swap(nums[mid],nums[low]);
            low++;
            mid++;
        }else if(nums[mid]==1){
            swap(nums[mid],nums[mid]);
            mid++;
        }
        else if(nums[mid]==2){
            swap(nums[mid], nums[high]);
            high--;
        }
    }
    for(int i:nums){
        cout << i << "  ";
    }
}