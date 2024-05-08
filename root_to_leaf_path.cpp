void solve(Node *root, vector<int> temp, vector<vector<int>> &ans)
{
    if (!root)
        return;
    temp.push_back(root->data);
    if (!root->left && !root->right)
    {
        ans.push_back(temp);
        return;
    }
    solve(root->left, temp, ans);
    solve(root->right, temp, ans);
}
vector<vector<int>> Paths(Node *root)
{
    vector<vector<int>> ans;
    vector<int> temp;
    solve(root, temp, ans);
    return ans;
}