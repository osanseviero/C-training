#include <iostream>
#include <queue>
#include <stack>

class Node{
public:
	Node * left;
	Node * right;
	int data;

	Node(){
		left = NULL;
		right = NULL;
		data = -1;
	}
};

class Tree{
	public:
		Node * root;

		Tree(){
			root = NULL;
		}

		Node* getNewNode(int data){
			Node * elem = new Node();
			elem->data = data;
			return elem;
		}

		void insert(int data){
			if(this->root == NULL){
				this->root = getNewNode(data);
			}
			else{
				recursiveInsert(this->root, getNewNode(data));
			}
		}

		void recursiveInsert(Node* root, Node* elem){
			if(root->data >= elem->data){
				if(root->left == NULL){
					root->left = elem;
				}
				else{
					recursiveInsert(root->left, elem);
				}
			}
			else if(root->data < elem->data){
				if(root->right == NULL){
					root->right = elem;
				}
				else{
					recursiveInsert(root->right, elem);
				}
			}
		}

		int search(int data){
			return recursiveSearch(this->root, data);
		}

		int recursiveSearch(Node * root, int data){
			if(root == NULL){
				return 0;
			}
			else if(root->data == data){
				return 1;
			}
			else if(root->data < data){
				return recursiveSearch(root->right, data);
			}
			else{
				return recursiveSearch(root->left, data);
			}
		}

		int minElem(){
			if(root == NULL){
				return 0;
			}
			return findMinRecur(root);
		}

		int findMinIter(Node * root){
			while(root->left != NULL){
				root = root->left;
			}
			return root->data;
		}
		int findMinRecur(Node * root){
			if(root->left == NULL){
				return root->data;
			}
			return findMinRecur(root->left);
		}

		int findHeight(){
			return findHeightRecursive(this->root);
		}

		int findHeightRecursive(Node * root){
			if(root == NULL){
				return 0;
			}

			int lH = findHeightRecursive(root->left);
			int rH = findHeightRecursive(root->right);

			return std::max(lH, rH) + 1;
		}

		void levelOrder(){
			if(root == NULL){
				return;
			}
			std::queue<Node*> Q;
			Q.push(root);

			while(!Q.empty()){
				Node * curr = Q.front();
				std::cout << curr->data << std::endl;
				if(curr->left != NULL) Q.push(curr->left);
				if(curr->right != NULL) Q.push(curr->right);
				Q.pop();
			}

		}
};

Node* getNewNode(int data){
	Node * elem = new Node();
	elem->data = data;
	return elem;
}

void preOrder(Node * root){
	if(root == NULL) return;
	std::cout << root->data << std::endl;
	preOrder(root->left);
	preOrder(root->right);
}
  

void preOrderIter(Node * root){
	if(root == NULL){
		return;
	}
	std::stack<Node*> S;
	S.push(root);

	while(!S.empty()){
		Node * curr = S.top();
		std::cout << curr->data << std::endl;
		if(curr->right != NULL) S.push(curr->right);
		if(curr->left != NULL) S.push(curr->left);
		
		S.pop();
	}
}

int findMinRecur(Node * root){
	if(root->left == NULL){
		return root->data;
	}
	return findMinRecur(root->left);
}

void inOrder(Node * root){
	if(root == NULL) return;
	inOrder(root->left);
	std::cout << root->data << std::endl;
	inOrder(root->right);
}

void postOrder(Node * root){
	if(root == NULL) return;
	postOrder(root->left);
	postOrder(root->right);
	std::cout << root->data << std::endl;
}

bool isSubtreeGreater(Node * root, int data){
	if(root == NULL){
		return true;
	}
	if(root->data > data
		&& isSubtreeGreater(root->left, data)
		&& isSubtreeGreater(root->right, data))
			return true;
	else{
		return false;
	}
}

bool isSubtreeLesser(Node * root, int data){
	if(root == NULL){
		return true;
	}
	if(root->data <= data
		&& isSubtreeLesser(root->left, data)
		&& isSubtreeLesser(root->right, data))
			return true;

	else{
		return false;
	}
}

bool isBstUtil(Node * root, int min, int max){
	if(root == NULL){
		return true;
	}
	if(root->data > min && root->data < max
		&& isBstUtil(root->left, min, root->data)
		&& isBstUtil(root->right, root->data, max))
			return true;
	else{
		return false;
	}
}

bool isBinarySearch(Node * root){
	return isBstUtil(root, INT_MIN, INT_MAX);
}

Node * deleteNode(Node * root, int data){
	if(root == NULL) return root;
	else if(data < root->data) root->left = deleteNode(root->left, data);
	else if(data>root->data) root->right = deleteNode(root->right, data);

	// After finding it
	else{
		// No child
		if(root->left == NULL && root->right== NULL){
			delete root;
			root = NULL;
		}

		// Just child at right
		else if(root->left == NULL){
			Node* temp = root;
			root = root->right;
			delete temp;
		}

		// Just child at left
		else if(root->left == NULL){
			Node* temp = root;
			root = root->left;
			delete temp;
		}

		// Two children
		else{
			Node* temp = getNewNode(findMinRecur(root->right));
			root->data = temp->data;
			root->right = deleteNode(root->right, temp->data);
		}
		
	}
	return root;







}


int main(){
	Node * root = new Node();
	root->data = 5;

	Tree bst;
	bst.root = root;
	bst.insert(10);
	bst.insert(3);
	bst.insert(4);
	bst.insert(1);
	bst.insert(11);
	//std::cout << bst.search(25) << std::endl;
	//std::cout << bst.minElem() << std::endl;
	//std::cout << bst.findHeight() << std::endl;
	//bst.levelOrder();
	//preOrderIter(root);
	//std::cout << isBinarySearch(root) << std::endl;
	//root->data = 100;
	//bst.root = root;
	//std::cout << isBinarySearch(root) << std::endl;

	bst.levelOrder();
	bst.root = deleteNode(bst.root, 5);
	bst.levelOrder();
	
	return 0;
}