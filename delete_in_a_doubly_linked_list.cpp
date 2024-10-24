Node *deleteNode(Node *head, int x)
{
    if (x == 1)
    {
        head = head->next;
        head->prev = NULL;
        return head;
    }
    Node *temp = head;
    for (int i = 1; i < x; i++)
    {
        temp = temp->next;
    }
    temp->prev->next = temp->next;
    if (temp->next)
    {
        temp->next->prev = temp->prev;
    }
    return head;
}