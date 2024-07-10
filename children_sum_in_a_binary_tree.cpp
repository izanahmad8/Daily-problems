int solve(Node *root)
{
    if (!root || !root->left && !root->right)
        return 1;
    int sum = 0;
    if (root->left)
    {
        sum += root->left->data;
    }
    if (root->right)
    {
        sum += root->right->data;
    }
    return root->data == sum && solve(root->left) && solve(root->right);
}
int isSumProperty(Node *root)
{
    return solve(root);
}