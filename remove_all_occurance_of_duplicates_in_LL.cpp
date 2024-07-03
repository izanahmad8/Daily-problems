Node *removeAllDuplicates(struct Node *head)
{
    Node *dummy = new Node(0);
    dummy->next = head;
    Node *p0 = dummy;
    Node *p1 = head;
    while (p1)
    {
        Node *p2 = p1->next;
        bool duplicate = false;
        while (p2 && p1->data == p2->data)
        {
            duplicate = true;
            p2 = p2->next;
        }
        if (duplicate)
        {
            p0->next = p2;
        }
        else
        {
            p0 = p1;
        }
        p1 = p2;
    }
    return dummy->next;
}