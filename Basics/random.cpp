#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    vector<int>nums = {3,5,2,3};
   sort(nums.begin(), nums.end());
        vector<vector<int>>pairs(nums.size()/2);
        int i=0, j = nums.size()-1;
        while(i<j){
            pairs.push_back({ nums[i]  ,nums[j] });
            i++;j--;
        }
        int sum =INT_MAX;
        for(auto i: pairs){
            sum = min(sum, i[0]+i[1]);
        }

        return sum;
}