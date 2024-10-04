Node *reverse(Node *head)
{
    if (!head || !head->next)
        return head;
    Node *prev = head;
    Node *curr = head->next;
    while (curr != head)
    {
        Node *forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    curr->next = prev;
    return prev;
}

Node *deleteNode(Node *head, int key)
{
    Node *temp = head;
    if (head->data == key)
    {
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = head->next;
        return head->next;
    }
    do
    {
        if (temp->next->data == key)
        {
            temp->next = temp->next->next;
            return head;
        }
        temp = temp->next;
    } while (temp != head);
}