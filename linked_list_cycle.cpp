bool hasCycle(ListNode *head)
{
    ListNode *prev = head;
    ListNode *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        prev = prev->next;
        curr = curr->next->next;
        if (prev == curr)
        {
            return true;
        }
    }
    return false;
}