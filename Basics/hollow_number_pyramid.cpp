#include<iostream>
using namespace std;
int main(){
    int n=4;
        // Your code here
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if(i==n){
                cout << j << ' ';
            }else if(i<=2){
                cout << j <<' ';
            }else if(i>2){
                if(j==1 || j==i){
                    cout << j<< ' ';
                }else{
                    cout << "  ";
                }
            }
            
        }
        cout << endl;
    }
    
    return 0;
}