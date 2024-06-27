int solve(TreeNode *root, bool &f)
{
    if (!root)
        return 0;
    int l = solve(root->left, f);
    int r = solve(root->right, f);
    if (abs(l - r) > 1)
    {
        f = false;
    }
    return max(l, r) + 1;
}
bool isBalanced(TreeNode *root)
{
    if (!root)
        return true;
    bool f = true;
    solve(root, f);
    return f;
}