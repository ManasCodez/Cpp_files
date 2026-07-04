#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>>nums= {{0,1,0},
                            {0,0,0},
                            {0,1,0}};

    stack<int>st;
    //push n-1 element to stak 0 to n-1
    for(int i=0; i<nums.size();i++){
        st.push(i);
    }

    while(st.size()>1){
        int i = st.top();
        st.pop();
        int j=st.top();
        st.pop();

        if(nums[i][j] == 1){
            st.push(j);
        }else{
            st.push(i);
        }

    }
    int celeb = st.top();
    bool celebrity = true;
    for(int i=0; i<nums.size(); i++){
        if(i!= celeb && nums[i][celeb] ==0) celebrity = false;

    }
    for(int i=0; i<nums[0].size();i++){
        if(i!=celeb && nums[celeb][i] == 1) celebrity = false;
    }

    if(celebrity){
        cout << "celebrity: " <<celeb <<endl; 
    }else{
        cout<< "No celebrity" <<endl;
    }
}