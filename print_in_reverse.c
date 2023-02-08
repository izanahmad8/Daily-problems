void reversePrint(SinglyLinkedListNode *llist)
{
    if (llist == NULL)
        return;
    else
    {
        reversePrint(llist->next);
        printf("%d\n", llist->data);
    }
}