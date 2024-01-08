Node *segregate(Node *head)
{
    Node *dummy = new Node(-1);
    Node *tmp = dummy;
    int zero = 0, one = 0, two = 0;
    Node *ptr = head;
    while (ptr != NULL)
    {
        if (ptr->data == 0)
        {
            zero++;
        }
        else if (ptr->data == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
        ptr = ptr->next;
    }
    while (zero != 0)
    {
        tmp->next = new Node(0);
        tmp = tmp->next;
        zero--;
        ;
    }
    while (one != 0)
    {
        tmp->next = new Node(1);
        tmp = tmp->next;
        one--;
    }
    while (two != 0)
    {
        tmp->next = new Node(2);
        tmp = tmp->next;
        two--;
    }
    return dummy->next;
}