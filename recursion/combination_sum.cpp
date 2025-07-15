#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

void combination_sum(vector<int>&nums, int target, vector<vector<int>>&ans,int i ,vector<int>&current,set<vector<int>>& s){
    if (i == nums.size() || target <0) return;
    
    if(target ==0 ){
        s.insert(current);
    }

    current.push_back(nums[i]);//include 1 time 
    combination_sum(nums,target-nums[i],ans,i+1,current,s);
    current.pop_back();

    current.push_back(nums[i]);//include multiple times
    combination_sum(nums,target-nums[i],ans,i,current,s);
    current.pop_back();

    combination_sum(nums,target,ans,i+1,current,s); //do not include
    
}


int main(){
    vector<vector<int>>ans;
    vector<int>nums={2,3,6,7};
    int target = 18;
    vector<int>current;
    set<vector<int>>s;
    combination_sum(nums,target,ans,0,current,s);
    
    for(auto i:s){
        for(auto j : i){
            cout << j <<  ' ';
        }
        cout << endl;
    }
    return 0;
}