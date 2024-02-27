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

// leetcode

int coinChange(vector<int> &coins, int amount)
{
    int n = coins.size();
    vector<vector<int>> dp(n + 1, vector<int>(amount + 1, -1));
    int ans = solve(coins, n, amount, dp);
    if (ans == INT_MAX - 1)
    {
        return -1;
    }
    else
    {
        return ans;
    }
}
int solve(vector<int> &coins, int n, int amount, vector<vector<int>> &dp)
{
    if (amount == 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return INT_MAX - 1;
    }
    if (dp[n][amount] != -1)
    {
        return dp[n][amount];
    }
    if (coins[n - 1] <= amount)
    {
        return dp[n][amount] = min(1 + solve(coins, n, amount - coins[n - 1], dp), solve(coins, n - 1, amount, dp));
    }
    else
    {
        return dp[n][amount] = solve(coins, n - 1, amount, dp);
    }
}