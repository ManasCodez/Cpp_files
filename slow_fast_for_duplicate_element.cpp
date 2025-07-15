#include<iostream>
#include<vector>
using namespace std;
//slow fast algorithm for finding duplicate
int main(){
    vector<int>nums = {3,1,3,5,2,6,7};

    int slow = nums[0] , fast = nums[0];
    slow = nums[slow]; // pre intialising slow and fast , can also use do while loop 
    fast = nums[nums[fast]];

    while (slow != fast) {
        slow = nums[slow];
        fast = nums[nums[fast]];
    }

    slow= nums[0];

    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }

    cout << fast;

    return 0;
}