vector<ListNode *> splitListToParts(ListNode *head, int k)
{
    vector<ListNode *> ans(k);
    int size = 0;
    ListNode *temp = head;
    while (temp)
    {
        size++;
        temp = temp->next;
    }
    int split = size / k;
    int remain = size % k;
    temp = head;
    ListNode *ptr = temp;
    for (int i = 0; i < k; i++)
    {
        ListNode *p1 = temp;
        int currSize = split;
        if (remain > 0)
        {
            remain--;
            currSize++;
        }
        int j = 0;
        while (j < currSize)
        {
            ptr = temp;
            if (temp)
            {
                temp = temp->next;
            }
            j++;
        }
        if (ptr)
        {
            ptr->next = NULL;
        }
        ans[i] = p1;
    }
    return ans;
}