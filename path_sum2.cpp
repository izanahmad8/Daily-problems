vector<vector<int>> pathSum(TreeNode *root, int targetSum)
{
    vector<vector<int>> ans;
    vector<int> temp;
    int sum = 0;
    solve(root, targetSum, sum, temp, ans);
    return ans;
}
void solve(TreeNode *root, int targetSum, int sum, vector<int> temp, vector<vector<int>> &ans)
{
    if (!root)
    {
        return;
    }
    sum += root->val;
    temp.push_back(root->val);
    if (!root->left && !root->right)
    {
        if (targetSum == sum)
        {
            ans.push_back(temp);
        }
        else
        {
            return;
        }
    }
    solve(root->left, targetSum, sum, temp, ans);
    solve(root->right, targetSum, sum, temp, ans);
}