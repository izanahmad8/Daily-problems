int solve(int m, int n, int i, int j, vector<vector<int>> &grid, vector<vector<int>> &dp)
{
    if (i >= m || j >= n)
    {
        return INT_MAX;
    }
    if (i == m - 1 && j == n - 1)
    {
        return grid[i][j];
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int right = solve(m, n, i, j + 1, grid, dp);
    int down = solve(m, n, i + 1, j, grid, dp);
    return dp[i][j] = grid[i][j] + min(right, down);
}
int minPathSum(vector<vector<int>> &grid)
{
    int m = grid.size();
    int n = grid[0].size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    return solve(m, n, 0, 0, grid, dp);
}