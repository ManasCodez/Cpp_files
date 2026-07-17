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


void kth_level(node* root,int k, vector<int>&ans, int i){
    if(root ==NULL) return;
    if(i == k){
        ans.push_back(root->data);
        return;
    }
    
    kth_level(root->left,k,ans,i+1);
    kth_level(root->right,k,ans,i+1);
}


int main(){

    vector<int>pre_seq= {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root = buildtree(pre_seq);

    vector<int>ans;
    kth_level(root,3, ans,1);

    for(int i:ans){
        cout << i << ' ';
    }
    cout <<endl;
}