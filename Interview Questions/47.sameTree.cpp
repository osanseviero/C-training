#include <iostream>
using namespace std;


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool isSameTree(TreeNode* p, TreeNode* q) {
    if(!p && !q) return true;
    if((!p && q)|| (p && !q)) return false;
    if(p->val != q->val) return false;
    return isSameTree(p->left,q->left)&& isSameTree(p->right, q->right);
}


int main(){
    struct TreeNode *example = new TreeNode(5);
    struct TreeNode * example2 = new TreeNode(5);
    std::cout << isSameTree(example,example2) << std::endl;
    struct TreeNode * example3 = new TreeNode(10);
    std::cout << isSameTree(example,example3) << std::endl;
    return 0;
}