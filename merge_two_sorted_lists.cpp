ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (!list1)
        return list2;
    if (!list2)
        return list1;
    ListNode *res;
    if (list1->val < list2->val)
    {
        res = list1;
        res->next = mergeTwoLists(res->next, list2);
    }
    else
    {
        res = list2;
        res->next = mergeTwoLists(list1, res->next);
    }
    return res;
}