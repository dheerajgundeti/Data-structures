//hackerrank/datastructures/linked_list
void ReversePrint(Node *head)
{
   if(head==NULL)
       return;
    else
      ReversePrint(head->next);
        printf("%d\n",head->data);
}
