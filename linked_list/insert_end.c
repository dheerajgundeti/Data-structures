//hackerrank/datastructures/linkedlist
Node* Insert(Node *head,int data)
{
  Node *newnode;
    newnode=new Node;
    newnode->data=data;
    newnode->next=head;
    head=newnode;
    return head;
}
