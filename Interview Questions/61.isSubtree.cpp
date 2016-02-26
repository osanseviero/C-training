#include <iostream>
using namespace std;

/*
    You have two very large binary trees: T1, with millions of nodes, and T2, 
    with hundreds of nodes. Create an algorithm to decide if T2 is a subtree of Tl. 
    A tree T2 is a subtree of T1 if there exists a node n in Tl such that the subtree of n is identical to T2. 
    That is, if you cut off the tree at node n, the two trees would be identical.

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


bool matchTree(TreeNode *t1, TreeNode *t2){
    if(t1==NULL && t2==NULL) return true;
    if(t1==NULL || t2==NULL) return false;
    if(t1->data != t2->data) return false;
    return matchTree(t1->left,t2->left)&&matchTree(t1->right,t2->right);
}

bool subtree(TreeNode* t1, TreeNode* t2){
    if(t1==NULL || t2==NULL) return false;
    if(t1->data == t2->data) return matchTree(t1,t2);

    return subtree(t1->left, t2)||subtree(t1->right, t2);

}


int main(){
    TreeNode* n = newNode(5);
    TreeNode* p = newNode(30);
    TreeNode* q = newNode(20);
    n->left = p;
    n->right = q;
    cout << subtree(n,p) << endl;


    return 0;
}