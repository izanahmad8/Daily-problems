void solve(TreeNode *root, vector<string> &ans, string res)
{
    if (!root)
        return;
    res += to_string(root->val) + "->";
    if (!root->left && !root->right)
    {
        res.pop_back();
        res.pop_back();
        ans.push_back(res);
        res.pop_back();
    }
    solve(root->left, ans, res);
    solve(root->right, ans, res);
}
vector<string> binaryTreePaths(TreeNode *root)
{
    vector<string> ans;
    solve(root, ans, "");
    return ans;
}