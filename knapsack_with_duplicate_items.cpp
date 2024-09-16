int solve(int i, int N, int W, int val[], int wt[], vector<vector<int>> &dp)
{
    if (W == 0)
    {
        return 0;
    }
    if (W < 0 || i >= N)
    {
        return INT_MIN;
    }
    if (dp[i][W] != -1)
    {
        return dp[i][W];
    }
    int take = 0;
    if (W >= wt[i])
    {
        take = val[i] + solve(i, N, W - wt[i], val, wt, dp);
    }
    int no_take = solve(i + 1, N, W, val, wt, dp);
    return dp[i][W] = max(take, no_take);
}
int knapSack(int N, int W, int val[], int wt[])
{
    vector<vector<int>> dp(N + 1, vector<int>(W + 1, -1));
    return solve(0, N, W, val, wt, dp);
}