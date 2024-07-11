bool chk = false;
void solve(Node *root, int s, int sum)
{
    if (!root)
        return;
    sum += root->data;
    if (!root->left && !root->right && sum == s)
    {
        chk = true;
        return;
    }
    solve(root->left, s, sum);
    solve(root->right, s, sum);
}
bool hasPathSum(Node *root, int s)
{
    int sum = 0;
    solve(root, s, sum);
    return chk;
}