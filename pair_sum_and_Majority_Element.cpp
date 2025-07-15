#include <iostream>
#include<vector>
using namespace std;



//finding a desired sum of two from an array (brute)
// int main(){
//     vector<int>vec = {1,2,3,4,5,6,7,8,9};
//     int size= vec.size();
//     int tar=4;
    
//     for(int i=0 ;i<size;i++){
//         for(int j=0; j<size; j++){
//             if(vec[i]+vec[j]==tar){
//                 cout << vec[i] <<" + "<< vec[j] <<" = " << tar << endl;
                
//             }
//         }
//     }
    
// }



//finding a desired sum of two from an array(optimal)
// int main(){
//     vector<int>vec = {1,2,3,4,5,6,7,8,9};
//     int size= vec.size();
//     int tar=4;
//     int sum=0;
//     bool n = true;
//     int i =0;
//     int j =size-1;
//     vector<int>ans;
//     while (n==true && i<j){
//         if (vec[i]+vec[j] > tar){
//             j--;

//         }else if(vec[i]+vec[j] < tar){
//             i++;

//         }else if(vec[i]+vec[j] == tar){
//             ans.push_back(i);
//             ans.push_back(j);
//             n=false;
//         }
//     }
//     cout << ans[0] << ", " << ans[1];
    
// }









//majority element (brute force)
// int main(){
//     vector<int>vec={1,1,1,1,1,2,2,2,2,2,2};
//     int count=0;
//     int n =vec.size();
//     int ans;

//     for( int i =0; i<n; i++){
//         count =0;
//         for (int j =0; j<n; j++){
//             if (vec[i] == vec[j]){
//                 count++;
//             }
//         }
//         if (count>n/2){
//             ans = vec[i];
//             cout << ans;
//             break;
//         }
    
//     }
    
//     return 0;   
// }





//majority element (moore's voting algorithm)(optimal)
int main(){
    vector<int>vec={2,3,2};
    int n=vec.size();
    int freq=0;
    int ans=0;
    for(int i =0; i<n; i++){
        if (freq==0){
            ans=vec[i];
        }
        if(ans==vec[i]){
            freq++;
        }else{
            freq--;
        }
    }
    cout <<  ans;
}