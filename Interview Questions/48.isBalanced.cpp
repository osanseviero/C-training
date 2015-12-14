#include <iostream>
using namespace std;

struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
int maxHeight(TreeNode * root){
  if(root == NULL){
    return 0;
  }
  int left = maxHeight(root->left);
  int right = maxHeight(root->right);

  return max(left,right)+1;

}


bool isBalanced(TreeNode * root){
  if(root==NULL){
    return true;
  }

  int left, right;
  // Find height of left
  left = maxHeight(root->left);

  // Find height of right
  right = maxHeight(root->right);

  // Compare
  if(abs(left-right)>1){
    return false;
  }
  // Repeat on left and right
  return isBalanced(root->left) && isBalanced(root->right);
}


int main(){
    struct TreeNode *example = new TreeNode(5);
    std::cout << isBalanced(example) << std::endl;
    struct TreeNode *example1 = new TreeNode(5);
    struct TreeNode *example2 = new TreeNode(5);
    example1->left = example2;
    example->left = example1;
    std::cout << isBalanced(example) << std::endl;
    return 0;
}