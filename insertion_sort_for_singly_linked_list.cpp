Node *insertionSort(struct Node *ptr)
{
    if (ptr == NULL || ptr->next == NULL)
    {
        return ptr;
    }
    struct Node *dummy = new Node(0);
    dummy->next = ptr;
    struct Node *toInsert, *preInsert = NULL;
    while (ptr != NULL && ptr->next != NULL)
    {
        if (ptr->data <= ptr->next->data)
        {
            ptr = ptr->next;
        }
        else
        {
            toInsert = ptr->next;
            preInsert = dummy;
            while (preInsert->next->data < toInsert->data)
            {
                preInsert = preInsert->next;
            }
            ptr->next = toInsert->next;
            toInsert->next = preInsert->next;
            preInsert->next = toInsert;
        }
    }
    return dummy->next;
}