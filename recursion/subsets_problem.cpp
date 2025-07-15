#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void subsets(vector<int>&nums, vector<int>&ans, int i){
    if(i==nums.size()){
        for(int j:ans){
            cout << j;
        }
        cout << endl;
        return ;
    }
    ans.push_back(nums[i]);
    subsets(nums,ans,i+1);

    ans.pop_back();
    subsets(nums,ans,i+1);
}

int main(){
    vector<int>nums = {1,2,3};
    vector<int>ans;
    subsets(nums,ans,0);
}