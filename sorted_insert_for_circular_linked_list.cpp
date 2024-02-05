Node *sortedInsert(Node *head, int data)
{
    Node *ptr = head;
    Node *new_node = new Node(data);
    if (head == NULL)
    {
        new_node->next = new_node;
        return new_node;
    }
    while (ptr->next != head && ptr->next->data < data)
    {
        ptr = ptr->next;
    }
    new_node->next = ptr->next;
    ptr->next = new_node;
    if (head->next->data < head->data)
    {
        swap(head->next->data, head->data);
    }
    return head;
}