#include<iostream>
using namespace std;

// int main(){
//     int n;
//     cout << "Enter value of n : ";
//     cin >> n;
//     int p =1;
//     for(int i = 1; i<=n; i++){
//         for ( int j=1 ; j<=n; j++ ){
//             if (p<=9){
//                 cout << p << "  ";
//                 p++;
//             }else{
//                 cout << p << ' ';
//                 p++;
//             }
            

//         }
//         cout << endl;
//     }


//     return 0; 
// }


int main(){
    int n;
    cout<< "Enter the value of n : ";
    cin>> n;
    char ch = 'A';
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n; j++){
            cout << ch << ' ';
            ch++;

        }
        cout << endl;
        
    }
    

    return 0;
}