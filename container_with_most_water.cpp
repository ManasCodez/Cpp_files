#include<iostream>
#include<vector>
#include<cmath>
using namespace std;



//Container With Most Water(brute force) O(n^2)
// int main(){
//     vector<int>height = {1,8,6,2,5,4,8,3,7};
//     int mArea = 0 ;
//     int n=height.size();
    
//     for ( int i =0 ; i < n; i++ ){
//         for( int j = 0 ; j<n ; j++){
//             if(i != j){
//                 if(height[i] < height[j]){
//                     mArea = max(mArea , height[i] *(j-i));  
//                 }else{
//                     mArea = max(mArea , height[j] *(j-i));
//                 }
//             }

//         }
//     }
//     cout << mArea;
// }



//Container With Most Water (optimal) O(n)
int main(){
    
    vector<int>height = {1,8,6,2,5,4,8,3,7};
    int maxA = 0;
    int n = height.size();
    int carea =0;
    int i =0;
    int j = n-1;
    while (n>0){
        if(height[i] < height[j] ){
            carea = height[i] * (j-i);
            maxA= max(maxA, carea);
            i++;
        }else{
            carea = height[j] * (j-i);
            maxA= max(maxA, carea);
            j--;
        }
        n--;
    }
    cout << maxA;
}