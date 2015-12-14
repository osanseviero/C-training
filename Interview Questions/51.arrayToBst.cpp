#include <iostream>
#include <vector>
using namespace std;

/*
 Given a sorted (increasing order) array with unique integer elements, write an
algorithm to create a binary search tree with minimal height.
*/


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode * minimalBST(vector<int> arr, int start ,int end){
    if(end<start){
        return NULL;
    }

    // Insert middle element
    int mid = (start+end)/2;
    TreeNode * n = new TreeNode(arr[mid]);

    // Divide array in two
    n->left = minimalBST(arr, start, mid-1);
    n->right = minimalBST(arr,mid+1,end);

    return n;
}


TreeNode * minimalBST(vector<int> arr){
    return minimalBST(arr, 0, arr.size()-1);
}


int main(){
    vector<int> test;
    test.push_back(1);
    test.push_back(2);
    test.push_back(3);
    TreeNode* t = minimalBST(test);
    cout << t->val;
    cout << t->left->val;
    return 0;
}