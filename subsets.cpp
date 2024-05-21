vector<vector<int>> subsets(vector<int> &nums)
{
    vector<vector<int>> res;
    vector<int> path;
    solve(nums, 0, path, res);
    return res;
}
void solve(vector<int> &nums, int index, vector<int> &path, vector<vector<int>> &res)
{
    res.push_back(path);
    for (int i = index; i < nums.size(); i++)
    {
        path.push_back(nums[i]);
        solve(nums, i + 1, path, res);
        path.pop_back();
    }
}