bool isCircular(Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next == head)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}
