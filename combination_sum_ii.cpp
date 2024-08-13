void solve(vector<int> &candidates, int ind, int sum, vector<int> &tmp, vector<vector<int>> &res, int target)
{
    if (sum == target)
    {
        res.push_back(tmp);
        return;
    }
    if (ind > candidates.size() || sum > target)
    {
        return;
    }
    for (int i = ind; i < candidates.size(); i++)
    {
        if (i > ind && candidates[i] == candidates[i - 1])
        {
            continue;
        }
        tmp.push_back(candidates[i]);
        solve(candidates, i + 1, sum + candidates[i], tmp, res, target);
        tmp.pop_back();
    }
}
vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    vector<vector<int>> res;
    vector<int> tmp;
    sort(candidates.begin(), candidates.end());
    solve(candidates, 0, 0, tmp, res, target);
    return res;
}