Node *RemoveHalfNodes(Node *root)
{
    if (!root)
    {
        return NULL;
    }
    root->left = RemoveHalfNodes(root->left);
    root->right = RemoveHalfNodes(root->right);
    if (!root->right && root->left)
    {
        return root->left;
    }
    if (!root->left && root->right)
    {
        return root->right;
    }
    return root;
}