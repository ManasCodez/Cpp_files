#include<iostream>
#include<vector>
using namespace std;


//find the unique single number
int main() {
    vector<int>nums = {1,2,1,2,4};
    int n=0;
    for(int i: nums){
        n = n^i;  // 1^2^1^2^4 = 4 because 1^1=0 and 2^2=0 and 4^0=4
    }
    cout <<n;
}   