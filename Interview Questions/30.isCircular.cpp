#include <iostream>

using namespace std;

// Given a circular linked list, return the start of the loop

/* Description
	* Use the fast and slow technique to find a collision.
	* Move slow to head, then move both at same time. When they collide again, this is the node.
	* This is an implementation of Floyd Cycle detection
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


Node * isCircular( Node * head){
	Node * slow = head;
	Node * fast = head;

	while(fast != NULL && fast->next != NULL){
		slow = slow->next;
		fast = fast->next->next;
		if(fast == slow){
			break;
		}
	}

	if(fast == NULL || fast->next == NULL)
		return NULL;

	std::cout << "collision on " << fast->data << std::endl;
	slow = head;
	while(slow != fast){
		slow = slow->next;
		fast = fast->next;
	}
	return fast;
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
	n5->next = NULL;
	Node * n6 = isCircular(n1);
	if(n6 == NULL){
		std::cout << false << std::endl;
	}

	n5->next = n2;
	n6 = isCircular(n1);
	std::cout << n6->data << std::endl;
	
	return 0;
} 