#include <iostream>
#include<vector>
#include<map>
#include<queue>
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

//we will store both the node* and the horizontal distance of the node in queue
void topview(node* root){
    queue<pair<node*,int>>q;
    map<int,node*>top;

    q.push({root,0});
    //total time complexity is O(nlogn)
    while(q.size() >0 ){
        auto curr = q.front();
        cout  <<curr.first->data <<' ' << "distance: " << curr.second << endl;
        q.pop();
        
        if(top.find(curr.second) == top.end()){ //time complexity of find is O(logn)
            top[curr.second] = curr.first;
        }

        if(curr.first->left != NULL) q.push({curr.first->left, curr.second-1});
        if(curr.first->right != NULL) q.push({curr.first->right,curr.second+1});
    }
    cout << endl;

    cout << "Topview of the Binary Tree: " << endl;
    for(auto i :top){
        cout << i.second->data << ' ';
    }
}

int main(){

    // vector<int>pre_seq= {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    vector<int>pre_seq= {1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1};
    node* root = buildtree(pre_seq);
    topview(root);
}