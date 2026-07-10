#include <iostream>
#include<vector>
using namespace std;


class node{
    public:
    int data;
    node* left;
    node* right;

    node(int val){
        data = val;
        left = right = NULL;
    }
};

static int i =-1;
node* buildtree(vector<int>&pre_seq){
    i++;

    if(pre_seq[i]==-1) return NULL;

    node* root = new node(pre_seq[i]);
    root->left = buildtree(pre_seq);
    root->right = buildtree(pre_seq);
    return root;
}


int main(){

    vector<int>pre_seq= {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root = buildtree(pre_seq);

}