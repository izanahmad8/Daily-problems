void solve(Node *root, int &count)
{
    if (!root)
        return;
    solve(root->left, count);
    count++;
    solve(root->right, count);
}
int getSize(Node *node)
{
    int count = 0;
    solve(node, count);
    return count;
}