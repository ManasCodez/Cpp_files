#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums1={4,5,6,0,0,0} , nums2={1,2,3};
    int m=3, n=3;
    int i = m-1;
    int j = n-1;
    int current= m+n-1;   
    while(j>=0 && i>=0){
        if(nums1[i]<nums2[j]){
            nums1[current]=nums2[j];
            j--;
        }else if(nums1[i]>nums2[j]){
            nums1[current]= nums1[i];
            i--;
        }else if(nums1[i]==nums2[j]){
            nums1[current]=nums2[j];
            j--;
        }


    current--;
    }
    while (j >= 0) {
    nums1[current] = nums2[j];
    current--;
    j--;  
    }

    for(int i:nums1){
        cout << i<<' ';
    }
}