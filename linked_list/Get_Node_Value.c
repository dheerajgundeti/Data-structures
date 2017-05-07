//hackerrank/data_structures/linkedlist
int GetNode(Node *head,int positionFromTail)
{
   Node *temp=head;
    int size=0;
    while(temp!=NULL)
        temp=temp->next,size++;
    temp=head;
    for(int i=1;temp!=NULL;i++){
        if((size-positionFromTail)==i)
            return temp->data;
        temp=temp->next;
    }
    return 0;
}
