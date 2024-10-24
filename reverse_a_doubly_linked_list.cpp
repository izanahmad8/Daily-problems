DLLNode *reverseDLL(DLLNode *head)
{
    DLLNode *prev = NULL;
    DLLNode *curr = head;
    while (curr)
    {
        DLLNode *forw = curr->next;
        curr->next = prev;
        curr->prev = forw;
        prev = curr;
        curr = forw;
    }
    return prev;
}