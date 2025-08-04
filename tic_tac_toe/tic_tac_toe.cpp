#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool iswin(vector<vector<char>>&board){
    
}


void randomfill(vector<vector<char>>&board){
    for(int i=0; i<board.size();i++){
        for(int j=0; j<board.size();j++){
            if(board[i][j] == '#') {
                board[i][j] = 'O';
                return;
            }
        }
    }
}

bool isfill(vector<vector<char>>&board){
    for(int i=0; i<board.size();i++){
        for(int j =0; j<board.size();j++){
            if(board[i][j]=='#') return false;
        }
    }
    return true;
}


pair<int,int>ifcritical(vector<vector<char>>&board){
    
    for(int i=0; i<board.size();i++){// for horizontal checking
        int x=0,o=0;
        for(int j=0; j<board.size();j++){ 
            if(board[i][j] == 'X') x++;
            else if(board[i][j] == 'O') o++;
        }
        if(x==2){
            for(int k=0; k<board.size();k++){
                if(board[i][k] != 'X' && board[i][k]=='#'){
                    return {i,k};
                }
            }
        }

        if(o==2){
            for(int k=0; k<board.size();k++){
                if(board[i][k] != 'O' && board[i][k]=='#'){
                    return {i,k};
                }
            }
        }
    }


    for(int i=0; i<board.size();i++){ // for vertical checking
        int x=0,o=0;
        for(int j=0; j<board.size();j++){
            if(board[j][i] == 'X') x++;
            else if(board[j][i] == 'O') o++;
        }
        if(x==2){
            for(int k=0; k<board.size();k++){
                if(board[k][i] != 'X' && board[k][i] == '#'){
                    return {k,i};
                }
            }
        }
        if(o==2){
            for(int k=0; k<board.size();k++){
                if(board[k][i] != 'O' && board[k][i]=='#'){
                    return {k,i};
                }
            }
        }
    }


    //for diagonal checking
    int x=0,o=0;
    for(int i=0; i<board.size();i++){
        if(board[i][i] == 'X') x++;
        else if(board[i][i] == 'O') o++;
    }
    if(x==2){
        for(int i=0; i<board.size();i++){
            if(board[i][i] != 'X' && board[i][i]=='#') return {i,i};
        }
    }else if(o==2){
        for(int i=0; i<board.size();i++){
            if(board[i][i] != 'O' && board[i][i]=='#') return {i,i};
        }
    }


    //for anti diagonal
    x=0,o=0;
    int n = board.size();
    for(int i=0; i<board.size();i++){
        
        if(board[i][n-1-i] == 'X') x++;
        else if(board[i][n-1-i] == 'O') o++;
    }
    if(x==2){
        for(int i=0; i<board.size();i++){
            if(board[i][n-1-i] != 'X' && board[i][n-1-i] =='#' ){
                return {i,n-i-1};
            }
        }
    }
    if(o==2){
        for(int i=0; i<board.size();i++){
            if(board[i][n-1-i] != 'O' && board[i][n-i-1] =='#' ){
                return {i,n-i-1};
            }
        }
    }

    return {-1,-1};
}

void printboard(vector<vector<char>>&board){
    for(auto i:board){
        for(auto j :i){
            cout << j << ' ';
        }
        cout << endl;
    }
    cout <<endl;
    return;
}

void tic_tac_toe(vector<vector<char>>&board,int& n){
    int i,j;
    cout << "Enter your first move as X in (i,j) index form: " ;
    cin >>i >>j;
    if(board[i][j] == 'O'){
        cout << "Invalid move try another one! " << endl;
        return;
    }else{
        board[i][j] = 'X';
    }
    n++;
    printboard(board);

    auto a=ifcritical(board);
    if(a.first ==-1 && a.second ==-1 ){ // not critical
        randomfill(board);
    }else{//critical
        board[a.first][a.second] = 'O';
    }
    printboard(board);
}

int main(){
    vector<vector<char>>board(3,vector<char>(3,'#'));
    int n=0;
    while((!isfill(board)) || iswin(board)){
    tic_tac_toe(board,n);
    }

    return 0;
}