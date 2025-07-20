#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// void permute(vector<int>&nums,  int index){
//     if(index == nums.size()){
//         for(int j : nums){
//             cout << j << ' ';
//         }
//         cout << endl;
//         return ;
//     }
//     for( int i=index; i<nums.size(); i++){
//         swap(nums[i],nums[index]);
//         permute(nums, ans , index+1);

//         swap(nums[i],nums[index]);  
        
//     }
// }

// int main(){
//     vector<int>nums = {1,2,3};
    
//     permute(nums, ans , 0);
// }





void permute(vector<int>&nums,  int idx){
    if(idx == nums.size()){
        for(auto i : nums){
            cout << i << ' ';
        }
        cout << endl;
    }

    for(int i = idx; i<nums.size(); i++){
        swap(nums[idx], nums[i]);
        permute(nums, idx+1);
        swap(nums[i],nums[idx]);
    }
     
}

int main(){
    vector<int>nums = {1,2,3};
    vector<int>current;
    permute(nums , 0);
}