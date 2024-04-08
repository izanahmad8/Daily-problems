long long maximumAmount(int n, int arr[])
{
    vector<vector<long long>> dp(n + 1, vector<long long>(n + 1, -1));
    return solve(0, n - 1, arr, dp);
}
long long solve(int i, int j, int arr[], vector<vector<long long>> &dp)
{
    if (i > j)
        return 0;
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int take = arr[i] + min(solve(i + 2, j, arr, dp), solve(i + 1, j - 1, arr, dp));
    int no_take = arr[j] + min(solve(i, j - 2, arr, dp), solve(i + 1, j - 1, arr, dp));
    return dp[i][j] = max(take, no_take);
}