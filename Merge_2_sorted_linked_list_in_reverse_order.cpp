struct Node *mergeResult(Node *node1, Node *node2)
{
    Node *p1 = node1;
    Node *p2 = node2;
    Node *newlink = newNode(-1);
    Node *p3 = newlink;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }
    return reverseList(newlink->next);
}
struct Node *reverseList(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    Node *prev = NULL, *next = NULL;
    Node *current = head;
    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}