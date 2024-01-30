void solve(Node *root, vector<int> &ans, int depth)
{
    if (!root)
    {
        return;
    }
    if (ans.size() == depth)
    {
        ans.push_back(root->data);
    }
    solve(root->left, ans, depth + 1);
    solve(root->right, ans, depth + 1);
}
vector<int> leftView(Node *root)
{
    vector<int> ans;
    solve(root, ans, 0);
    return ans;
}