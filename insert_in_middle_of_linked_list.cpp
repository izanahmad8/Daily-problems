Node *insertInMiddle(Node *head, int x)
{
    if (!head)
    {
        return new Node(x);
    }
    Node *slow = head;
    Node *fast = head;
    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *temp = new Node(x);
    temp->next = slow->next;
    slow->next = temp;
    return head;
}