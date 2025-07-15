#include <iostream>
using namespace std;

int main(){
    int n =20;

    for(int i=0; i<n; i++){
        for(int j = (n-1); j>i; j--){
            cout << " ";
        }
        cout << "*";
        for (int j = (2*i-1); j>0; j--){
            cout << " ";
        }
        if (i!=0){
            cout << '*';
        }
        cout << endl;
    }

    
    for(int i=1; i<=(n-1); i++){
        for(int j =1; j<=i; j++){
            cout << ' ';
        }
        cout << '*';

        
        for(int j = (2*(n-i)-3); j>0; j--){  
            cout << " ";
        }
        if(i != (n-1)){  
            cout << "*";
        }
        

        cout << endl;
    }

    return 0;
}
