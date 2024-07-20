int solve(Node *root, int &sum)
{
    if (!root)
        return 0;
    int l = solve(root->left, sum);
    int r = solve(root->right, sum);
    sum += abs(l - r);
    return root->data + l + r;
}
int tiltTree(Node *root)
{
    int sum = 0;
    solve(root, sum);
    return sum;
}