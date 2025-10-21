#include <iostream>
using namespace std;

// int main(){
//     int marks[5] ;
//     int size=5;
//     cout << "Enter marks: " ;
//     for(int i=0; i<size;i++){
//         cin >> marks[i];
//     }

    
//     int n = marks[0];
//     for(int i=0; i<size; i++){
//         if (n>marks[i]){
//             n=marks[i];
//         }
//     }
//     cout << "Smallest in the array is: "<< n << endl; 


//     int a=marks[0];
//     for(int i=0; i<size; i++){
//         if (n<marks[i]){
//             n=marks[i];
//         }
//     }
//     cout << "Greatest in the array is: "<< n << endl; 
    
// }






//index of greatest number
// int main(){
//     int l[5];
//     cout << "Enter a array: ";
//     for(int i=0; i<5;i++){
//         cin >> l[i];

//     }

//     int max=l[0];
//     int index=0;
//     for(int i =0; i<5; i++){
//         if (l[i]>max){
//             max=l[i];
//             index=i;
//         }
//     }
//     cout << "Index of greatest number in the array is: "<< index ;
// }





//index of smallest number
// int main(){
//     int l[5];
//     int size=5;
//     cout << "Enter an array: "; 
//     for(int i=0; i<size; i++){
//         cin >> l[i];
//     }

//     int min=l[0];
//     int index=0;
//     for(int i=0; i<size; i++){
//         if(l[i]<min){
//             min=l[i];
//             index=i;
//         }   
//     }
//     cout << "Index of smallest number is " << index;
// }





//arr is changed in the main funtion if any changes are done in the other funtions 
// void change(int arr[]){
//     arr[0]=0;
// }

// int main(){
//     int arr[]={1,2,3};

//     cout << arr[0] << ' '<< arr[1] << ' '<< arr[2]<<' ' << endl;
//     change(arr);
//     for(int i=0; i<3;i++){
//         cout << arr[i] << ' ';
//     }
//     return 0;   

// }






//finding a target value in an array
// int main(){
//     int arr[5];
//     int size=5;
//     cout << "Enter an array:";
//     for(int i = 0; i<size; i++){
//         cin >> arr[i];
//     }
//     int target;
//     cout << "Enter target number ";
//     cin>> target;


//     for(int i = 0; i<size; i++){
//         if (arr[i]==target){
//             cout << "target found at " <<  i;
//             break;
//         }else if(i==size-1){
//             cout << "invalid target";
//         }
//     }

// }








//reversing an array
// int main(){
//     int arr[]={1,2,3,4,5};
//     int size=5;

//     for(int i  = 0 ; i<size/2; i++){
//         swap(arr[i],arr[size-1-i]);
//     }

//     for(int i  = 0 ; i<size; i++){
//        cout << arr[i] <<  ' ';
//     }

// }







//sum and product of numbers in array
// int main(){
//     int arr[5];
//     int size=5;

//     cout << "Enter an array:";
//     for(int i=0; i<size; i++){
//         cin >> arr[i];
//     }


//     int sum=0;
//     int product=1;
//     for(int i = 0; i<size;i++){
//         sum+=arr[i];
//         product*=arr[i];
//     }

//     cout << "Sum of number of array: " << sum << endl;
//     cout << "Product of number of array: " << product << endl;
    
// }




//to swap max and min numbers of the array
// int main(){
//     int arr[]={100,99,88,77,55};
//     int size=5;
//     int maxindex=0;
//     int minindex=0;

//     for(int i=0; i<size;i++){
//         if (arr[i] > arr[maxindex]){
//             maxindex=i;
//         }else if(arr[i] < arr[minindex]){
//                 minindex=i;
//             }
//     }
//     swap(arr[maxindex],arr[minindex]);

//     for (int j = 0; j < size; j++) {
//         cout << arr[j] << " ";
//     }
    
    
// }





//to print unique values of array;

// int main(){
//     int arr[]={1,2,3,1,2,3,4};
//     int size=7;
//     for(int i=0; i<size; i++){
//         for(int j=0;j<size;j++){
//             if (i!=j && arr[i]==arr[j]){
//                 break;                
//             }
//             if(j==size-1){
//                 cout << arr[i] <<" ";
//             }
//         }   

//     }
//     return 0;
// }





// Catesian product of two array
// int main(){
//     int arr1[]={1,2,3,4,5};
//     int arr2[]={6,7,8,9};
//     int s1=5;
//     int s2=4;
//     for(int i=0; i<s1;i++){
//         for(int j =0; j<s2; j++){
//             cout << '(' << arr1[i] << ',' << arr2[j] <<')' << ' ' << endl;
//         }
//     }
// }





//intersection of two array;
// int main(){ //brute force  O(n^2)
//     int arr1[]={1,2,3,4,5};
//     int arr2[]={6,7,3,1};
//     int s1=5;
//     int s2=4;

//     for (int i =0; i<s1;i++){
//         for (int j =0; j<s2; j++){
//             if (arr1[i]==arr2[j]){
//                 cout << arr1[i] << ' ';
//             }
//         }
//     }
//     return 0;
// }



//intersection of two array;
//using sets   O(n)
#include<vector>
#include<unordered_set>
int main(){
    vector<int>ans;
    unordered_set<int>set;
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,3,1};
    for(int i:arr1){
        set.insert(i);
    }
    for(int i : arr2){
        if(set.find(i) != set.end()){
            ans.push_back(i);
        }
    }

    for(int i:ans){
        cout << i << ' ';
    }
    return 0;    
}





// int main(){
//     int arr1[]={1,2,3,4,5};
//     for(int i : arr1){
//         cout << i << endl;
//     }
// }