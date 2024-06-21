bool f = true;
int check(Node *root)
{
    if (!root)
        return 0;
    int l = check(root->left);
    int r = check(root->right);
    if (abs(l - r) > 1)
    {
        f = false;
    }
    return max(l, r) + 1;
}
bool isBalanced(Node *root)
{
    check(root);
    return f;
}