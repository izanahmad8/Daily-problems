int getMiddle(Node *head)
{
    int count = 0, i = 1;
    Node *tmp = head;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    if (count == 1)
    {
        return head->data;
    }
    tmp = head;
    while (i != count / 2)
    {
        tmp = tmp->next;
        i++;
    }
    return tmp->next->data;
}