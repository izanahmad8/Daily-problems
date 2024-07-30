void solve(int i, int j, int n, int m, vector<vector<int>> &grid, vector<int> &tmp, vector<vector<int>> &res)
{
    tmp.push_back(grid[i][j]);
    if (i + 1 < n)
        solve(i + 1, j, n, m, grid, tmp, res);
    if (j + 1 < m)
        solve(i, j + 1, n, m, grid, tmp, res);
    if (i == n - 1 && j == m - 1)
    {
        res.push_back(tmp);
    }
    tmp.pop_back();
}
vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid)
{
    vector<vector<int>> res;
    vector<int> tmp;
    solve(0, 0, n, m, grid, tmp, res);
    return res;
}