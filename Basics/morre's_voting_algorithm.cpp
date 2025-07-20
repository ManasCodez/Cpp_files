#include <iostream>
#include<vector>
using namespace std;



//majority element (moore's voting algorithm)(optimal)
int main(){
    vector<int>vec={2,3,2};
    int n=vec.size();
    int freq=0;
    int ans=0;
    for(int i =0; i<n; i++){
        if (freq==0){
            ans=vec[i];
        }
        if(ans==vec[i]){
            freq++;
        }else{
            freq--;
        }
    }
    cout <<  ans;
}