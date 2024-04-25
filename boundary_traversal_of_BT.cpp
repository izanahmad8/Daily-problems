vector<int> boundary(Node *root)
{
    vector<int> ans;
    if (!root)
        return ans;
    ans.push_back(root->data);
    left(root->left, ans);
    leaf(root->left, ans);
    leaf(root->right, ans);
    right(root->right, ans);
    return ans;
}
void left(Node *root, vector<int> &ans)
{
    if (!root || (!root->left && !root->right))
        return;
    ans.push_back(root->data);
    if (root->left)
    {
        left(root->left, ans);
    }
    else
    {
        left(root->right, ans);
    }
}
void leaf(Node *root, vector<int> &ans)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        ans.push_back(root->data);
    }
    leaf(root->left, ans);
    leaf(root->right, ans);
}
void right(Node *root, vector<int> &ans)
{
    if (!root || (!root->left && !root->right))
        return;
    if (root->right)
    {
        right(root->right, ans);
    }
    else
    {
        right(root->left, ans);
    }
    ans.push_back(root->data);
}