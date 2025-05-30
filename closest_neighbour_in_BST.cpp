void solve(Node *root, int k, int &ans)
{
    if (!root)
        return;
    solve(root->left, k, ans);
    if (root->data <= k)
    {
        ans = root->data;
    }
    solve(root->right, k, ans);
}
int findMaxFork(Node *root, int k)
{
    int ans = -1;
    solve(root, k, ans);
    return ans;
}