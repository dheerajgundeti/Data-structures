//hackerrank/datastructures/linked_list
Node* Reverse(Node *head)
{
    Node *temp1,*temp2,*temp3;
    temp1=head;
    temp2=NULL;
    while(temp1!=NULL){
        temp3=temp1->next;
        temp1->next=temp2;
        temp2=temp1;
        temp1=temp3;
    }
    head=temp2;
    return head;   
}
