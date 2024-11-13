int intersectPoint(Node *head1, Node *head2)
{
    unordered_set<Node *> st;
    Node *temp = head1;
    while (temp)
    {
        st.insert(temp);
        temp = temp->next;
    }
    Node *curr = head2;
    while (curr)
    {
        if (st.find(curr) != st.end())
        {
            return curr->data;
        }
        curr = curr->next;
    }
    return -1;
}