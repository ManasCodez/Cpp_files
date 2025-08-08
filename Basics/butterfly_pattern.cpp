#include <iostream>
using namespace std;
int main(){
    int n = 10;
    for(int i = 1 ; i<=n; i++){  //top triangles
        for(int j = 1; j<=i; j++){
            cout << '*'; //top left triangle

        }
        for(int k = 1; k<=((2*n)-(2*i)); k++){ // spaces between the top triangls
            cout << ' ';
        }

        for(int l = 1; l<=i; l++){//top right triangle
            cout << '*';
        }
        cout << endl;

    }
    for(int i = 1; i<=n; i++){//bottom triangles
        
        for(int j = (n-i+1); j>0; j--){//bottom left triangle
            cout << '*'; 
            
        }
        for(int k = ((2*i)-2); k>=1 ;k--){ // spaces between bottom triangls
                if (k!=0){
                    cout << ' ';
                }
        }
        
        for(int j = (n-i+1); j>0; j--){//bottom right triangle
            cout << '*'; 
       
        }

         cout << endl;
    }
    return 0;
}