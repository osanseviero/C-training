/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
void ReversePrint(Node *head)
{
  if(head==nullptr){
    return 0;
  }
  ReversePrint(head->next);
  std::cout << head->data << std::endl;
}
