bool detectLoop(Node *head)
{
    Node *prev = head, *curr = head;
    while (curr != NULL && curr->next != NULL)
    {
        prev = prev->next;
        curr = curr->next->next;
        if (prev == curr)
        {
            return true;
        }
    }
    return false;
}