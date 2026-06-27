#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main(){
    vector<int>nums = {6,8,0,1,3};
    stack<int>stack;
    vector<int>ans(nums.size(),-1);
    
    for(int i=nums.size()-1; i>=0; i--){
        while(!stack.empty() && nums[i] >= stack.top()){
            stack.pop();
        }
        if(stack.empty()) ans[i] = -1;
        else ans[i] = stack.top();
        
        stack.push(nums[i]);
    }


    for(int i:ans){
        cout << i << ' ';
    }
    cout << endl;
}



