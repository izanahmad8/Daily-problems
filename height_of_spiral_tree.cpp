int findTreeHeight(Node *root)
{
    if (!root)
        return 0;
    if (root->left && root->right && root->left->right == root && root->right->left == root)
    {
        return 1;
    }
    int l = findTreeHeight(root->left);
    int r = findTreeHeight(root->right);
    return 1 + max(l, r);
}