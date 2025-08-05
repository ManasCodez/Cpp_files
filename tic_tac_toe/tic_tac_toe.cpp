#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool iswin(vector<vector<char>>&board){
    for(int i=0; i<board.size();i++){ // horizontal
        int x=0,o=0;
        for(int j=0; j<board.size();j++){
            if(board[i][j] == 'O') o++;
            else if(board[i][j] == 'X') x++;
        }
        if(o==3){
            cout << "Computer Won!!" << endl;
            return true;
        }else if(x==3){
            cout << "You Won!!" << endl;
            return true;
        }
    }

    for(int i=0; i<board.size();i++){ // vertical
        int x=0,o=0;
        for(int j=0; j<board.size();j++){
            if(board[j][i] == 'O') o++;
            else if(board[j][i] == 'X') x++;
        }
        if(o==3){
            cout << "Computer Won!!" << endl;
            return true;
        }else if(x==3){
            cout << "You Won!!" << endl;
            return true;
        }
    }



    int o=0,x=0;
    for(int i=0; i<board.size();i++){//diagonal
        if(board[i][i] =='O' ) o++;
        else if(board[i][i] =='X') x++;

    }
    if(o==3){
        cout << "Computer Won!!" << endl;
        return true;
    }
    if(x==3){
        cout << "You Won!!"<<endl;
        return true;
    }

    o=0,x=0;
    int n=board.size();
    for(int i=0; i<n;i++){
        if(board[i][n-i-1] =='O' ) o++;
        else if(board[i][n-i-1] =='X') x++;

    }
    if(o==3){
        cout << "Computer Won!!" << endl;
        return true;
    }
    if(x==3){
        cout << "You Won!!"<<endl;
        return true;
    }
    return false;
}


void randomfill(vector<vector<char>>&board){
    if(board[1][1] == '#'){//check center
        board[1][1] = 'O';
        return;
    }
    for(int i=0; i<board.size();i++){//first empty block
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
    cout << "Game Drawn !!";
    return true;
}


pair<int,int>ifcritical(vector<vector<char>>&board){
    
    for(int i=0; i<board.size();i++){// for horizontal checking(for computer win)
        int x=0,o=0;
        for(int j=0; j<board.size();j++){ 
            if(board[i][j] == 'O') o++;
        }
        if(o==2){
            for(int k=0; k<board.size();k++){
                if( board[i][k]=='#'){
                    return {i,k};
                }
            }
        }
    }

    for(int i=0; i<board.size();i++){// for horizontal checking(for player win)
        int x=0,o=0;
        for(int j=0; j<board.size();j++){ 
            if(board[i][j] == 'X') x++;
        }
        if(x==2){
            for(int k=0; k<board.size();k++){
                if(board[i][k]=='#'){
                    return {i,k};
                }
            }
        }
    }


    for(int i=0; i<board.size();i++){// for vertical checking(for computer win)
        int x=0,o=0;
        for(int j=0; j<board.size();j++){ 
            if(board[j][i] == 'X') x++;
        }
        if(x==2){
            for(int k=0; k<board.size();k++){
                if(  board[k][i]=='#'){
                    return {k,i};
                }
            }
        }
    }

    for(int i=0; i<board.size();i++){// for vertical checking(for player win)
        int x=0,o=0;
        for(int j=0; j<board.size();j++){ 
            if(board[j][i] == 'X') x++;
        }
        if(x==2){
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
    if(o==2){
        for(int i=0; i<board.size();i++){
            if(board[i][i]=='#') return {i,i};
        }
    }else if(x==2){
        for(int i=0; i<board.size();i++){
            if(board[i][i]=='#') return {i,i};
        }
    }
    


    //for anti diagonal
    x=0,o=0;
    int n = board.size();
    for(int i=0; i<board.size();i++){
        
        if(board[i][n-1-i] == 'X') x++;
        else if(board[i][n-1-i] == 'O') o++;
    }
    if(o==2){
        for(int i=0; i<board.size();i++){
            if( board[i][n-i-1] =='#' ){
                return {i,n-i-1};
            }
        }
    }else if(x==2){
        for(int i=0; i<board.size();i++){
            if(board[i][n-1-i] =='#' ){
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
    cout << "Enter your move as X in (i,j) index form: " ;
    cin >>i >>j;
    if(i < 0 || i >= 3 || j < 0 || j >= 3 || board[i][j] != '#') {
        cout << "Invalid move, try again!\n";
        return;
    }else{
        board[i][j] = 'X';
    }
    n++;
    cout <<"Your move: "<<endl;
    printboard(board);

    auto a=ifcritical(board);
    if(a.first ==-1 && a.second ==-1 ){ // not critical
        randomfill(board);
    }else{//critical
        board[a.first][a.second] = 'O';
    }
    cout << "Computer's move: " << endl;
    printboard(board);
}

int main(){
    cout << "Welcome my Friend" << endl;
    cout << "In the legendary Game of TIC TAC TOE" << endl;
    vector<vector<char>>board(3,vector<char>(3,'#'));
    int n=0;
    while((!isfill(board)) && !iswin(board)){
    tic_tac_toe(board,n);
    }
    

    return 0;
}