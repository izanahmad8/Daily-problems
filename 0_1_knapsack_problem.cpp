int knapSack(int W, int wt[], int val[], int n)
{
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    return solve(W, wt, val, 0, n, dp);
}
int solve(int W, int *wt, int *val, int i, int n, vector<vector<int>> &dp)
{
    if (W <= 0 || i == n)
    {
        return 0;
    }
    if (dp[i][W] != -1)
    {
        return dp[i][W];
    }
    if (W >= wt[i])
    {
        return dp[i][W] = max(val[i] + solve(W - wt[i], wt, val, i + 1, n, dp), solve(W, wt, val, i + 1, n, dp));
    }
    else
    {
        return dp[i][W] = solve(W, wt, val, i + 1, n, dp);
    }
}