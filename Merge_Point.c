//hackerrank/data_structures/linked_list
int FindMergeNode(Node *headA, Node *headB)
{
    Node *temp1=headA,*temp2=headB;
    while(temp2->next!=NULL)
         temp2=temp2->next;
    temp2->next=headB;
    temp2=headB;
    while(temp1!=temp2){
        if(temp2==headB)
            temp1=temp1->next;
        temp2=temp2->next;
    }
    return temp1->data;
}

