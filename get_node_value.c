int getNode(SinglyLinkedListNode *llist, int positionFromTail)
{
    int count = 0;
    SinglyLinkedListNode *ptr = llist;
    while (ptr->next)
    {
        ptr = ptr->next;
        count++;
    }
    ptr = llist;
    for (int i = 0; i < (count - positionFromTail); i++)
    {
        ptr = ptr->next;
    }
    return ptr->data;
}