void solve(int s, int k, vector<int> &comb, vector<vector<int>> &res, int n)
{
    if (k == 0)
    {
        res.push_back(comb);
        return;
    }
    if (s > n)
        return;
    comb.push_back(s);
    solve(s + 1, k - 1, comb, res, n);
    comb.pop_back();
    solve(s + 1, k, comb, res, n);
}
vector<vector<int>> combine(int n, int k)
{
    vector<int> comb;
    vector<vector<int>> res;
    solve(1, k, comb, res, n);
    return res;
}