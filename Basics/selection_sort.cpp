#include<iostream>
#include<vector>
using namespace std;

//selection sorting 
int main(){
    vector<int>vec={8,6,4,3,2,9};
    int n=vec.size();
    for(int i=0; i<n; i++){
        int minimum=i;
        for( int j=i+1; j<n ; j++){
            if (vec[minimum]>vec[j]){
                minimum=j;
                
            }

        }
        swap(vec[i] ,vec[minimum] );
    }

    for(int i:vec){
        cout << i<< ' ';
    }
}