Node *sortedInsert(Node *head, int data)
{
    Node *ptr = head;
    Node *newNode = new Node(data);
    if (!head)
    {
        newNode->next = newNode;
        return newNode;
    }
    while (ptr->next != head && ptr->next->data < data)
    {
        ptr = ptr->next;
    }
    newNode->next = ptr->next;
    ptr->next = newNode;
    if (head->next->data < head->data)
    {
        swap(head->next->data, head->data);
    }
    return head;
}