vector<vector<int>> res;
void solve(int ind, vector<int> &nums, vector<int> &temp)
{
    res.push_back(temp);
    for (int i = ind; i < nums.size(); i++)
    {
        if (i != ind && nums[i] == nums[i - 1])
        {
            continue;
        }
        temp.push_back(nums[i]);
        solve(i + 1, nums, temp);
        temp.pop_back();
    }
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
    vector<int> temp;
    sort(nums.begin(), nums.end());
    solve(0, nums, temp);
    return res;
}