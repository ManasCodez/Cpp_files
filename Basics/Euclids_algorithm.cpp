#include<iostream>
using namespace std;

//Euclid's algorithm
//used for calculating GCD (Greatest common divisor)

//gcd(a,b) = gcd(a-b , b) if a>b
// and gcd(a,b) = gcd(a , b-a) if b>a

//continue this subtraction until A or B any one is zero
//if no answer exist other than one , return one . 
// int main(){
//     int a = 0;
//     int b = 0;
//     if(a==0 && b==0){
//         cout <<  "No GCD Exist";
//         return 0;
//     }

//     while(a>=0 && b>=0 ){
//         if(a==0){
//             cout << b;
//             return 0;
//         }else if ( b==0 ){
//             cout << a;
//             return 0;
//         }
//         if(a>b){
//             a=a-b;
//         }else if(b>a){
//             b=b-a;
//         }else{
//             a=a-b;
//         }

//     }
    
// }



//use % instead of subtration for more optimisation
int main(){
    int a = 0;
    int b = 28;
    
    while(a>0 && b>0){
        if(a>b){
            a=a%b;
        }else{
            b=b%a;
        }
    }

    if(a==0){
        cout << b;
    }else{
        cout << a;
    }
}