#include <iostream>
using namespace std;

int main(){
    int n =25; 

    for(int i =0; i<n; i++){
        for(int j =0; j<(n-i-1); j++){
            cout << ' ';
        }
        cout << '*';
        for(int k =0; k<(2*i-1); k++){
            
                cout << ' ';
            
            if ((i==n-1) && (k<=n-2)) {
                cout << '*' ;
                
            }
            
        }
        if(i!=0 && i!=n-1){
            cout << '*';
        }
        cout << endl;
        
    }

}