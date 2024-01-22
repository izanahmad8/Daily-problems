vector<vector<int>> printPaths(Node *root, int sum)
{
    vector<vector<int>> ans;
    vector<int> temp;
    int tempSum = 0;
    solve(root, tempSum, sum, temp, ans);
    return ans;
}
void solve(Node *root, int tempSum, int sum, vector<int> &temp, vector<vector<int>> &ans)
{
    if (!root)
    {
        return;
    }
    temp.push_back(root->key);
    if (tempSum + root->key == sum)
    {
        ans.push_back(temp);
    }
    solve(root->left, tempSum + root->key, sum, temp, ans);
    solve(root->right, tempSum + root->key, sum, temp, ans);
    temp.pop_back();
}