vector<Node *> alternatingSplitList(struct Node *head)
{
    vector<Node *> res;
    Node *curr = head;
    Node *forw = head->next;
    res.push_back(curr);
    res.push_back(forw);
    while (curr && forw)
    {
        curr->next = forw->next;
        curr = forw->next;
        if (forw->next)
        {
            forw->next = forw->next->next;
            forw = forw->next;
        }
    }
    return res;
}