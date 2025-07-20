#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

//main formula 
// K = PS[j] - PS[i-1];
int main(){
    vector<int>nums={0,0,0,0,0,0,0,0,0,0};
    int k = 0;
    int c=0;
    unordered_map<int,int>map; // to calculate prefix sum and use the formula
    vector<int>ps;
    int sum=0;
    for(int i=0; i<nums.size(); i++){
        sum += nums[i]; 
        ps.push_back(sum);

        int isum = ps[i] - k;
        if(sum == k){
            c++;
        }
        if(map.find(isum) != map.end()){
            c = c + map[isum];
        }

        map[sum]++;
    }
    cout << c;
}