int findFirstNode(Node *head)
{
    Node *prev = head, *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        prev = prev->next;
        curr = curr->next->next;
        if (prev == curr)
        {
            break;
        }
    }
    if (prev != curr)
    {
        return -1;
    }
    prev = head;
    while (prev != curr)
    {
        prev = prev->next;
        curr = curr->next;
    }
    return curr->data;
}