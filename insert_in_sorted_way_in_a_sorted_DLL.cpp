Node *sortedInsert(Node *head, int x)
{
    Node *newNode = new Node();
    newNode->data = x;
    if (!head)
    {
        return newNode;
    }
    if (head->data > x)
    {
        newNode->next = head;
        head->prev = newNode;
        return newNode;
    }
    Node *curr = head;
    Node *temp = NULL;
    while (curr)
    {
        if (curr->data <= x)
        {
            temp = curr;
        }
        curr = curr->next;
    }
    newNode->next = temp->next;
    newNode->prev = temp;
    temp->next = newNode;
    if (newNode->next)
    {
        newNode->next->prev = newNode;
    }
    return head;
}