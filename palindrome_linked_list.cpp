ListNode *reverse(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;
    while (curr != NULL)
    {
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
bool isPalindrome(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *last = reverse(slow);
    while (last != NULL)
    {
        if (head->val != last->val)
        {
            return false;
        }
        head = head->next;
        last = last->next;
    }
    return true;
}