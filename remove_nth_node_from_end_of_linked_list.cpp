ListNode *removeNthFromEnd(ListNode *head, int n)
{
    ListNode *right = head;
    ListNode *left = head;
    for (int i = 0; i < n; i++)
    {
        right = right->next;
    }
    if (right == NULL)
    {
        return head->next;
    }
    while (right->next != NULL)
    {
        right = right->next;
        left = left->next;
    }
    left->next = left->next->next;
    return head;
}