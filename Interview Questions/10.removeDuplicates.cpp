#include <iostream>
#include <unordered_map>
using namespace std;

// Remove duplicates of unsorted linked list

/* Questions
	* Type of data of node: integer
	* You can use extra memory (hash map)
*/

/* Description
	* Using two pointers O(n^2) but less memory
	* Using hashmap O(n) but higher memory
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

void deleteDuplicates(Node * head){
	unordered_map<int,bool> table;
	Node *curr = head;
	Node *prev = NULL;

	while(curr != NULL){
		// Check if it is in the map
		if(table[curr->data]){
			prev->next = curr->next;
			curr = prev->next;
		}
		else{
			table[curr->data] = true;
			prev = curr;
			curr = curr->next;
		}
		

	}



}


int main(){
	Node * n1 = new Node(1);
	Node * n2 = new Node(2);
	Node * n3 = new Node(3);
	Node * n4 = new Node(2);
	Node * n5 = new Node(3);
	Node * n6 = new Node(2);
	Node * n7 = new Node(2);
	Node * n8 = new Node(2);
	Node * n9 = new Node(2);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = n7;
	n7->next = n8;
	print(n1);
	deleteDuplicates(n1);
	std::cout << "Print" << std::endl;
	print(n1);




	return 0;
} 