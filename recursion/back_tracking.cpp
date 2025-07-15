#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void subsets(vector<int>&nums, vector<int>&ans, int i){
    if(i==nums.size()){
        for(int a : ans){
            cout << a << ' ';
        }
        cout << endl;
        return ;
    }
    //inclusion step
    ans.push_back(nums[i]);
    subsets(nums, ans, i+1);

    //exclusion step
    ans.pop_back(); 
    subsets(nums, ans, i+1);
    /////
}


int main(){
    vector<int>nums= {1,2,2};
    vector<int>ans;
    subsets(nums, ans,0);
}