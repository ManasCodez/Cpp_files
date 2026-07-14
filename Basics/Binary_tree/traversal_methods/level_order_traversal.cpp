#include <iostream>
#include<vector>
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

//for print in a single line
// void levelorder(node* root, queue<node*>&q){
//     q.push(root);
    
//     while(q.size()>0){
//         node* curr = q.front();
//         q.pop();
        
//         cout << curr->data <<' ';

//         if(curr->left !=NULL) q.push(curr->left);
//         if(curr->right !=NULL) q.push(curr->right);
//     }
//     cout << endl;
// }




//for printing a single level in a single line
void levelorder(node* root, queue<node*>&q){
    q.push(root);
    q.push(NULL);
    while(q.size()>0){
        node* curr = q.front();
        q.pop();
        if(curr == NULL){
            if(q.size()>0){
                cout << endl;
                q.push(NULL);
                continue;
            }
            else break;
        }
        cout << curr->data <<' ';

        if(curr->left !=NULL) q.push(curr->left);
        if(curr->right !=NULL) q.push(curr->right);
    }
    cout << endl;
}


int main(){
    queue<node*>q;
    vector<int>pre_seq= {1,2,4,-1,-1,5,-1,-1,3,6,-1,-1,7,-1,-1};
    node* root = buildtree(pre_seq);
    levelorder(root , q);
    

}