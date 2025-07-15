#include<iostream>
#include<vector>

using namespace std;

bool palindrome(string vec){
    int i=0, j=vec.size()-1;
    while(i<=j){
        if(vec[i]!=vec[j]) return false;
        i++;j--;
    }
    return true;
}


// void partition(string s , int i , vector<vector<string>>& ans , vector<string>&current){
//     if(i==s.length()) {
//         ans.push_back(current);
//         return;
//     }



//     for(int j=i; j<s.length(); j++){
//         string part = s.substr(i,j-i+1);
//         if(palinedrome(part)){
//             current.push_back(part);
//             partition(s,j+1,ans,current);
//             current.pop_back();
//         }
//     }
    
// }

// int main(){
//     vector<vector<string>>ans;
//     vector<string>current;
//     string s = "aab";
//     partition(s,0,ans,current);

//     for(auto i:ans){
//         for(auto j:i){
//             cout << j <<' ';
//         }
//         cout << endl;
//     }
// }



void partition(string s,vector<vector<string>>&ans,vector<string>&current){
    if(s.length()==0 ){
        ans.push_back(current);
        return;
    }

    for(int i=0; i<s.length();i++){
        string part = s.substr(0,i+1);
        if(palindrome(part)){
            current.push_back(part);
            partition(s.substr(i+1,s.length()), ans, current);
            current.pop_back();
        }
    }
}

int main(){
    vector<vector<string>>ans;
    vector<string>current;
    string s = "aab";
    partition(s,ans,current);

    for(auto i:ans){
        for(auto j:i){
            cout << j <<' ';
        }
        cout << endl;
    }
}