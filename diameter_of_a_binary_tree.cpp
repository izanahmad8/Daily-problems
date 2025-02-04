int solve(Node *root, int &res)
{
    if (!root)
        return 0;
    int lH = solve(root->left, res);
    int rH = solve(root->right, res);
    res = max(res, lH + rH);
    return 1 + max(lH, rH);
}
int diameter(Node *root)
{
    int res = 0;
    solve(root, res);
    return res;
}