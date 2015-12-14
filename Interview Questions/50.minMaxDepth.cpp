#include <iostream>
using namespace std;

/*
 Find min and max depth of a tree
*/
struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


int maxDepth(TreeNode*root){
	if(root==NULL){
		return 0;
	}
	int left = maxDepth(root->left);
	int right = maxDepth(root->right);
	return max(left,right);

}


int minDepth(TreeNode* root) {
    if(root==NULL){
        return 0;
    }
    if(root->left == NULL && root->right != NULL){
        return minDepth(root->right)+1;
    }
    if(root->left != NULL && root->right == NULL){
        return minDepth(root->left)+1;
    }
    
    int left = minDepth(root->left);
    int right = minDepth(root->right);
    return min(left,right)+1;
}



int main(){
    struct TreeNode *example = new TreeNode(5);
    struct TreeNode *example1 = new TreeNode(10);
    std::cout << minDepth(example) << std::endl;
    std::cout << maxDepth(example) << std::endl;
    return 0;
}