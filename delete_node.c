//hackerrank/datastructures/linkedlist
Node* Delete(Node *head, int position)
{   int index=0;
    Node *temp=head,*temp1;
    if(position==0){
        head=temp->next;
    }else{
    while(index<position){
        temp1=temp;
        temp=temp->next;
        index++;
       }
       temp1->next=temp->next;   
    }
    return head;
}
