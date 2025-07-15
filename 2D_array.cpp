#include<iostream>

using namespace std; 


//traversing a matrix
// int main (){
//     int arr[4][3]= { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
//     int row = 4;
//     int col=3;
    
//     for(int i =0 ; i<row; i++){
//         for(int j=0; j<col; j++){
//             cout << arr[i][j] << ' ';
//         }
//         cout << endl;
//     }


//     return 0;
// }




//linear searching in matrix;
// pair<int,int> linearsearch(int arr[][3] , int row, int col, int target){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(arr[i][j] == target){
//                 return {i,j};
//             }
//         }
//     }
//     return {-1,-1};
// }

// int main(){
//     int arr[4][3]= { {1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};
//     int row = 4;
//     int col=3;
//     int target = 5;
//     pair<int,int>p =  linearsearch(arr, row,col, target);
//     cout << p.first << ' ' << p.second;

//     return 0;
// }






//maximum row sum 
//row wise
// int main(){
//     int arr[4][3]={{1,2,3},{4,5,6}, {7,8,9}, {10,11,12}};
//     int ans=0;
//     int row=4 , col=3;
//     for(int i=0; i<row; i++){
//         int sum=0;
//         for(int j=0; j<col; j++){
//             sum=sum + arr[i][j];
//         }
//         ans=max(ans,sum);
//     }
//     cout << ans;
// }

//maximum column sum 
//column wise
// int main(){
//     int arr[4][3]={{1 ,2 ,3},
//                    {4, 5, 6},
//                    {7, 8, 9}, 
//                    {10,11,12}};
//     int ans=INT_MIN;
//     int row=4 , col=3;
    
//     for(int i=0; i<col;i++){
//         int sum=0;
//         for(int j=0; j<row; j++){
//             sum = sum + arr[j][i];
//         }
//         ans = max(ans, sum);
//     }
//     cout << ans;

// }





//diagonal sum (both diagonal)
int main(){
    int arr[4][4] = {{ 1,  2,  3,  2}, 
                     { 4,  5,  6,  3},
                     { 7,  8,  9 , 4},
                     {10, 11, 12, 13}};
    int n=3;
    int sum=0;
    for(int i=0; i<n; i++ ){
        sum = sum + arr[i][i];
        sum= sum + arr[i][n-1-i];
        
    }
    if(n%2!=0){
        sum = sum - arr[n/2][n/2];
    }
    cout << sum;
    return 0;
}


