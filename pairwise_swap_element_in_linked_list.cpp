Node *pairWiseSwap(struct Node *head)
{
    if (head != NULL && head->next != NULL)
    {
        Node *temp1 = pairWiseSwap(head->next->next);
        Node *temp2 = head->next;
        head->next = temp1;
        temp2->next = head;
        head = temp2;
    }
    return head;
}