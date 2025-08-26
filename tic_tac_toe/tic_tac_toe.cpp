#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool iswin(vector<vector<char>>& board) {
    int n = board.size();

    // horizontal & vertical
    for(int i=0; i<n; i++){
        int xRow=0,oRow=0, xCol=0,oCol=0;
        for(int j=0; j<n; j++){
            if(board[i][j]=='X') xRow++;
            if(board[i][j]=='O') oRow++;
            if(board[j][i]=='X') xCol++;
            if(board[j][i]=='O') oCol++;
        }
        if(xRow==n || xCol==n){
            cout << "You Won!!" << endl;
            return true;
        }
        if(oRow==n || oCol==n){
            cout << "Computer Won!!" << endl;
            return true;
        }
    }

    // main diagonal
    int x=0,o=0;
    for(int i=0; i<n; i++){
        if(board[i][i]=='X') x++;
        if(board[i][i]=='O') o++;
    }
    if(x==n){
        cout << "You Won!!" << endl;
        return true;
    }
    if(o==n){
        cout << "Computer Won!!" << endl;
        return true;
    }

    // anti-diagonal
    x=0; o=0;
    for(int i=0; i<n; i++){
        if(board[i][n-1-i]=='X') x++;
        if(board[i][n-1-i]=='O') o++;
    }
    if(x==n){
        cout << "You Won!!" << endl;
        return true;
    }
    if(o==n){
        cout << "Computer Won!!" << endl;
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
    cout << "Game Drawn !!" << endl;
    return true;
}


pair<int,int>ifcritical(vector<vector<char>>&board){
    
    for(int i=0; i<board.size();i++){// for horizontal checking(for computer win)
        int o=0;
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

    for(int i=0; i<board.size();i++){// for vertical checking(for computer win)
        int o=0;
        for(int j=0; j<board.size();j++){ 
            if(board[j][i] == 'O') o++;
        }
        if(o==2){
            for(int k=0; k<board.size();k++){
                if(  board[k][i]=='#'){
                    return {k,i};
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


    

    for(int i=0; i<board.size();i++){// for vertical checking(for player win)
        int x=0,o=0;
        for(int j=0; j<board.size();j++){ 
            if(board[j][i] == 'X') x++;
        }
        if(x==2){
            for(int k=0; k<board.size();k++){
                if(board[k][i]=='#'){
                    return {k,i};
                }
            }
        }
    }


    // diagonal checking for computer win
    int o=0;
    for(int i=0; i<board.size();i++){
        if(board[i][i] == 'O') o++;
    }
    if(o==2){
        for(int i=0; i<board.size();i++){
            if(board[i][i]=='#') return {i,i};
        }
    }


    //anti diagonal checking for computer 
    o=0;
    int n = board.size();
    for(int i=0; i<board.size();i++){
        if(board[i][n-1-i] == 'O') o++;
    }
    if(o==2){
        for(int i=0; i<board.size();i++){
            if( board[i][n-i-1] =='#' ){
                return {i,n-i-1};
            }
        }
    }
    

    //diagonal check if player is winning 
    int  x=0;
    for(int i=0; i<board.size();i++){
        if(board[i][i] == 'X') x++;
    }
    if(x==2){
        for(int i=0; i<board.size();i++){
            if( board[i][i] =='#' ){
                return {i,i};
            }
        }
    }



    //anti diagonal checking if player is winning 
    
    x=0;
    for(int i=0; i<board.size();i++){
        if(board[i][n-1-i] == 'X') x++;
    }
    if(x==2){
        for(int i=0; i<board.size();i++){
            if( board[i][n-i-1] =='#' ){
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

void tic_tac_toe(vector<vector<char>>&board){
    
    int i,j;
    
    cout << "Enter your move as X in (i,j) index form: " ;
    cin >>i >>j;
    if(i < 0 || i >= 3 || j < 0 || j >= 3 || board[i][j] != '#') {
        cout << "Invalid move, try again!\n";
        return;
    }else{
        board[i][j] = 'X';
    }
    
    cout <<"Your move: "<<endl;
    printboard(board);

    if(iswin(board) || isfill(board)){
        return;
    }


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
    cout << "# means a empty space where you can make your move"<<endl;
    cout << "0 <= i,j <=2"<<endl;
    
    vector<vector<char>>board(3,vector<char>(3,'#'));
    printboard(board);
    while((!isfill(board)) && !iswin(board)){
        tic_tac_toe(board);
    }

    bool play = true;
    while(play){
        char y;
        cout << "Want to retry? Enter y or n: ";
        cin >> y;
        if(y=='n') break;
        
        board = vector<vector<char>>(3, vector<char>(3, '#'));
        while((!isfill(board)) && !iswin(board)){
            tic_tac_toe(board);
    }
}
    return 0;
}