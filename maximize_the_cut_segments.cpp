int solve(int n, int x, int y, int z, vector<int> &dp)
{
    if (n == 0)
    {
        return 0;
    }
    if (n < 0)
    {
        return INT_MIN;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int seg1 = 1 + solve(n - x, x, y, z, dp);
    int seg2 = 1 + solve(n - y, x, y, z, dp);
    int seg3 = 1 + solve(n - z, x, y, z, dp);
    return dp[n] = max({seg1, seg2, seg3});
}
int maximizeTheCuts(int n, int x, int y, int z)
{
    vector<int> dp(n + 1, -1);
    int result = solve(n, x, y, z, dp);
    return result < 0 ? 0 : result;
}