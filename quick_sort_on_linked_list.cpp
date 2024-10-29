struct Node *getTail(struct Node *head)
{
    struct Node *cur = head;
    while (cur != NULL && cur->next != NULL)
    {
        cur = cur->next;
    }
    return cur;
}
struct Node *partition(struct Node *head, struct Node *tail)
{
    struct Node *cur = head->next;
    struct Node *pivot = head;
    struct Node *prev = head;
    while (cur != tail->next)
    {
        if (pivot->data > cur->data)
        {
            swap(prev->next->data, cur->data);
            prev = prev->next;
        }
        cur = cur->next;
    }
    swap(prev->data, pivot->data);
    return prev;
}
void solveSort(struct Node *head, struct Node *tail)
{
    if (head == NULL || head == tail)
        return;
    struct Node *pivot = partition(head, tail);
    solveSort(head, pivot);
    solveSort(pivot->next, tail);
}
struct Node *quickSort(struct Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct Node *tail = getTail(head);
    solveSort(head, tail);
    return head;
}