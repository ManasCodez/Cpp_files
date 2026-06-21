#include <iostream>
#include<vector>
#include<stack>
using namespace std;


// O(n^2)
// int main(){
//     vector<int>price = {100,80,60,70,60,75,85};
//     vector<int>stock_span(price.size(),1);
//     for(int i=1; i<price.size(); i++){
//         for(int j=i-1; j>0; j--){
//             if(price[j] > price[i]){
//                 stock_span[i]=i-j;
//                 break;
//             }
//         }
//     }
//     for(int i : stock_span){
//         cout << i << ' ';
//     }
// }




// O(n) using stack

int main(){
    stack<int>stack;
    vector<int>price = {100,80,60,70,60,75,85};
    vector<int>stock_span(price.size(),0);

    for(int i=0; i<price.size(); i++){
        while(!stack.empty() && price[i] >= price[stack.top()] ){   
            stack.pop();
        }
        if(stack.empty() || i==0) stock_span[i] = i+1;
        else stock_span[i] = i - stack.top();

        stack.push(i);
    }

    for(int i: stock_span){
        cout << i << ' ';
    }
}