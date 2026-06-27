#include<iostream>
#include<vector>
#include<stack>

using namespace std;


//previous smaller element
int main(){
    vector<int>nums = {3,1,0,8,6};
    stack<int>st;
    vector<int>pre_smaller(nums.size(),0);
    for(int i=0; i<nums.size(); i++){
        while(!st.empty() && st.top() > nums[i]) st.pop();
        if(st.empty()) pre_smaller[i] = -1;
        else pre_smaller[i] = st.top();

        st.push(nums[i]);
    }

    for(int i:pre_smaller){
        cout << i << ' ';
    }
}