#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int main(){
    vector<int>nums={1,2,6,-1,-2,5};
    int target = 7;

    int n = nums.size();
        vector<vector<int>>ans;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;

            for(int j=i+1; j<n;j++){
                int k=j+1, l=n-1;
            if(j>i+1 && nums[j]==nums[j-1]) continue;
                while(k<l){
                    long int sum =(1L)* nums[i]+ nums[j]+nums[k]+nums[l];
                    if(sum==target){
                        ans.push_back({nums[i], nums[j],nums[k],nums[l]});
                        k++;
                        l--;
                        while(k<l && nums[k]==nums[k-1]) k++;
                        while(k<l && nums[l]==nums[l+1]) l--;
                    }else if(sum < target){
                        k++;
                    }else if(sum > target){
                        l--;
                    }
                }
            }
        }
        for(auto i:ans){
            for(int j:i){
                cout << j << ' ';
            }
            cout << endl;
        }
}


