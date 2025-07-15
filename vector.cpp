#include <iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int>vec ;
    
     
//     vec.push_back(25);
//     vec.push_back(45);
//     vec.push_back(55);
//     vec.push_back(65);
//     vec.push_back(65);
    
//     cout << vec.size() << endl;
//     cout << vec.capacity() << endl;
// }





//find the unique single number
// int main() {
//     vector<int>nums = {1,2,1,2,4};
//     int n=0;
//     for(int i: nums){
//         n = n^i;  // 1^2^1^2^4 = 4 because 1^1=0 and 2^2=0 and 4^0=4
//         cout << n << endl;

//     }
//     cout <<n;
// }   




//reverse a vector
// int reverse_vec(vector<int>& vec){
//     int size=vec.size();
//     for(int i =0; i<size/2; i++){
//         swap(vec[i],vec[size-1-i]);

//     }

//     return 0;
// }


// int main(){
//     vector<int> vec = {1,2,3,4,5};
//     reverse_vec(vec);
//     for(int i: vec){
//         cout << i;
//     }
//     return 0;
// }





//palidrome
// bool isPalindrome(int n) {
//     int rev=0;
//     int a=n;
//     while(a>0){
//         int r=a%10;
//         rev=rev*10 + r;
//         a=a/10;
//     }
//     if (rev==n){
//         return true;
//     }else{
//         return false;
//     }
// }
// int main(){
//     cout << isPalindrome(12);
// }



//printing subarrays
// int main(){
//     vector<int> vec={1,2,3,4,5};
//     int size=vec.size();

//     for(int i=0;i<size;i++){
//         for(int j=i; j<size;j++){
//             for(int k=i; k<=j; k++){
//                 cout << vec[k] ;
//             }
//             cout << ' ';
//         }
//         cout <<endl;
//     }
// }







//maxium sum of subarray
// int main(){
    // vector<int> vec={1,2,3,4,5,6};
    // int size=vec.size();
    // int sum=0;
    // int max=0;
    // for(int i=0;i<size;i++){
        
    //     for(int j=i; j<size;j++){
    //         for(int k=i; k<=j; k++){
    //             cout << vec[k] ;
    //             sum+=vec[k];
    //             }
    //         if (sum>max){
    //             max=sum;
    //             sum=0;
    //         }else{
    //             sum=0;
    //         }
    //         cout << ' ';
    //     }
    //     cout <<endl;
    // }
    // cout << "sum = " << max;
// }







//max subarray sum using kadane's algorithm(most optimized)
int main(){
    vector<int>vec={1,2,3,4,5};
    int cs=0;
    int maxsum=INT_MIN;
    int n=vec.size();

    for( int i =0; i<n; i++){
        cs=cs + vec[i];
        maxsum=max(cs,maxsum);
        if (cs<=0){
            cs=0;
        }
    }
    cout << maxsum;

}