#include <iostream>
#include<set>
#include<unordered_map>
#include<vector>
using namespace std;


bool is_possible(vector<vector<int>>&grid,int a,int b,int pre_i,int pre_j){
        
        int x = abs(pre_i-a);
        int y = abs(pre_j-b);
        if(x==1 && y==2 || x==2 && y==1){
            return true;
        }
        return false;
    }


    bool knight_moves(vector<vector<int>>&grid,int n,int pre_i,int pre_j, unordered_map<int,pair<int,int>>&map){
        if(n== (grid.size()*grid.size()-1)){
            return true;
        }

        int a = map[n+1].first;
        int b = map[n+1].second;

        if(is_possible(grid,a,b,pre_i,pre_j)){
            return knight_moves(grid,n+1,a,b,map);
             
        }else{
            return false;
        }
        
    }



int main(){
    // vector<vector<int>>grid = {{0,3,6},{5,8,1},{2,7,4}};   ////output false
    vector<vector<int>>grid = {{0,11,16,5,20},
                               {17,4,19,10,15},
                               {12,1,8,21,6},
                               {3,18,23,14,9},
                               {24,13,2,7,22}}; ////output true
    if(grid[0][0]!=0) return false;
        unordered_map<int,pair<int,int>>map;

        for(int i=0; i<grid.size(); i++){
            for(int j=0; j<grid[0].size();j++){
                map[grid[i][j]] = {i,j};
            }
        }

    cout <<  knight_moves(grid,0,0,0,map);
}