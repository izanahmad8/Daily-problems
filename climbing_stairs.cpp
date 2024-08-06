// bottom up approach
int climbStairs(int n)
{
    if (n <= 3)
        return n;
    vector<int> dp(n + 1, -1);
    dp[2] = 2;
    dp[3] = 3;
    for (int i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

// top down approach
int solve(int n, vector<int> &dp)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    return dp[n] = solve(n - 1, dp) + solve(n - 2, dp);
}
int climbStairs(int n)
{
    vector<int> dp(n + 1, -1);
    return solve(n, dp);
}