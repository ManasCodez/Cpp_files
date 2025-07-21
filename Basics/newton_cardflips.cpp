#include <iostream>
#include<vector>
#include <climits>
#include<algorithm>

using namespace std;
int main() {
	//for checking the upper cards
    int n;
    cin >> n ;
    vector<int>c1(n),c2(n);
    for(int i=0; i<n;i++){
        cin>>c1[i];
    }
    for(int i=0; i<n;i++){
        cin>>c2[i];
    }
    
    int count1=INT_MAX, count2=INT_MAX;
    for(int i=0; i<n; i++){
        
        vector<int>v1=c1;
        vector<int>v2=c2;
        int temp=0;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(v1[j]!=v1[i]){
                    if(v2[j]==v1[i]){
                        v1[j]=v2[j]; 
                        
                    }
                }
            }
        }
        
        bool allEqual = true;
        for(int k = 0; k < n; k++) {
            if(v1[k] != v1[0]) { 
                allEqual = false;
                break;
            }

        }
        if(allEqual) {
            for(int p=0; p<n; p++){
                if(v1[p]!=c1[p]){
                    temp++;
                }
            }
        }
        if(temp!=0){
        count1=min(count1,temp);
        }

    }
    
    




    //for checking the lower cards
    
    for(int i=0; i<n; i++){
        
        vector<int>v1=c1;
        vector<int>v2=c2;
        int temp=0;
        for(int j=0;j<n;j++){
            if(i!=j){
                if(v2[j]!=v2[i]){
                    if(v1[j]==v2[i]){
                        v2[j]=v1[j]; 
                        
                    }
                }
            }
        }
        
        bool allEqual = true;
        for(int k = 0; k < n; k++) {
            if(v2[k] != v2[0]) { 
                allEqual = false;
                break;
            }

        }
        if(allEqual) {
            for(int p=0; p<n; p++){
                if(v2[p]!=c2[p]){
                    temp++; 
                }
            }
        }
        if(temp!=0){
        count2=min(count2,temp);
        }

    }
    
    int ans=-1;
    if(count1!=INT_MAX || count2!=INT_MAX){
        ans=min(count1, count2);
    }
    cout << ans;
    
    return 0;
}
