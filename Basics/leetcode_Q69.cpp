#include <iostream>
using namespace std;
int main() {
        int n=4096;
        int st=1;
        int end=n;
        int ans=-1;
        long long int min=INT_MIN;
        if(n==0){
            cout <<0;
            return 0;
        }
        while(st<=end){
            long long int mid=st + (end-st)/2;
            if(mid*mid<n){
                min=max(min,mid);
            }
            if(mid*mid>n){
                end=mid-1;
            }else if(mid*mid<n){
                st=mid+1;
            }else if(mid*mid==n){
                cout << mid;
                return 0;
            }
            
        }
    cout <<  min;
    }