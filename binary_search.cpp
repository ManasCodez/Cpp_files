#include <iostream>
#include<vector>
#include <algorithm>
using namespace std;

//binary search (like in dictionary) O(logn)
// int main(){
//     vector<int> vec={-1,0,1,4,6,8};
//     int tar=4;
//     int n =vec.size();
//     bool t=true;
//     int st=0, end=n-1;
    
//     while (st <= end){
//         int mid=(st+end)/2;   //to optimise mid= st + (end-st)/2  (better for very big values)
//         if(vec[mid]<tar){
//             st=mid+1;
//         }else if( vec[mid] > tar){
//             end=mid-1;
//         }else if(vec[mid] == tar){
//             cout << "target is at: " << mid;
//             return mid;
            
//         }
//     }
//     return 0;
    
// }





//binary search in a sorted rotated array O(logn)
// int main(){
//     vector<int> nums={4,5,6,7,0,1,2};
//     int target = 2;

//     int st=0, end=nums.size()-1;
//     while(st<=end){
//         int mid = st + (end-st)/2;
//         if(nums[mid] == target){
//             cout << mid;
//             return mid;
//         }

//         if(nums[st] <= nums[mid]){ //left sorted
//             if(nums[st]<=target && target <=nums[mid]){
//                 end=mid-1;
//             }else{
//                 st=mid+1;
//             }
//         }else{//right sorted
//             if(nums[mid]<=target && target <=nums[end]){
//                 st=mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
//     }
//     cout << -1;
// }





// Peak Index in a Mountain Array O(logn) very easy with O(n) but we have to use O(logn)
// int main(){
//     vector<int> arr={1,2,3,4,5,9,5,3,1}; // increasing than 9 is peak , after that decreasing
//     int n = arr.size();
//     int st=1, end=n-2;
    
//     while(st<=end){
//         int mid = (st + end)/2;
//         if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
//             cout << st;
//             return mid;
//         }

//         if(arr[mid] < arr[mid+1]){
//             st=mid+1;
//         }else{
//             end=mid-1;
//         }
//     }
// return 0;  
// }







//Single Element in a Sorted Array O(logn)
//very easy in linear time using bitwise operator ^
//but er have to do in O(logn) time complexity
// int main(){
//     vector<int> nums={1,1,2,3,3,4,4,8,8};
//     int n = nums.size();
//     int st=0 ;
//     int end=n-1;
//     while(st<=end){
//         int mid = st + (end-st)/2;
//         if(nums.size()==1){ // check if there is only single element in array
//             return nums[0];
//         }
//         if(mid==0 || mid==n-1){ // if single element is at starting or ending
//             return nums[mid];
//         }
        
//         if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]){ //check for single element
//             return nums[mid];
//         }
       
//         if(nums[mid]==nums[mid-1]){ //mid is at second duplicate value
//             if(mid%2==0){
//                 end=mid-1;
//             }else{
//                 st=mid+1;
//             }
//         }else{//mid is at first duplicate values
//             if(mid%2==0){
//                 st=mid+1;
//             }else{
//                 end=mid-1;
//             }
//         }
    
//     }
//     return 0;
// }








// You are given an array pages[] of n integers, where each element represents 
// the number of pages in a book. There are m students, and the books are to be 
// distributed among them in contiguous order (i.e., each student gets a sequence of books).
//  Your task is to allocate the books such that:

// Each student gets at least one book.

// Each book is allocated to exactly one student.

// The maximum number of pages assigned to any student is minimized.

// bool isvalid(vector<int>&pages , int mid , int m){
//     int pg=0;
//     int st=1;
//     int n =pages.size();
//     for(int i =0; i<n; i++){
//         if(pages[i] > mid){//if no. of pages in first book is more than mid
//             return false;
//         }

//         if(pg + pages[i] <= mid){
//             pg=pg+pages[i];
//         }else{
//             st++;
//             pg=pages[i];//intialyse pg because now we have a new student
//         }

//     }
//     if(st > m){//if it took more student more m
//         return false;
//     }else{
//         return true;
//     }
// }   
// int main(){
//     vector<int>pages = {2,1,3,4};
//     int m=5;
//     int st=0;
//     int end=0;
//     int ans=-1;
//     for(int i:pages){
//         end=end+i;
//     }

//     if(m>pages.size()){//check is number of student is more than no. of books
//         return -1;
//     }

//     while(st<=end){
//         int mid = st + (end-st)/2;

//         if(isvalid(pages, mid, m)){//check if the mid can be a valid way 
//             ans=mid;
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }

//     }

// cout << ans;
// }   


// int main(){
//     vector<int>nums={1,2,2,3,4,4,5,5,6,7,8,8} ;
//     int k =1;
//     for(int i=1; i<nums.size(); i++){
//         if(nums[i]!=nums[i-1]){
//             nums[k]=nums[i];
//             k++;
//         }
//     }
    
//     for(int i:nums){
//         cout << i << ' ';
//     }
//     return k;
// }




//painter problem
// bool isvalid(vector<int>& lengths ,int mid ,int  m , int n){
//     int painter=1;
//     int c=0;
//     for(int i=0; i<n; i++){
//         if(lengths[i] > mid){
//             return false;
//         }
//         if(c + lengths[i] <= mid){
//             c+=lengths[i];
//         }else{
//             painter++;
//             c=lengths[i];
//         }
//     }
//     if(painter == m){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     vector<int>lengths={40,30,10,20};
//     int n =lengths.size();
//     int st=0;
//     int end=0;
//     int m = 2;
//     int ans =-1;
//     for(int i:lengths){
//         end+=i;
//         if(i>st){
//             st=i;
//         }
//     }
//     if(m>lengths.size()){
//         return -1;
//     }

//     while(st<=end){
//         int mid=st + (end-st)/2;
//         if(isvalid(lengths ,mid, m , n)){
//             ans=mid;
//             end=mid-1;
            
//         }else{
//             st=mid+1;
//         }
//     }

// cout << ans;

// }










//aggresive cows problem
//The goal is to place the cows in the stalls such that the minimum 
//distance between any two cows is as large as possible.


bool isvalid(vector<int>cows, int c, int mid){
    int cow=1;
    int lastcow=cows[0];
    
    for(int i=1; i<cows.size(); i++){
        if(cows[i]-lastcow >= mid){
            cow++;
            lastcow=cows[i];
        }
    }
    if(cow==c){
        return true;
    }else{
        return false;
    }
}

int main(){
    vector<int>cows={1,2,8,4,9};
    sort(cows.begin(), cows.end());
    int max=INT_MIN,min=INT_MAX;
    int c=3;
    for(int i=0; i<cows.size();i++){
        if(cows[i] > max){
            max=cows[i];
        }
        if(cows[i]<min){
            min=cows[i];
        }
    }
    int st=min;
    int end=max-min;
    int ans=-1;
    while(st<=end){
        int mid=st + (end-st)/2;
        if(isvalid(cows, c, mid)){
            ans=mid;
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    cout<<ans;
    return 0;
}