vector<vector<int>> res;
void solve(vector<int> &nums, int idx, vector<int> &tmp)
{
    if (tmp.size() >= 2)
    {
        res.push_back(tmp);
    }
    unordered_set<int> st;
    for (int i = idx; i < nums.size(); i++)
    {
        if ((tmp.empty() || nums[i] >= tmp.back()) && (st.find(nums[i]) == st.end()))
        {
            tmp.push_back(nums[i]);
            solve(nums, i + 1, tmp);
            tmp.pop_back();
            st.insert(nums[i]);
        }
    }
}
vector<vector<int>> findSubsequences(vector<int> &nums)
{
    vector<int> tmp;
    solve(nums, 0, tmp);
    return res;
}