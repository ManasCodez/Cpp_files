#include <iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;
  

int main(){
    vector<int>nums = {6,3,5,2,7};
    int c=0;
    int n =nums.size();
    for(int i=0; i<n ;i++){
        for(int j=i+1; j<n; j++){
            if(i<j && nums[i]>nums[j]){
                c++;
            }
        }
    }
    cout << c ;
}