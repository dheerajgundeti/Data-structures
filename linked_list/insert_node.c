//hackerrank/datastructures/linkedlist
Node* InsertNth(Node *head, int data, int position)
{
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
     
    if (head == NULL) {
        return newNode;
    }

    if (position == 0) {
       newNode->next = head;
       return newNode;
    }

    Node *temp = head;
    while (position - 1 > 0) {
        temp = temp->next;
        position--;
    }

    newNode->next =temp->next;
    temp->next = newNode;

    return head;
 }
