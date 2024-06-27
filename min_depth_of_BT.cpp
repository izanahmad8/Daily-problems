int solve(Node *root)
{
    if (!root)
        return 0;
    if (!root->left && !root->right)
        return 1;
    if (!root->left)
        return solve(root->right) + 1;
    if (!root->right)
        return solve(root->left) + 1;
    int l = solve(root->left);
    int r = solve(root->right);
    return min(l, r) + 1;
}
int minDepth(Node *root)
{
    return solve(root);
}