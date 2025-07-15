#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solvemaze(vector<vector<int>>&maze,vector<string>&ans , int i , int j,int n,string current ){
    
    if(i<0 || j<0 || i>n-1 || j>n-1 || maze[i][j]==-1) return; // -1 shows that it is already visited
    if(maze[i][j]==0) return;

    if(i==n-1 && j==n-1){
        ans.push_back(current);
        return;
    }
    maze[i][j]=-1; //visited cell
    
    solvemaze(maze,ans,i+1,j,n, current+"D");
    solvemaze(maze,ans,i,j+1,n, current+"R");
    solvemaze(maze,ans,i,j-1,n, current+"L");
    solvemaze(maze,ans,i-1,j,n, current+"U");
    
    maze[i][j]=1;

}


int main(){
    vector<vector<int>>maze={{1,0,0,0},
                             {1,1,0,1},
                             {1,1,0,0},
                             {0,1,1,1}};
    vector<string>ans;
    
    int i=0, j=0;
    int n = maze.size();
   
    string current;
    if(maze[0][0]==0 || maze[n-1][n-1]==0){
        cout << "Invalid maze";
        return 0;
    }
    solvemaze(maze,ans,i,j,n, current);

    for(auto a:ans){
        for(auto b:a){
            cout << b << ' ' ;
        }
        cout << endl;
    }
    return 0;
}