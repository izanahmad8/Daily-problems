int solve(string &s, int i, int j, vector<vector<int>> &dp)
{
    if (i >= j)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (s[i] == s[j])
    {
        return dp[i][j] = solve(s, i + 1, j - 1, dp);
    }
    else
    {
        return dp[i][j] = 1 + min(solve(s, i + 1, j, dp), solve(s, i, j - 1, dp));
    }
}
int minDeletions(string s)
{
    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return solve(s, 0, n - 1, dp);
}