Node *deleteK(Node *head, int K)
{
    if (K == 1)
        return NULL;
    Node *temp = head;
    Node *prev = NULL;
    int i = 0;
    while (temp != NULL)
    {
        Node *curr = temp->next;
        i++;
        if (i == K)
        {
            prev->next = curr;
            delete (temp);
            i = 0;
        }
        prev = temp;
        temp = curr;
    }
    return head;
}