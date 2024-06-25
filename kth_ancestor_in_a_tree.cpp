void solve(Node *root, int node, vector<int> &ans, bool &f)
{
    if (!root)
        return;
    if (root->data == node)
    {
        f = true;
        return;
    }
    solve(root->left, node, ans, f);
    if (f)
    {
        ans.push_back(root->data);
        return;
    }
    solve(root->right, node, ans, f);
    if (f)
    {
        ans.push_back(root->data);
        return;
    }
}
int kthAncestor(Node *root, int k, int node)
{
    vector<int> ans;
    bool f = false;
    solve(root, node, ans, f);
    return ans.size() < k ? -1 : ans[k - 1];
}