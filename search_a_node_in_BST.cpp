bool search(Node *root, int x)
{
    if (!root)
    {
        return false;
    }
    if (x == root->data)
    {
        return true;
    }
    if (x > root->data)
    {
        return search(root->right, x);
    }
    else
    {
        return search(root->left, x);
    }
}