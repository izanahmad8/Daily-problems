int solve(int l, int r, string &s, vector<vector<int>> &dp)
{
    if (l == r)
    {
        return 1;
    }
    if (l > r)
    {
        return 0;
    }
    if (dp[l][r] != -1)
    {
        return dp[l][r];
    }
    int i = l + 1;
    while (i <= r && s[i] == s[l])
    {
        i++;
    }
    if (i == r + 1)
    {
        return 1;
    }
    int basic = 1 + solve(i, r, s, dp);
    int greed = INT_MAX;
    for (int j = i; j <= r; j++)
    {
        if (s[j] == s[l])
        {
            int take = solve(i, j - 1, s, dp) + solve(j, r, s, dp);
            greed = min(take, greed);
        }
    }
    return dp[l][r] = min(basic, greed);
}
int strangePrinter(string s)
{
    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return solve(0, n - 1, s, dp);
}