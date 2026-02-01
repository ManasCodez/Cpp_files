#include <iostream>
//---------------Leetcode 52----------------

class Solution {
public:
    bool checked(int i,int j,vector<vector<char>>&board){
        for(int a = 0;a<board[0].size(); a++){ //horizontal
            if(a!=j){
                if(board[i][a] == 'Q') return true;
            }
        }
        for(int a =0; a<board.size();a++){ //vertical
            if(a!=i){
                if(board[a][j] == 'Q') return true;
            }
        }

        int a,b;
        
        a=i-1; b=j-1;
        while(a>=0 && b>=0){ //diagonal (up side)
            if(board[a][b] == 'Q') return true;
            a--;b--;
        }

        a=i-1;b=j+1;
        while(a>=0 && b<board[0].size()){ //anti diagonal(up side)
            if(board[a][b] == 'Q') return true;
            a--;b++;
        }

        return false;
    }

    void placequeen(int i,vector<vector<char>>&board, int &c,int n){
        if(i==n){
            c++;
            return;
        }
        for(int j =0; j<board[0].size(); j++){
            
            if(!checked(i,j,board)){
                board[i][j] = 'Q';
                placequeen(i+1,board,c,n);
                board[i][j]='.';
            }
            
           
        }
    }


    int totalNQueens(int n) {
        int c = 0;
        vector<vector<char>>board(n,vector<char>(n,'.'));
        placequeen(0,board,c,n);
        return c;
    }
};