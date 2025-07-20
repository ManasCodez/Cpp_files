#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>nums= {{ 1, 2, 3, 4},
                              { 5, 6, 7, 8},
                              { 9, 10 ,11, 12}
                              };
    vector<int>ans;
    int top = 0, bottom = nums.size()-1;
    int left =0, right = nums[0].size()-1;
    while(top<=bottom && left<=right){
        for(int i=left; i<=right; i++){
            ans.push_back(nums[top][i]);
        }
        
        for(int i=top+1; i<=bottom; i++ ){
            ans.push_back(nums[i][right]);
        }
        if(top<bottom){
        for(int i = right-1; i>=left; i--){
            ans.push_back(nums[bottom][i]);
        }
        }
        
        if(left<right){
        for(int i=bottom-1; i>top; i--){
            ans.push_back(nums[i][left]);
        }
        }
        top++;
        right--;
        bottom--;
        left++;
    }


    for(int i:ans){
        cout << i << ' ';
    }
}