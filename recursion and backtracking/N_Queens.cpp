#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool issafe(vector<vector<char>>&board, int row,int j,int n){
    for(int a=0;a<n;a++ ){
        if(a!=j){//horizontal
            if(board[row][a] == 'Q'){
                return false;
            }
        }//vertical
        if(a!=row){
            if(board[a][j]=='Q'){
                return false;
            }
        }
    }
    // Top-left diagonal
    int r = row, c = j;
    while(r >= 0 && c >= 0){
        if(board[r][c] == 'Q') return false;
        r--; c--;
    }

    // Top-right diagonal
    r = row, c = j;
    while(r >= 0 && c < n){
        if(board[r][c] == 'Q') return false;
        r--;  c++;
    }
    return true;
}


void nqueens(vector<vector<char>>&board, int row,int n){
    //base case
    if(row == n){
        for(auto x:board){
            for(auto y:x){
                cout << y << ' ';
            }
            cout << endl;
        }
        cout << endl << endl ;
        return;
    }


    for(int j=0; j<n; j++){
        if(issafe(board,row,j,n)){
            board[row][j] = 'Q';
            nqueens(board, row+1,n);
            board[row][j]='.';
        }

    }
}

int main(){
    int n = 5;
    vector<vector<char>>board(n);
    int row=0;
    for(int i =0; i<n; i++){
        for(int j=0; j<n; j++){
            board[i].push_back('.');
        }
    }
    
    nqueens(board, row,n);
    return 0;
}

//hi