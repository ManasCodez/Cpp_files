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



void preorder(node* root){
    if(root ==NULL)return;

    cout << root->data << ' ';
    preorder(root->left);
    preorder(root->right);
}

int treesum(node* root){
    if(root == NULL)return 0;

    int left_sum = treesum(root->left);
    int right_sum = treesum(root->right);

    root->data += left_sum + right_sum;
    return root->data;
}



// replace the node with the sum of node val + all right subtree nodes + all left subtree nodes
int main(){

    vector<int>pre_seq= {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root = buildtree(pre_seq);

    treesum(root); //to find the treesum

    preorder(root); //to print tree
    
}
