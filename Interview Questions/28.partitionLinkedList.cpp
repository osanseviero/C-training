#include <iostream>
#include <stack>
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


Node * partition( Node * head, int x){
	Node * lessS = NULL;
	Node * lessE = NULL;

	Node * moreS = NULL;
	Node * moreE = NULL;

	Node * temp = head;
	while(temp != NULL){
		if(temp->data < x){
			if(lessS == NULL){
				lessS = temp;
				lessE = lessS;
			}
			else{
				lessE->next = temp;
				lessE = lessE->next;
			}

		}
		else{
			if(moreS == NULL){
				moreS = temp;
				moreE = moreS;
			}
			else{
				moreE->next = temp;
				moreE = moreE->next;
			}
		}
		temp = temp->next;
	
	}	

	if(lessS == NULL){
		return moreS;
	}

	moreE->next = NULL;
	lessE->next = moreS;
	return lessS;

}




int main(){
	Node * n1 = new Node(2);
	Node * n2 = new Node(5);
	Node * n3 = new Node(8);
	Node * n4 = new Node(0);
	Node * n5 = new Node(3);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = NULL;
	Node * n6 = partition(n1,3);
	print(n6);
	
	return 0;
} 