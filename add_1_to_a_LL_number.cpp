Node *reverse(Node *head)
{
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
Node *addOne(Node *head)
{
    head = reverse(head);
    Node *tmp = head;
    int carry = 1;
    while (tmp)
    {
        if (tmp->data < 9)
        {
            carry = 0;
            tmp->data = tmp->data + 1;
            break;
        }
        else
        {
            tmp->data = 0;
        }
        tmp = tmp->next;
    }
    head = reverse(head);
    if (carry)
    {
        Node *newNode = new Node(1);
        newNode->next = head;
        head = newNode;
    }
    return head;
}