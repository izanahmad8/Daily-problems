ListNode *reverse(ListNode *head)
{
    ListNode *prev = NULL, *forw = NULL;
    ListNode *curr = head;
    while (curr)
    {
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    return prev;
}
ListNode *doubleIt(ListNode *head)
{
    head = reverse(head);
    int carry = 0;
    ListNode *head1 = NULL;
    ListNode *tail1 = NULL;
    ListNode *temp = NULL;
    while (head)
    {
        int prod = 1;
        prod = head->val * 2 + carry;
        carry = prod / 10;
        prod = prod % 10;
        temp = new ListNode(prod);
        if (!head1)
        {
            head1 = temp;
        }
        else
        {
            tail1->next = temp;
        }
        tail1 = temp;
        head = head->next;
    }
    if (carry > 0)
    {
        temp = new ListNode(carry);
        tail1->next = temp;
        tail1 = temp;
    }
    return reverse(head1);
}