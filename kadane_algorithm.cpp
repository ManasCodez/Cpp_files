#include<iostream>
#include<vector>
#include <climits>
using namespace std;

//max subarray sum using kadane's algorithm(most optimized)
int main(){
    vector<int>vec={1,2,3,4,-1,-2};
    int cs=0;
    int maxsum=INT_MIN;
    int n=vec.size();

    for( int i =0; i<n; i++){
        cs=cs + vec[i];
        maxsum=max(cs,maxsum);
        if (cs<=0){
            cs=0;
        }
    }
    cout << maxsum;

}