#include <iostream>
#include<vector>
using namespace std;
int main() {
	// Your code here
    int n=9;
    
    vector<vector<int>>nums;
    if(n==1){
        nums.push_back({1});
    }else if(n==2){
        nums.push_back({1});
        nums.push_back({1,1});
    }else{
        nums.push_back({1});
        nums.push_back({1,1});
         
        for(int i=2; i<n; i++){
            
            vector<int>temp(i+1,1);
            for(int j=1; j<i; j++){
                temp[j]=nums[i-1][j-1] + nums[i-1][j];
                }
            nums.push_back(temp);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=(n-i); j>0; j--){
            cout << " ";
        }
        for(int k:nums[i]){
            
                cout << k << " ";
            
        }
        cout << endl;
        }
    return 0;
}
