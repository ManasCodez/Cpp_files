#include<iostream>
#include<vector>
using namespace std;


//HCF
// int main(){
//     int gcd=1;
//     int n1=6;
//     int n2=12;
//     for(int i=1; i<=min(n1,n2); i++){
//         if(n1%i==0 && n2%i==0){
//             gcd=i;
//         }
//     }
//     cout << gcd;
    

// }
//LCM 
// int main(){
//     int n1=6;
//     int n2=24;
//     int lcm=0;
//     int i=max(n1,n2) ;
//     while(lcm==0){
//         if( i%n1==0 && i%n2==0 ){
//             lcm=i;
//         }else{
//             i++;
//         }
//     }
//     cout << lcm;
// }

#include <unordered_map>
// int main(){
//     vector<int>nums={2,3,8,10,11,12,45};
//     int target=5;  
//     vector<int>ans; 
//     unordered_map<int,int>map;
//     for(int i=0; i<nums.size(); i++){
//         int x =  target - nums[i];  //nums[i] + x = target 
//         if(map.find(x) != map.end()){
//             ans.push_back(i);  
//             ans.push_back(map[x]);
//         }
//         map[nums[i]]=i;
//     }

//     if(!ans.empty()){
//         for(int i: ans){
//         cout << i<< ' ';
//         }
//     }else{
//         cout << "No valid answer";
//     }
// }

