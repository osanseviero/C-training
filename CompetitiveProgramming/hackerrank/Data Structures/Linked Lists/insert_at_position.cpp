/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  Node * temp_head = head;
  Node * tran = new Node();
  tran = head;

  Node * insert = new Node();
  insert->data = data;

  int count = 0;

  // Empty list
  if(temp_head == nullptr){
    insert->next = NULL;
    head = insert;
    return head;
  }

  // Insert at head
  else if(position==0){
    insert->next = head;
    head = insert;
    return head;
  }

  // Tranverse and insert
  for(int i = 0; i<=position-2;i++){
    // If this is the last element
    if(tran->next == NULL){
      tran->next = insert;
      return head;
    }
    // We get to the next
    tran = tran->next;
  }

  insert->next = tran->next;
  tran->next = insert;

  return head;
}
