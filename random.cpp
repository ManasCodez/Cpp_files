#include<iostream>
using namespace std;
int main(){
    int n=8;
    for(int i=1; i<=n; i=i+2){
        int a=1;
        for(int j=1; j<=i; j=j+2){
            cout << a << ' ';
            a=a+2;
        }
        cout << endl;
    }
}