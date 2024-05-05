map<int, int> mp;
void solve(Node *root, int level)
{
    if (root)
    {
        mp[level] += root->data;
        solve(root->left, level - 1);
        solve(root->right, level + 1);
        return;
    }
}
vector<int> verticalSum(Node *root)
{
    vector<int> ans;
    solve(root, 0);
    for (auto it : mp)
    {
        ans.push_back(it.second);
    }
    return ans;
}