#include<iostream>
using namespace std;

// any value becomes very large for eg ans, 
//we dont directly return the ans 
//but we return  [ ans % (10^9 + 7) ]
// this is called modulo arithmetics


//properties of modulo arithmetics

// >> (x+y) % m = x%m + y%m;
// >> (x-y) % m = x%m - y%m;
// >> (x.y) % m = x%m . y%m;
int main(){
    cout << 8%3;
}