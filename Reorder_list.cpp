ListNode *reverse(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;
    while (curr)
    {
        ListNode *forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    return prev;
}
void reorderList(ListNode *head)
{
    if (!head || !head->next)
        return;
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *secondHalf = reverse(slow);
    ListNode *firstHalf = head;
    while (secondHalf->next)
    {
        ListNode *temp = firstHalf->next;
        firstHalf->next = secondHalf;
        firstHalf = temp;
        temp = secondHalf->next;
        secondHalf->next = firstHalf;
        secondHalf = temp;
    }
}