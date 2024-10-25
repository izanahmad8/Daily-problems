Node *compute(Node *head)
{
    if (!head || !head->next)
        return head;
    Node *nextNode = compute(head->next);
    if (nextNode->data > head->data)
    {
        return nextNode;
    }
    head->next = nextNode;
    return head;
}