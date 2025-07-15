//time complexity
// 2n^2 + 4n + 4 => time complexity of this is => n^2   (remove constants and consider the highest power of n)


//Space complexity
// 1. input values (arr,vector,string, etc) are NOT calculated in space complexity 
// 2.The extra variables and (arr,vec,string) created to find something is calculated(auxillary space) 


#include<iostream>
#include <vector>
using namespace std;



//O(1) time complexity
// int main(){
//     int n ;
//     cin n;
//     cout << n;
// }




// //O(n) linear time complexity
// int main(){
//     int n;
//     cout <<"Enter value of n: ";
//     cin >> n;
//     int f=1;
//     for(int i=1; i<=n; i++){
//         f=f*i;
//     }
//     cout << f;
// }





//O(n^2) time complexity
//selection sorting 
// int main(){
//     vector<int>vec={1,2,1,4,4,6,3,11,1,11,1,11,1,1,67,11,34,34,53,65,23};
//     int n=vec.size();
//     for(int i=0; i<n; i++){
//         int minidx=i;
//         for( int j=i+1; j<n ; j++){
//             if (vec[minidx]>vec[j]){
//                 minidx=j;
                
//             }

//         }
//         swap(vec[i] ,vec[minidx] );
//     }

//     for(int i:vec){
//         cout << i<< ' ';
//     }
// }


//recursion
// int recur(int n){   
//     if (n==0){
//         return 1;
//     }else { 
//         return n * recur(n-1);
//     }

// } 
// int main(){
//     int n ;
//     cout << "Enter n: ";
//     cin >> n;
//     cout << recur(n);
// }


