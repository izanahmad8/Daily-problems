Node *rotate(Node *head, int k)
{
    if (!head)
        return NULL;
    Node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = head;
    while (--k)
    {
        head = head->next;
    }
    Node *Newhead = head->next;
    head->next = NULL;
    return Newhead;
}