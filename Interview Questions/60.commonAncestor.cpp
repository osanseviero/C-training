#include <iostream>
using namespace std;

/*
    Design an algorithm and write code to find the first common ancestor of 
    two nodes in a binary tree. 
    Avoid storing additional nodes in a data structure. 
    NOTE: This is not necessarily a binary search tree.

*/

struct TreeNode
{
    int data;
    TreeNode* left;
    TreeNode* right;
};

TreeNode* newNode(int data)
{
    TreeNode* temp = new TreeNode;
    temp->data = data;
    temp->left=temp->right=NULL;
    return temp;
}

bool covers(TreeNode* root, TreeNode* node){
    if(root==NULL) return false;
    if(root==node) return true;
    return covers(root->left, node)||covers(root->right,node);

}

TreeNode* commonAncestor(TreeNode* root, TreeNode* p, TreeNode* q){
    // If null root, return null
    if(root==NULL) return NULL;

    // If one is root, return root
    if((p==root)||(q==root)) return root;

    // Check if both are at left
    bool is_p_on_l = covers(root->left, p);
    bool is_q_on_l = covers(root->left, q);

    // If not, return root
    if(is_p_on_l != is_q_on_l) return root;

    // Else, traverse to the side
    TreeNode * child = is_p_on_l ? root->left : root->right;
    return commonAncestor(child, p, q);
}



int main(){
    TreeNode* n = newNode(5);
    TreeNode* p = newNode(30);
    TreeNode* q = newNode(20);
    n->left = p;
    n->right = q;
    cout << commonAncestor(n,p,q)->data << endl;


    return 0;
}