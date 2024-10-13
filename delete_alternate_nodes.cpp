void deleteAlt(struct Node *head)
{
    Node *curr = head;
    while (curr && curr->next)
    {
        curr->next = curr->next->next;
        curr = curr->next;
    }
}