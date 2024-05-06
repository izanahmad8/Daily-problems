ListNode *reverse(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *forw = NULL;
    ListNode *curr = head;
    while (curr)
    {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    head = prev;
    return head;
}
ListNode *removeNodes(ListNode *head)
{
    head = reverse(head);
    int maxi = -1;
    ListNode *prev = NULL;
    ListNode *curr = head;
    while (curr)
    {
        maxi = max(maxi, curr->val);
        if (curr->val < maxi)
        {
            prev->next = curr->next;
            ListNode *temp = curr;
            curr = curr->next;
            delete (temp);
        }
        else
        {
            prev = curr;
            curr = curr->next;
        }
    }
    return reverse(head);
}