int maxi = INT_MIN;
int mini = INT_MAX;
int findMax(Node *root)
{
    if (!root)
        return maxi;
    maxi = max(root->data, maxi);
    findMax(root->left);
    findMax(root->right);
}
int findMin(Node *root)
{
    if (!root)
        return mini;
    mini = min(root->data, mini);
    findMin(root->left);
    findMin(root->right);
}