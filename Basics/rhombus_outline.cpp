#include <iostream>
using namespace std;
int main() {
	// incomplete
    int n=5;
    
    for(int i=0; i<n; i++){
        for(int j=n-i-1; j>0; j--){
            cout << ' ';
            
        }
        if(i==n-1){
            for(int k=1; k<2*n-1; k++){
                cout << '*';
            }
        }
        
        cout << '*';
        if(i==1){
            cout << '*';
        }else{
            if(i>1 && i<n-1){
                for(int p=1;p<=i-1; p++){
                    cout << ' ';
                }
                cout << '*';
            }
            
        }

        cout << endl;

    }
    
}