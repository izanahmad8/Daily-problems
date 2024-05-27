int longestSubseq(int n, vector<int> &a)
{
    vector<vector<int>> dp(n, vector<int>(n + 1, -1));
    return solve(-1, 0, a, dp);
}
int solve(int prev, int curr, vector<int> &a, vector<vector<int>> &dp)
{
    if (curr >= a.size())
        return 0;
    if (dp[curr][prev + 1] != -1)
    {
        return dp[curr][prev + 1];
    }
    int take = 0;
    if (abs(a[prev] - a[curr]) == 1 || prev == -1)
    {
        take = 1 + solve(curr, curr + 1, a, dp);
    }
    int notake = solve(prev, curr + 1, a, dp);
    return dp[curr][prev + 1] = max(take, notake);
}