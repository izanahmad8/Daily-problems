bool areIdentical(struct Node *head1, struct Node *head2)
{
    while (head1 != NULL)
    {
        if (head1->data != head2->data)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    if (head2 == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool areIdentical(struct Node *head1, struct Node *head2)
{
    Node *p1 = head1;
    Node *p2 = head2;
    while (p1 && p2)
    {
        if (p1->data != p2->data)
        {
            return false;
        }
        p1 = p1->next;
        p2 = p2->next;
    }
    if ((!p1 && p2) || (p1 && !p2))
        return false;
    return true;
}