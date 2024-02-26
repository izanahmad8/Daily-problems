long long int count(int coins[], int N, int sum)
{
    vector<vector<long long int>> dp(N, vector<long long int>(sum + 1, -1));
    long long int ans = solve(coins, N - 1, sum, dp);
    return ans;
}
long long int solve(int coins[], int N, int sum, vector<vector<long long int>> &dp)
{
    if (sum == 0)
    {
        return 1;
    }
    if (N < 0)
    {
        return 0;
    }
    if (dp[N][sum] != -1)
    {
        return dp[N][sum];
    }
    long long int notake = solve(coins, N - 1, sum, dp);
    long long int take = 0;
    if (coins[N] <= sum)
    {
        take = solve(coins, N, sum - coins[N], dp);
    }
    return dp[N][sum] = take + notake;
}