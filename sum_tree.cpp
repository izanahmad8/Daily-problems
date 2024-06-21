bool f = true;
int solve(Node *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
    {
        return root->data;
    }
    int l = solve(root->left);
    int r = solve(root->right);
    if (l + r != root->data)
        f = false;
    return l + r + root->data;
}
bool isSumTree(Node *root)
{
    solve(root);
    return f;
}