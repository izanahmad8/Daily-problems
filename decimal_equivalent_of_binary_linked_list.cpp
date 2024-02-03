long long unsigned int decimalValue(Node *head)
{
    long long unsigned int ans = 0;
    Node *ptr = head;
    while (ptr != NULL)
    {
        ans = (ans * 2 + ptr->data) % 1000000007;
        ptr = ptr->next;
    }
    return ans;
}