SinglyLinkedListNode *reverse(SinglyLinkedListNode *llist)
{
    SinglyLinkedListNode *prev, *curr, *forw;
    curr = llist;
    prev = NULL;
    forw = llist;
    while (curr != NULL)
    {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    return prev;
}