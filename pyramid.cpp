#include <iostream>
using namespace std;


int main(){
    int n ;
    cout << "Enter the value of n: ";
    cin >> n;
    int a =n;
    for (int i = 1; i<=n; i++){
        for (int j = (a-1); j>=1; j--){
            cout << "  ";

        }
        for(int k = 1; k<=i; k++ ){
            cout << k << ' '; 
        }
        for(int l = (i-1); l>0; l--){
            cout << l << ' ' ;

        }
        a--;
        cout << endl;
    }
    return 0;
}