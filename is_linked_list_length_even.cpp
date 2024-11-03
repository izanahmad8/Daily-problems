bool isLengthEven(struct Node **head)
{
    int cnt = 0;
    Node *curr = *head;
    while (curr)
    {
        cnt++;
        curr = curr->next;
    }
    return cnt % 2 == 0;
}