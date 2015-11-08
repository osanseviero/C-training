#include <iostream>
#include <stack>
using namespace std;

// Return node kth to last element

/* Questions
	* Pointer to k should be returned
	* K is defined such that if k=0, it is the last element, k=1 is one to last
	* You do not have the size of the list
*/

/* Description
	* Use recursion O(n). Go to end, return 1 to increase counter until count==k
		* Can add wrapperclass to keep control of value
	* Iterative: Two pointers k elements apart, move them together until p2 hits end O(n) but O(1) space
	* Iterative 2: Count elements, and then go to n-k element. O(2n)
	* Iterative 3: Use a stack, put the elements, pop the first k elements
*/



class Node {
	public:
		int data;	
		Node * next;
		Node();
		Node(int _data);
};

Node::Node(){
	next = nullptr;
}
Node::Node(int _data){
	data = _data;
	next = nullptr;
}

void print(Node * head){
	Node* item;
    item = head;
    while (item != nullptr)
    {
        std::cout << item->data << std::endl;
        item = item->next;
    }
}


/* Iterative solution with O(2n) */
Node* findK1(Node * head, int k){
	Node* temp = head;
	int n = 0;

	// Get size
	while(temp != NULL){
		temp = temp->next;
		n++;
	}

	// Traverse to the element
	int count2 = 0;
	temp = head;
	while(count2 < n-k-1){
		temp = temp->next;
		count2++;
	}

	return temp;
}

/* Iterative solution with O(n^2) and memory expensive O(n)*/
Node* findK2(Node * head, int k){
	Node* temp = head;

	stack<Node*> nodes;

	// Insert everything in array
	while(temp != NULL){
		temp = temp->next;
		nodes.push(temp);
	}

	while(k>=0){
		nodes.pop();
		k--;
	}

	return nodes.top();
}

/* Iterative solution using two pointers. O(n) time*/
Node * findK3(Node * head, int k){
	Node *p1 = head;
	Node *p2 = head;

	while(k>=0)
		p2 = p2->next;

	while(p2->next != NULL){
		p2 = p2->next;
		p1 = p1->next;
	}

	return p1;

}





int main(){
	Node * n1 = new Node(1);
	Node * n2 = new Node(2);
	Node * n3 = new Node(3);
	Node * n4 = new Node(4);
	Node * n5 = new Node(5);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	print(n1);
	std::cout << "Print" << std::endl;
	Node * n6 = findK1(n1,3);
	print(n6);
	std::cout << "Print" << std::endl;
	n6 = findK1(n1,0);
	print(n6);

	std::cout << "Print" << std::endl;
	n6 = findK2(n1,3);
	print(n6);
	std::cout << "Print" << std::endl;
	n6 = findK2(n1,0);
	print(n6);


	std::cout << "Print" << std::endl;
	n6 = findK3(n1,3);
	print(n6);
	std::cout << "Print" << std::endl;
	n6 = findK3(n1,0);
	print(n6);



	return 0;
} 