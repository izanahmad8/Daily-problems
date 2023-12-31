int isPossible(int N, int coins[])
{
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += coins[i];
    }
    vector<vector<int>> dp(N, vector<int>(sum + 1, -1));
    return solve(0, 0, coins, N, dp);
}
int solve(int i, int sum, int coins[], int N, vector<vector<int>> &dp)
{
    if (sum > 0 && (sum % 20 == 0 || sum % 24 == 0 || sum == 2024))
    {
        return 1;
    }
    if (i >= N)
    {
        return 0;
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    return solve(i + 1, sum + coins[i], coins, N, dp) || solve(i + 1, sum, coins, N, dp);
}