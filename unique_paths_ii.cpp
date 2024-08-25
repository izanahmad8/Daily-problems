int solve(int m, int n, int i, int j, vector<vector<int>> &obstacleGrid, vector<vector<int>> &dp)
{
    if (i >= m || j >= n || obstacleGrid[i][j] == 1)
    {
        return 0;
    }
    if (i == m - 1 && j == n - 1)
    {
        return 1;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int right = solve(m, n, i, j + 1, obstacleGrid, dp);
    int down = solve(m, n, i + 1, j, obstacleGrid, dp);
    return dp[i][j] = right + down;
}
int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid)
{
    int m = obstacleGrid.size();
    int n = obstacleGrid[0].size();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    return solve(m, n, 0, 0, obstacleGrid, dp);
}