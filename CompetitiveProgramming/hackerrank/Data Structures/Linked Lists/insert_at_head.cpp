/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
  Node * elt = head;
  Node *new_head = new Node();
  new_head->data = data;


  if(elt= nullptr){
  	new_head->next = NULL;
  }
  else{
  	new_head->next = head;
  }
  head = new_head;
  return head;
}
