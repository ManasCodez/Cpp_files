#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


//Product of Array Except Self (brute force) O(n^2)
// int main(){
//     vector<int> nums={1,2,3,4};
//     vector<int> ans;
    // int n = nums.size();
    // int p=1;
    // for(int i =0; i<n; i++){
    //     p=1;
    //     for(int j =0 ; j<n ; j++){
    //         if (i!=j){
    //             p=p*nums[j];               
    //         }
    //     }
    //     ans.push_back(p);
    // }
    // for(int i: ans){
    //     cout << i << ' ';
    // }
// }







//Product of Array Except Self(optimal) O(n)  (took 1:30 hour to completely understand and made this myslef!!!!)
//wwwooooooooooohhhhhhh!!!!
//space complexity O(n)
// int main(){
//     vector<int> nums={1,2,3,4};
//     vector<int> ans;
//     int n = nums.size();
//     vector<int> pre(n,1);
//     vector<int> suff(n,1);
    
//     suff[n-1]=1;

//     for(int i = 1; i<n ; i++){ //for preffix
//         pre[i] =  (pre[i-1])*(nums[i-1]);
//     }
    
//     for(int j = n-2 ; j>=0 ; j--){ //for suffix
//         suff[j] = suff[j+1]*nums[j+1];    
//     }
   
//     for(int k =0; k<n ; k++){ //for answer
//         ans.push_back(pre[k]*suff[k]);
//     }    

//     for (int i : ans){ //printing the answer
//         cout << i << ' ';
//     }
// }





// Product of Array Except Self
//same time complexity but better space complexity O(1)
int main(){
    vector<int> nums={1,2,3,4};
    int n = nums.size();
    vector<int> ans(n,1);
    
    int pre =1;
    int suff =1;

    for(int i = 1; i<n ; i++){ //for preffix
        pre =  pre*(nums[i-1]);
        ans[i] = ans[i]*pre;
    }
    
    for(int j = n-2 ; j>=0 ; j--){
        suff = suff*nums[j+1];   
        ans[j] = ans[j]*suff; 
    }
   
    for(int i:ans){
        cout << i <<' ';
    }

    
}