#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int a=0;
    while(n>0){
        int r=n%10;
        a=a*10 + r;
        n=n/10;

    }
    cout << a;
}


