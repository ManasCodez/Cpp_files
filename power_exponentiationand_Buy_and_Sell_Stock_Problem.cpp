#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

//to find power of a number a**b
// int main(){
//     double a = 1;   
//     double n = 2;
//     int b = -2;
//     bool z=false;
//     if (b<0){
//         b=abs(b);
//         z=true;
//     }

//     while(b>0){
//         if(b%2==0){
//             n=n*n;
//             b=b/2;

//         }else{
//             a=a*n;
//             b=b-1;
//         }
//     }

//     if (z==true){
//         cout << 1.0/a;
//     }else{
//     cout << a;
//     }
// }







//best selling price and best profit (brute force) O(n^2)
// int main(){
//     vector<int>vec = {1,5,3,6,7,4};
//     int max=0;
//     int n=vec.size();
//     int d=0;
//     for(int i=0; i<n; i++){
//         for(int j=i+1; j<n; j++){
//             if (vec[j]- vec[i] > max){
//                 max=vec[j]-vec[i];
//             }
//         }
//     }
//     if (max>0){
//         cout << max;
//     }else{
//         cout << 0;
//     }
// }



//best selling price and best profit(better) O(n)
// int main(){
//     vector<int>vec = {7,6,5,4,3}; 
//     int n=vec.size();
//     int profit =0 ;
//     int bp =vec[0];
//     for(int i=0 ; i<n;i++ ){
//         if(bp < vec[i]){
//             profit=max(profit , vec[i] - bp );
//         }
//         bp = min ( bp , vec[i]);
//     }
//     cout << "Maximum profit : " <<  profit;
// }






