#include <iostream>
#include <climits>
using namespace std;

/*
    Implement a function to check if a binary tree is a binary search tree.
*/


struct node
{
    int data;
    node* left;
    node* right;
};

node* newNode(int data)
{
    node* temp = new node;
    temp->data = data;
    temp->left=temp->right=NULL;
    return temp;
}


bool isBST(node* root, int min = INT_MIN, int max = INT_MAX){
    // If null, it is bst
    if(root==NULL){
        return true;
    }

    if(root->data < min) return false;
    if(root->data > max) return false;

    return isBST(root->left, min, root->data) && isBST(root->right, root->data, max);

}

int main()
{
    node *root = newNode(1);
    cout << isBST(root) << endl;
    root->left = newNode(-5);
    cout << isBST(root) << endl;
    root->left = newNode(3);
    cout << isBST(root) << endl;
    return 0;
}