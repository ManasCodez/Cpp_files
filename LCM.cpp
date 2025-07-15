#include<iostream>
using namespace std;


int gcd(int a, int b){
    
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }

    if(a==0){
        return b;
    }else{
        return a;
    }
}

// since a*b = gcd(a,b) * lcm(a,b)
int main(){
    int a=3 , b=4;
    int hcf= gcd(a,b);
    int lcm = (a*b)/hcf;

    cout << lcm;
}