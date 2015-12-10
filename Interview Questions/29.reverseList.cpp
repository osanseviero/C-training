#include <iostream>
using namespace std;

// Partition a linked list around a value n

/* Questions
	* Pointer to new head
*/

/* Description
	* Create two linked lists, one with smaller values, and other with bigger values.
	* Iterate over original linked list.
	* At the end, being careful with edge cases, just link both lists
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


Node * reverse( Node * head){
	Node * prev = NULL;
	Node * curr = head;
	Node * next;
	while(curr != NULL){
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	return prev;
	
}




int main(){
	Node * n1 = new Node(1);
	Node * n2 = new Node(2);
	Node * n3 = new Node(3);
	Node * n4 = new Node(2);
	Node * n5 = new Node(1);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;
	Node * n6 = reverse(n1);
	print(n6);
	
	return 0;
} 