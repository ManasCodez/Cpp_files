#include<iostream>
#include<vector>
#include<unordered_map>
#include<set>
#include<algorithm>
using namespace std;
//3sum problem : find three numbers in array whose sun is zero

//brute force approach 
//O(N^3) time complexity
// int main(){
//     vector<int>nums={1,2,-1,3,0};
//     vector<vector<int>>ans;
     
//         int n =nums.size();
//         for(int i=0; i<n;i++){
//             for(int j=i+1; j<n; j++){
//                 for( int k=j+1; k<n; k++){
//                     if(i!=j && j!=k && i!=k){
//                         if(nums[i] + nums[j] + nums[k] == 0){
                        
//                             vector<int>temp={nums[i],nums[j],nums[k]};
//                             ans.push_back(temp);

//                         }
//                     }
//                 }
//             }
//         }
//         set<vector<int>>set;
//         for(vector<int> i: ans){
//             sort(i.begin() , i.end());
//             set.insert(i);
//         }
//         ans.clear();
//         for(auto i :set){
//             ans.push_back(i);
//         }




//         for(auto i : ans){
//             for( int j:i){
//                 cout << j << ' ';
//             }
//             cout << endl;
//         }
// }





//better approach using hashset
//time complexity : O(n^2 * log(set))
// int main(){
//     vector<int>nums={ 1,2,-1,3,0,-2};
//     vector<vector<int>>ans;
//     set<vector<int>>s;
//     for(int i=0; i<nums.size();i++){
//         set<int>set;
//         for(int j=i+1; j<nums.size();j++){
//             int third = -nums[i] - nums[j];
//             if(set.find(third) != set.end()){
//                 vector<int>current= {nums[i], nums[j] , third};
//                 sort(current.begin(), current.end());
//                 s.insert(current);
//             }
//             set.insert(nums[j]);
//         }
//     }

//     for(auto i :s){
//         ans.push_back(i);
//     }
    
//     for(auto i:ans){
//         for(int j:i){
//             cout << j << ' ';
//         }
//         cout << endl;
//     }
// }






//best approach
int main(){
    vector<int>nums={ 1,2,-1,3,0,-2};
    sort(nums.begin(), nums.end());
    vector<vector<int>>ans;
    set<vector<int>>set;
    for(int i =0; i<nums.size(); i++){
        int j=i+1 , k=nums.size()-1;
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        while(j<k){
            int sum = nums[i]+nums[j]+nums[k];
            if(sum == 0){
                vector<int>temp={nums[i],nums[j],nums[k]};
                ans.push_back(temp);
                
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]){
                    j++;
                }
            }else if(sum > 0){
                k--;
            }else if(sum<0){
                j++;
            }
        }
    }
    
    for(auto i : ans){
        for(int j:i){
            cout << j << ' ';
        }
        cout << endl;
    }
}