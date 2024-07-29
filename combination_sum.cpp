void solve(vector<int> &candidates, int ind, int sum, vector<int> &tmp, vector<vector<int>> &res, int target)
{
    if (sum == target)
    {
        res.push_back(tmp);
        return;
    }
    if (ind >= candidates.size() || sum > target)
    {
        return;
    }
    tmp.push_back(candidates[ind]);
    solve(candidates, ind, sum + candidates[ind], tmp, res, target);
    tmp.pop_back();
    solve(candidates, ind + 1, sum, tmp, res, target);
}
vector<vector<int>> combinationSum(vector<int> &candidates, int target)
{
    vector<vector<int>> res;
    vector<int> tmp;
    solve(candidates, 0, 0, tmp, res, target);
    return res;
}