ListNode *removeZeroSumSublists(ListNode *head)
{
    int pSum = 0;
    ListNode *dummy = new ListNode(0);
    unordered_map<int, ListNode *> mp;
    dummy->next = head;
    mp[0] = dummy;
    while (head != NULL)
    {
        pSum += head->val;
        if (mp.find(pSum) != mp.end())
        {
            ListNode *start = mp[pSum];
            ListNode *temp = start;
            int cSum = pSum;
            while (temp != head)
            {
                temp = temp->next;
                cSum += temp->val;
                if (temp != head)
                {
                    mp.erase(cSum);
                }
            }
            start->next = head->next;
        }
        else
        {
            mp[pSum] = head;
        }
        head = head->next;
    }
    return dummy->next;
}