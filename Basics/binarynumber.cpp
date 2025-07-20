#include <iostream>
using namespace std;

int dec_to_bin(int n){
    int a=0;
    int f=1;
    int s=1;
    while(n>0){
        int r=n%2;
        n=n/2;
        a=a+(r*s);
        s=s*10;

    }
    return a;
}




int bin_2_dec(int n ){
    int a = 1;
    int s=0;
    while(n>0){
        int r=n%10;
        if (r==1 || r==0){
        n=n/10;
        s = s + (r*a);
        a=a*2; 
    }else{
        cout << "invalid input" << endl;
        break;
        }

    }
    return s;
    
}






void fibo(int n ){
    int a = 0;
    int b = 1;
    cout << a << ' ' << b << ' ';

    for(int i = 1; i<=(n-2); i++){
        int c=a+b;
        cout << c << ' ';
        a=b;
        b=c;

    }

}   



int main(){
    int a=3;
    int s = dec_to_bin(a);
    
    s=s*10;
    cout << bin_2_dec(s) << endl;


    cout << (8>>2);

}