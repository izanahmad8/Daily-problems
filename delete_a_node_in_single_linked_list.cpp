Node *deleteNode(Node *head, int x)
{
    Node *ptr = head;
    Node *temp;
    if (x == 1)
    {
        temp = ptr->next;
        free(ptr);
        return temp;
    }
    for (int i = 2; i < x && ptr != NULL; i++)
    {
        ptr = ptr->next;
    }
    if (ptr->next == NULL)
    {
        return NULL;
    }
    else
    {
        temp = ptr->next;
        ptr->next = ptr->next->next;
        free(temp);
    }
    return head;
}