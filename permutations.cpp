vector<vector<int>> res;
void solve(vector<int> &nums, vector<int> &tmp)
{
    if (tmp.size() == nums.size())
    {
        res.push_back(tmp);
        return;
    }
    unordered_set<int> st(tmp.begin(), tmp.end());
    for (int i = 0; i < nums.size(); i++)
    {
        if (st.find(nums[i]) == st.end())
        {
            tmp.push_back(nums[i]);
            solve(nums, tmp);
            tmp.pop_back();
        }
    }
}
vector<vector<int>> permute(vector<int> &nums)
{
    vector<int> tmp;
    solve(nums, tmp);
    return res;
}