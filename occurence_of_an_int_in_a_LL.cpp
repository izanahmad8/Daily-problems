int count(struct node *head, int search_for)
{
    node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        if (tmp->data == search_for)
        {
            count++;
        }
        tmp = tmp->next;
    }
    return count;
}