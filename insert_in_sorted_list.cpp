Node *sortedInsert(struct Node *head, int data)
{
    Node *temp = head, *prev;
    while (temp != NULL && temp->data < data)
    {
        prev = temp;
        temp = temp->next;
    }
    Node *newnode = new Node(data);

    if (temp == head)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        prev->next = newnode;
        newnode->next = temp;
    }

    return head;
}