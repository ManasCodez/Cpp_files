#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
// int main(){
//     vector<int>nums = {3,5,2,3};
//    sort(nums.begin(), nums.end());
//         vector<vector<int>>pairs(nums.size()/2);
//         int i=0, j = nums.size()-1;
//         while(i<j){
//             pairs.push_back({ nums[i]  ,nums[j] });
//             i++;j--;
//         }
//         int sum =INT_MAX;
//         for(auto i: pairs){
//             sum = min(sum, i[0]+i[1]);
//         }

//         return sum;
// }

// int main(){
//     vector<int>nums = {2,3,4,6};
//     for(int i=0; i<nums.size(); i++){
//         for(int j=0; j<nums.size(); j++){
//             for(int a=i; a<=j;a++){
//                 cout << nums[a] << ' ';
//             }

//         }
//         cout <<endl;
//     }
// }

// int main(){
//     int x = 5;
//     if (x =7){
//         cout << "hello" <<endl;
//     }
//     cout <<x;
// }

int main()
{

    string s = "manas";
    cout << s.substr(1, s.size());
    return 0;
}