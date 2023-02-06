SinglyLinkedListNode *deleteNode(SinglyLinkedListNode *llist, int position)
{
    SinglyLinkedListNode *temp, *ptr = llist;
    int i;
    if (position == 0)
    {
        llist = ptr->next;
        free(ptr);
        return llist;
    }
    for (i = 0; i < position; i++)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    free(ptr);
    return llist;
}