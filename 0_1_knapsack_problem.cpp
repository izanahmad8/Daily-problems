int solve(int W, vector<int> &wt, vector<int> &val, int i, vector<vector<int>> &dp)
{
    if (W <= 0 || i >= wt.size())
    {
        return 0;
    }
    if (dp[i][W] != -1)
    {
        return dp[i][W];
    }
    int take = 0;
    if (W >= wt[i])
    {
        take = val[i] + solve(W - wt[i], wt, val, i + 1, dp);
    }
    int noTake = solve(W, wt, val, i + 1, dp);
    return dp[i][W] = max(take, noTake);
}
int knapSack(int W, vector<int> &wt, vector<int> &val)
{
    int n = wt.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, -1));
    return solve(W, wt, val, 0, dp);
}