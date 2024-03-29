long long findMaxScore(Node *root)
{
    if (root == NULL)
    {
        return 1;
    }
    return (long long)root->data * max(findMaxScore(root->left), findMaxScore(root->right));
}