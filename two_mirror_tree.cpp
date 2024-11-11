bool check(Node *a, Node *b)
{
    if (!a && !b)
        return true;
    if (!a || !b)
        return false;
    return (a->data == b->data) && check(a->left, b->right) && check(a->right, b->left);
}
int areMirror(Node *a, Node *b)
{
    return check(a, b);
}