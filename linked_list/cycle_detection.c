//hackerrank/data_structures/linked_list
int has_cycle(Node* head) {
    Node *temp1=head,*temp2= head;
    while (temp2!=NULL && temp2->next!=NULL){
        temp1=temp1->next;
        temp2=temp2->next->next;
        if (temp1==temp2){
            return 1;
        }
    }
    return 0;
}
   

