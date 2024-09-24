int solve(int n, int price[], vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int max_val = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        max_val = max(max_val, price[i - 1] + solve(n - i, price, dp));
    }
    return dp[n] = max_val;
}
int cutRod(int price[], int n)
{
    vector<int> dp(n + 1, -1);
    return solve(n, price, dp);
}