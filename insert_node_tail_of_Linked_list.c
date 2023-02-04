SinglyLinkedListNode *insertNodeAtTail(SinglyLinkedListNode *head, int data)
{
    SinglyLinkedListNode *temp = (SinglyLinkedListNode *)malloc(sizeof(SinglyLinkedListNode));
    if (head == NULL)
    {
        temp->data = data;
        temp->next = NULL;
        head = temp;
        return head;
    }
    SinglyLinkedListNode *ptr = head;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    temp->data = data;
    temp->next = NULL;
    ptr->next = temp;
    return head;
}