Node *removeDuplicates(Node *head)
{
    Node *ptr = head;
    if (head == NULL)
    {
        return NULL;
    }
    while (ptr != NULL && ptr->next != NULL)
    {
        if (ptr->data == ptr->next->data)
        {
            delete (ptr->next);
            ptr->next = ptr->next->next;
        }
        else
        {
            ptr = ptr->next;
        }
    }
    return head;
}