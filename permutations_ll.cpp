vector<vector<int>> res;
void solve(unordered_map<int, int> &mp, vector<int> &tmp, int n)
{
    if (tmp.size() == n)
    {
        res.push_back(tmp);
        return;
    }
    for (auto [num, count] : mp)
    {
        if (count == 0)
        {
            continue;
        }
        tmp.push_back(num);
        mp[num]--;
        solve(mp, tmp, n);
        tmp.pop_back();
        mp[num]++;
    }
}
vector<vector<int>> permuteUnique(vector<int> &nums)
{
    vector<int> tmp;
    unordered_map<int, int> mp;
    int n = nums.size();
    for (auto i : nums)
    {
        mp[i]++;
    }
    solve(mp, tmp, n);
    return res;
}