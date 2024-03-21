ListNode *mergeInBetween(ListNode *list1, int a, int b, ListNode *list2)
{
    ListNode *left = list1;
    ListNode *temp = list2;
    for (int i = 1; i < a; i++)
    {
        left = left->next;
    }
    ListNode *right = left->next;
    for (int i = 1; i <= b - a + 1; i++)
    {
        right = right->next;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = right;
    left->next = list2;
    return list1;
}