int mod = 1e9 + 7;
long long num(Node *first)
{
    long long res = 0;
    Node *curr = first;
    while (curr)
    {
        res = res * 10 + curr->data;
        curr = curr->next;
    }
    return res;
}
long long multiplyTwoLists(Node *first, Node *second)
{
    long long l1 = num(first);
    long long l2 = num(second);
    long long res = (l1 * l2) % mod;
    return res;
}