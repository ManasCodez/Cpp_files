#include<iostream>
#include<vector>
using namespace std;

// Single Element in a Sorted Array O(logn)
// very easy in linear time using bitwise operator ^
// but er have to do in O(logn) time complexity
// all numbers ocur two times except one , find that number in O(logn)
// am using binary search since its a sorted arraay
int main(){
    vector<int> nums={1,1,2,3,3,4,4,8,8};
    int n = nums.size();
    int st=0 ;
    int end=n-1;
    while(st<=end){
        int mid = st + (end-st)/2;
        if(nums.size()==1){
            cout <<nums[0]; // check if there is only one element in array
            return 0;
        }
        if(mid==0 || mid==n-1){ // if single element is at starting or ending
            cout << nums[mid];
            return 0;
        }
        
        if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){ //check for single element
            cout <<  nums[mid];
            return 0;
        }
        if(nums[mid]==nums[mid-1]){ //mid is at second duplicate value
            if(mid%2==0){
                end=mid-1;
            }else{
                st=mid+1;
            }
        }else{//mid is at first duplicate values
            if(mid%2==0){
                st=mid+1;
            }else{
                end=mid-1;
            }
        }
    }
    return 0;
}



