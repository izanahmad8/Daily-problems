int solve(vector<int> &coins, int i, int sum, vector<vector<int>> &dp)
{
    if (sum == 0)
    {
        return 0;
    }
    if (sum < 0 || i >= coins.size())
    {
        return INT_MAX / 2;
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }
    int take = 1 + solve(coins, i, sum - coins[i], dp);
    int no_take = solve(coins, i + 1, sum, dp);
    return dp[i][sum] = min(take, no_take);
}
int minCoins(vector<int> &coins, int sum)
{
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(sum + 1, -1));
    int res = solve(coins, 0, sum, dp);
    return res == INT_MAX / 2 ? -1 : res;
}