// #include<iostream>
// using namespace std;

// // any value becomes very large for eg ans, 
// //we dont directly return the ans 
// //but we return  [ ans % (10^9 + 7) ]
// // this is called modulo arithmetics


// //properties of modulo arithmetics

// // >> (x+y) % m = x%m + y%m;
// // >> (x-y) % m = x%m - y%m;
// // >> (x.y) % m = x%m . y%m;
// int main(){
//     cout << 8%3;
// }

 #include <iostream>
#include <vector>
#include <algorithm>
#include<climits>

using namespace std;


int main(){
    vector<int> nums = {2,1,5,6,2,3};
    int maxarea= 0;
    for(int i=0; i <nums.size(); i++){
        int area;
        for(int j=i+1; j<nums.size();j++){
            int min = INT_MAX;
            for(int k=i; k<=j; k++){
                if(nums[k] < min ){
                    min = nums[k];
                }
            }
            area = (j-i)*min;
            maxarea=max(maxarea,area);

        }
    }
    cout << maxarea;
}