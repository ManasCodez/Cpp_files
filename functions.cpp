#include <iostream>
using namespace std;

int sum(int a,int b){
    return(a+b);
}







int minimum(int a, int b){
    if (a>b){
        return b;
    }else{
        return a;
    }
}








int sum_of_n_num(){
    int n;
    cout<< "Enter value of n: ";
    cin >> n;
    int s=0;
    for(int i = 1; i<=n; i++){
        s=s+i;

    }
    return s;
}








void isprime(int n){
    
    for(int i = 2; i<n; i++){
        if (n%i==0){
            
            break;
        }else if(i==(n-1)){
            cout << n ;

        }
    }

    
}








int factorial(int n){

    int f=1;
    for(int i=1; i<=n; i++){
        f=f*i;
    }
    return f;
}







void sum_of_digits(int n ){
    int a=n;
    int r=0;
    while (n>0){
        r= r + a%10;
        a=a/10;
        n--;
    }
    cout << r<< endl;   
}








int nCr(int n, int r){
    int a=1;
    int ab=1;
    int b=1;

    for(int i=1; i<=n;i++){ //factorial of n
        a=a*i;
    }

    for( int j=1; j<=(n-r); j++){
        ab=ab*j;
    }

    for(int k=1; k<=r;k++){ //factorial of n
        b=b*k;    

    }

    int C=a/(b*ab);
    cout << n << "C" << r<< " is " << C <<endl;
    return 0;
}








int n_prime(int n){
    if (n>=2){
        cout << 2 << ' ';
    }
    for (int i = 1; i<=n; i++){
        
        for(int j=2; j<i; j++){
            if (i%j==0){
                break;
            }else if(j==(i-1)){
                cout << i << ' ';
            }
        }
    }
    return 0;
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
    fibo(20);
    return 0;
}