Node *merge(Node *root, Node *head)
{
    if (!head)
        return root;
    if (!root)
        return head;
    Node *res;
    if (root->data < head->data)
    {
        res = root;
        res->bottom = merge(res->bottom, head);
    }
    else
    {
        res = head;
        res->bottom = merge(root, res->bottom);
    }
    return res;
}
Node *flatten(Node *root)
{
    if (!root)
        return NULL;
    Node *head = flatten(root->next);
    return merge(root, head);
}