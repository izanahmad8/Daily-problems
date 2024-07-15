int solve(Node *node)
{
    if (!node)
        return 0;
    int l = solve(node->left);
    int r = solve(node->right);
    int sum = node->data;
    node->data = l + r;
    return node->data + sum;
}
void toSumTree(Node *node)
{
    solve(node);
}