void solve(Node *root, int target, vector<int> &ans, bool &f)
{
    if (!root)
        return;
    if (root->data == target)
    {
        f = true;
        return;
    }
    if (!f)
    {
        solve(root->left, target, ans, f);
    }
    if (!f)
    {
        solve(root->right, target, ans, f);
    }
    if (f)
    {
        ans.push_back(root->data);
    }
}
vector<int> Ancestors(struct Node *root, int target)
{
    vector<int> ans;
    bool f = false;
    solve(root, target, ans, f);
    return ans;
}