int solve(Node *root, int &k)
{
    if (!root)
        return -1;
    int left = solve(root->left, k);
    if (left != -1)
        return left;
    k--;
    if (k == 0)
        return root->data;
    return solve(root->right, k);
}
int kthSmallest(Node *root, int k)
{
    return solve(root, k);
}