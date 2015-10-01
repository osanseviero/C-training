/*
  Compare two linked lists A and B
  Return 1 if they are identical and 0 if they are not. 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int CompareLists(Node *headA, Node* headB)
{
  Node* temp1 = new Node();
  Node* temp2 = new Node();

  temp1 = headA;
  temp2 = headB;

  while(temp1->next != nullptr && temp2->next != nullptr){
    if(temp1->data != temp2->data) {
      return 0;
    }
    if(temp1==nullptr || temp2==nullptr){
        return 0;
    }

    temp1 = temp1->next;
    temp2 = temp2->next;
  }

  return 1;
}
