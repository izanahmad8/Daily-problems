Node *reverse(Node *head)
{
    Node *prev = NULL;
    Node *curr = head;
    while (curr != NULL)
    {
        Node *forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }
    return prev;
}
bool isPalindrome(Node *head)
{
    Node *slow = head;
    Node *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    Node *last = reverse(slow);
    while (last)
    {
        if (head->data != last->data)
        {
            return false;
        }
        head = head->next;
        last = last->next;
    }
    return true;
}