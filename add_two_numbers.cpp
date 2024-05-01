ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
{
    if (!l1)
        return l2;
    if (!l2)
        return l1;
    int carry = 0;
    int sum = 0;
    ListNode *temp = NULL;
    ListNode *head = NULL;
    ListNode *tail = NULL;
    while (l1 || l2 || carry)
    {
        sum = carry + (l1 ? l1->val : 0) + (l2 ? l2->val : 0);
        carry = sum / 10;
        sum = sum % 10;
        temp = new ListNode(sum);
        if (!head)
        {
            head = temp;
        }
        else
        {
            tail->next = temp;
        }
        tail = temp;
        if (l1)
            l1 = l1->next;
        if (l2)
            l2 = l2->next;
    }
    return head;
}