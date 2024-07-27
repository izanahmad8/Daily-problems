vector<vector<int>> res;
void solve(int i, vector<int> &a, vector<int> &sub)
{
    if (i >= a.size())
    {
        res.push_back(sub);
        return;
    }
    sub.push_back(a[i]);
    solve(i + 1, a, sub);

    sub.pop_back();
    solve(i + 1, a, sub);
}
vector<vector<int>> subsets(vector<int> &a)
{
    vector<int> sub;
    solve(0, a, sub);
    sort(res.begin(), res.end());
    return res;
}