/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
	if(head == nullptr){
		return head;
	}
	if(position==0){
		return head->next;
	}
	Node * prev = new Node();
	Node * current = new Node();
	prev = head;
	current = head->next;
	int i = 0;
	while(current->next != nullptr){
		if(i==position-1){
			prev->next = current->next;
			break;
		}
		else{
			prev = current;
			current = current->next;
		}
		i++;
	}

	return head;

}
