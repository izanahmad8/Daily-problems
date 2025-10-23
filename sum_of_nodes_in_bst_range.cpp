int sum = 0;
void solve(Node *root, int l, int r)
{
    if (!root)
        return;
    solve(root->left, l, r);
    if (root->data >= l && root->data <= r)
        sum += root->data;
    solve(root->right, l, r);
}
int nodeSum(Node *root, int l, int r)
{
    solve(root, l, r);
    return sum;
}