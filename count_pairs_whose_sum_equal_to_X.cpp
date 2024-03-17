int countPairs(struct Node *head1, struct Node *head2, int x)
{
    unordered_map<int, int> mp;
    while (head1 != NULL)
    {
        mp[head1->data]++;
        head1 = head1->next;
    }
    int count = 0;
    while (head2 != NULL)
    {
        if (mp.find(x - head2->data) != mp.end())
        {
            count++;
        }
        head2 = head2->next;
    }
    return count;
}