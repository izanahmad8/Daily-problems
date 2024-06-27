int solve(TreeNode *root)
{
    if (!root)
        return 0;
    int l = solve(root->left);
    int r = solve(root->right);
    return max(l, r) + 1;
}
int maxDepth(TreeNode *root)
{
    return solve(root);
}