void solve(Node *root, int sum, int &ans)
{
    if (!root)
        return;
    sum = sum * 10 + root->data;
    if (!root->left && !root->right)
    {
        ans += sum;
        return;
    }
    solve(root->left, sum, ans);
    solve(root->right, sum, ans);
}
int treePathsSum(Node *root)
{
    int sum = 0;
    int ans = 0;
    solve(root, sum, ans);
    return ans;
}