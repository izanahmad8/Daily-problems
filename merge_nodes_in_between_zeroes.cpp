ListNode *mergeNodes(ListNode *head)
{
    ListNode *temp = head->next;
    int sum = 0;
    ListNode *ans = new ListNode(0);
    ListNode *curr = ans;
    while (temp)
    {
        if (temp->val == 0)
        {
            curr->next = new ListNode(sum);
            curr = curr->next;
            sum = 0;
        }
        else
        {
            sum += temp->val;
        }
        temp = temp->next;
    }
    return ans->next;
}