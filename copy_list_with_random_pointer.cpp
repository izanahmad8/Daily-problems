Node *copyRandomList(Node *head)
{
    if (!head)
        return NULL;
    unordered_map<Node *, Node *> mp;
    Node *curr = head;
    Node *prev = NULL;
    Node *newHead = NULL;
    while (curr)
    {
        Node *copy = new Node(curr->val);
        mp[curr] = copy;
        if (!newHead)
        {
            newHead = copy;
            prev = newHead;
        }
        else
        {
            prev->next = copy;
            prev = copy;
        }
        curr = curr->next;
    }
    curr = head;
    Node *newCurr = newHead;
    while (curr)
    {
        if (!curr->random)
        {
            newCurr->random = NULL;
        }
        else
        {
            newCurr->random = mp[curr->random];
        }
        curr = curr->next;
        newCurr = newCurr->next;
    }
    return newHead;
}