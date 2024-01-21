int perfectSum(int arr[], int n, int sum)
{
    long long int mod = 1e9 + 7;
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
    return solve(arr, 0, sum, n, dp, mod);
}
int solve(int arr[], int i, int sum, int n, vector<vector<int>> &dp, long long int mod)
{
    if (i == n)
    {
        if (sum == 0)
        {
            return 1;
        }
        return 0;
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    int take = 0;
    if (sum >= arr[i])
    {
        take = solve(arr, i + 1, sum - arr[i], n, dp, mod) % mod;
    }
    int notake = solve(arr, i + 1, sum, n, dp, mod) % mod;
    return dp[i][sum] = (take + notake) % mod;
}