#include <iostream>
#include <stack>
using namespace std;

/*
Given a binary search tree, write a function kthSmallest to find the kth smallest element in it.

Note: 
You may assume k is always valid, 1 ≤ k ≤ BST's total elements.
*/
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


int kthSmallest(TreeNode*root, int k){
  TreeNode * temp = root;
  stack<TreeNode*> s;
  
  while((!s.empty()) || (temp != NULL)){
    if(temp != NULL){
      s.push(temp);
      temp = temp->left;
    }
    else{
      TreeNode * t = s.top(); s.pop();
      k--;
      if(k==0){
        return t->val;
      }
      temp = t->right;
    }
  }
}





int main(){
    struct TreeNode *example = new TreeNode(5);
    struct TreeNode *example1 = new TreeNode(10);
    example->left = example1;
    std::cout << kthSmallest(example,1) << std::endl;
    return 0;
}