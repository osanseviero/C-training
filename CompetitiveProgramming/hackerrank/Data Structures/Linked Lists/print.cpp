/*
  Print elements of a linked list on console 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void Print(Node *head)
{
	Node * elt = new Node;
	for(elt = head; elt != nullptr; elt= elt->next){
		cout << elt->data << endl;
	}
}