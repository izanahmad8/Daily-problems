int sumOfLastN_Nodes(struct Node *head, int n)
{
    int sum = 0;
    int t_node = 0;
    Node *temp = head;
    while (temp)
    {
        t_node++;
        sum += temp->data;
        temp = temp->next;
    }
    temp = head;
    int rem = t_node - n;
    for (int i = 0; i < rem; i++)
    {
        sum -= temp->data;
        temp = temp->next;
    }
    return sum;
}