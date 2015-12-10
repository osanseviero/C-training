#include <iostream>
#include <stack>
using namespace std;

// Given a linked list of integers, check if it is a palindrome

/* Description
	* Option 1: Reverse linked list and compare the elements
	* Option 2: Use a stack 
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

void pushFront(Node ** head, int data){
	Node * n = new Node();

    n->data = data;
    n->next = *head;

    *head = n;
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
	Node *rev_head = NULL;

    for ( ; head != NULL; head = head->next )
    {
        pushFront(&rev_head, head->data); 
    }

    return rev_head;
}



bool isPalindrome( Node * head){
	Node * temp2 = head;
	Node * temp = reverse(head);

	while(temp != NULL){
		if(temp->data != temp2->data){
			return false;
		}
		temp = temp->next;
		temp2 = temp2->next;
	}

	return true;
}


bool isPalindrome2( Node * head){
	Node * slow = head;
	Node * fast = head;
	stack<int> temp;

	while(fast != NULL && fast->next != NULL){
		temp.push(slow->data);
		fast = fast->next->next;
		slow = slow->next;
	}

	if(fast != NULL){
		slow = slow->next;
	}

	while(slow != NULL){
		int top = temp.top(); temp.pop();
		if(top != slow->data){
			return false;
		}
		slow = slow->next;
	}
	return true;
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

	std::cout << "The list is palindrome? : " << isPalindrome2(n1) << std::endl;
	n5->data = 2;
	std::cout << "The list is palindrome? : " << isPalindrome2(n1) << std::endl;


	return 0;
} 