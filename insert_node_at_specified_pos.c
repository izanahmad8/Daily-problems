SinglyLinkedListNode *insertNodeAtPosition(SinglyLinkedListNode *llist, int data, int position)
{
    SinglyLinkedListNode *temp = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    SinglyLinkedListNode *ptr = llist;
    int i;
    for (i = 0; i < position - 1; i++)
    {
        ptr = ptr->next;
    }
    temp->data = data;
    temp->next = ptr->next;
    ptr->next = temp;
    return llist;
}