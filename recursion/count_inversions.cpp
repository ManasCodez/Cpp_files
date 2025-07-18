#include <iostream>
#include<set>
#include<map>
#include<vector>
using namespace std;
  

// int main(){
//     vector<int>nums = {6,3,5,2,7};
//     int c=0;
//     int n =nums.size();
//     for(int i=0; i<n ;i++){
//         for(int j=i+1; j<n; j++){
//             if(i<j && nums[i]>nums[j]){
//                 c++;
//             }
//         }
//     }
//     cout << c ;
// }



void merge_and_compare(vector<int>&nums, int st , int end , int mid ,int &c){
    int i=st , j=mid+1;
    vector<int>temp;
    while(i<=mid && j<=end){
        if(nums[i] <= nums[j] ){
            temp.push_back(nums[i]);
            i++; 
        }else{
            c+=mid-i+1;
            temp.push_back(nums[j]);
            j++;
        }
    }
    
    
    if(j>end){
        for(int a=i; a<=mid;a++){
            temp.push_back(nums[a]);
        }
            
    }else if(i>mid){
        for(int a=j; a<=end; a++){
            temp.push_back(nums[a]);
        }
    }
    
    for(int k=0; k<temp.size();k++){
        nums[st+k] = temp[k];
    }

}

void mergesort(vector<int>&nums, int st , int end, int& c){
    if(st<end){
        int mid = st + (end-st)/2;
        mergesort(nums,st,mid,c); // for left 
        mergesort(nums,mid+1,end,c);

        merge_and_compare(nums, st , end , mid,c);
    }
}

int main(){
    vector<int>nums = {6,3,5,2,7};
    int c=0;
    mergesort(nums,0,nums.size()-1,c);
    cout << c;
}