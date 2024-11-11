void solve(Node *root, int n, int &padosi)
{
    if (!root)
        return;
    solve(root->left, n, padosi);
    if (root->key <= n)
    {
        padosi = root->key;
    }
    solve(root->right, n, padosi);
}
int findMaxForN(Node *root, int n)
{
    int padosi = -1;
    solve(root, n, padosi);
    return padosi;
}