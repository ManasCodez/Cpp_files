#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int>&nums,int st, int end , int mid){
    vector<int>temp;
    int i=st, j=mid+1;
    while(i<=mid || j<=end){

        if(j>end){
            for(int a=i; a<=mid;a++){
                temp.push_back(nums[a]);
            }
            break;
        }else if(i>mid){
            for(int a=j; a<=end; a++){
                temp.push_back(nums[a]);
            }
            break;
        }


        if(nums[i]<nums[j]){
            temp.push_back(nums[i]);
            i++;
        }else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    for(int k=0; k<temp.size();k++){
        nums[st+k] = temp[k];
    }    
}


void merge_sort(vector<int>&nums, int st, int end){
    
    if(st<end){
        int mid  = st + (end-st)/2;

        //for left
        merge_sort(nums, st,mid);

        //for right
        merge_sort(nums,mid+1,end);

        //for merging the two 
        merge(nums,st,end,mid);
    }
}

int main(){
    vector<int>nums = {12,31,35,8,32,17};

    merge_sort(nums,0,nums.size()-1);

    for(auto i :nums){
        cout << i << ' ';
    }
    return 0;
}