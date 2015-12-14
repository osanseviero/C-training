#include <iostream>
using namespace std;

/*
Write an algorithm to find the'next'node (i.e., in-order successor) of a given node
in a binary search tree. You may assume that each node has a link to its parent.
*/


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode *parent;
      TreeNode(int x) : val(x), left(NULL), right(NULL), parent(NULL) {}
};


TreeNode* leftMost(TreeNode* root){
    if(root==NULL) return NULL;
    TreeNode* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp;

}

TreeNode* inOrderSucc(TreeNode* root){
    TreeNode* x;

    if(root==NULL) return NULL;
    if(root->right != NULL) return leftMost(root->right);
    else{
        TreeNode* q = root;
        TreeNode* x = q->parent;
        while(x!=NULL && x->left != NULL){
            q = x;
            x = x->parent;
        }
    }
    
    return x;
}

int main(){
    struct TreeNode *example = new TreeNode(5);
    struct TreeNode *example1 = new TreeNode(10);
    example1->parent=example;
    example->right = example1;
    cout << inOrderSucc(example)->val << endl;
    return 0;
}