#include <iostream>
#include<set>
#include<algorithm>
#include<unordered_map>
#include<vector>
#include<climits>
using namespace std;

int main(){
    for(int i=0; i <10; i++){
        for(int j=0; j<10; j++){
            if(j==8){
                break;
            }
            cout << i << ", " << j <<endl;
        }
    }
    return 0;
}