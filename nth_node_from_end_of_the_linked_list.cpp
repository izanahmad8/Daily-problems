int getNthFromLast(Node *head, int n)
{
    Node *right = head;
    Node *left = head;
    for (int i = 0; i < n; i++)
    {
        if (right == NULL)
        {
            return -1;
        }
        right = right->next;
    }
    while (right != NULL)
    {
        right = right->next;
        left = left->next;
    }
    return left->data;
}