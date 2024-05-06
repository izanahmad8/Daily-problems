void solve(Node *node, vector<int> &ans)
{
    if (!node)
        return;
    if (node->left && !node->right)
    {
        ans.push_back(node->left->data);
    }
    if (node->right && !node->left)
    {
        ans.push_back(node->right->data);
    }
    solve(node->left, ans);
    solve(node->right, ans);
}
vector<int> noSibling(Node *node)
{
    vector<int> ans;
    solve(node, ans);
    if (ans.empty())
    {
        ans.push_back(-1);
    }
    sort(ans.begin(), ans.end());
    return ans;
}