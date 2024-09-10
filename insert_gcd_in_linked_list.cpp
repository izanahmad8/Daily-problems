ListNode *insertGreatestCommonDivisors(ListNode *head)
{
    if (!head->next)
        return head;
    ListNode *curr = head;
    ListNode *forw = head->next;
    while (forw)
    {
        int gcd = __gcd(curr->val, forw->val);
        ListNode *temp = new ListNode(gcd);
        curr->next = temp;
        temp->next = forw;
        curr = forw;
        forw = forw->next;
    }
    return head;
}

// Recursion
ListNode *insertGreatestCommonDivisors(ListNode *head)
{
    if (!head->next)
        return head;
    ListNode *temp = insertGreatestCommonDivisors(head->next);
    int gcd = __gcd(head->val, head->next->val);
    ListNode *newNode = new ListNode(gcd);
    head->next = newNode;
    newNode->next = temp;
    return head;
}