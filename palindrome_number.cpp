#include <iostream>
using namespace std;
int main(){
    int n = 4554;
    int before = n;
    int ans=0;
    while(n>0){
        int rem = n%10;
        ans = ans*10 + rem ;
        n=n/10;
    }
    
    if(before == ans){
        cout << "palindrome";
    }else {
        cout << "not palindrome";
    }
}