int getMiddle(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp)
    {
        count++;
        temp = temp->next;
    }
    temp = head;
    for (int i = 1; i <= count / 2; i++)
    {
        temp = temp->next;
    }
    return temp->data;
}