#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void combination(int n , int k , vector<vector<int>>&ans, vector<int>&current){
    
    if(current.size()==k){
        ans.push_back(current);
        return;
    }
    if (n == 0) return;

    current.push_back(n);
    combination(n-1 ,k ,ans ,current);

    current.pop_back();
    combination(n-1 ,k ,ans ,current);
}

int main(){
    int n =4;
    int k =2;
    vector<vector<int>>ans;
    vector<int>current;
    combination(n,k,ans,current);

    for(auto i :ans){
        for(int j :i){
            cout << j << ' ';
        }
        cout << endl;
    }
}