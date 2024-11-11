int fractional_node(struct Node *head, int k)
{
    int cnt = 0;
    Node *curr = head;
    while (curr)
    {
        cnt++;
        curr = curr->next;
    }
    cnt--;
    cnt = ceil(cnt / k);
    curr = head;
    while (cnt--)
    {
        curr = curr->next;
    }
    return curr->data;
}