int countNonLeafNodes(Node *root)
{
    int count = 0;
    solve(root, count);
    return count;
}
void solve(Node *root, int &count)
{
    if (!root)
        return;
    if (root->right || root->left)
    {
        count++;
    }
    solve(root->left, count);
    solve(root->right, count);
}