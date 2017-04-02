//hackerrank/data_structures/linkedlist
int CompareLists(Node *headA, Node* headB)
{
    Node *tempa=headA,*tempb=headB;
    while(tempa->data==tempb->data){
        tempa=tempa->next;
        tempb=tempb->next;
        if(tempa==NULL && tempb==NULL)
        return 1;       
        if(tempa==NULL || tempb==NULL)
            break;
    }
        return 0;
}
