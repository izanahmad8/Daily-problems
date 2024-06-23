int count = 0;
int ans = -1;
void solve(Node *root, int K)
{
    if (!root)
        return;
    solve(root->right, K);
    count++;
    if (count == K)
    {
        ans = root->data;
    }
    solve(root->left, K);
}
int kthLargest(Node *root, int K)
{
    solve(root, K);
    return ans;
}