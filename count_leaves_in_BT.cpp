void solve(Node *root, int &count)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        count++;
    }
    solve(root->left, count);
    solve(root->right, count);
}
int countLeaves(Node *root)
{
    int count = 0;
    solve(root, count);
    return count;
}