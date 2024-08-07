int solve(int i, int j, vector<vector<int>> &M, int n, int m, vector<vector<int>> &dp)
{
    if (i >= n || j >= m || i < 0 || j < 0)
        return 0;
    if (dp[i][j] != -1)
        return dp[i][j];
    int dU = M[i][j] + solve(i - 1, j + 1, M, n, m, dp);
    int r = M[i][j] + solve(i, j + 1, M, n, m, dp);
    int dD = M[i][j] + solve(i + 1, j + 1, M, n, m, dp);
    return dp[i][j] = max({dU, r, dD});
}
int maxGold(int n, int m, vector<vector<int>> M)
{
    int maxi = 0;
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    for (int i = 0; i < n; i++)
    {
        maxi = max(maxi, solve(i, 0, M, n, m, dp));
    }
    return maxi;
}