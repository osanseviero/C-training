/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
	Node *tail = new Node
	tail->next = nullptr;
	tail->data = data;
	Node * elt = head;

	if(elt == nullptr){
		head = tail;
	}
	else{
		while(elt->next != nullptr){
			elt = elt->next;
		}
		elt->next = tail;
	}

	return head;
}
