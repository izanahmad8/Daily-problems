int solve(int i, int j, int n, int m, string &s1, string &s2, vector<vector<int>> &dp)
{
    if (i >= n || j >= m)
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int take = 0, exc1 = 0, exc2 = 0;
    if (s1[i] == s2[j])
    {
        take = 1 + solve(i + 1, j + 1, n, m, s1, s2, dp);
    }
    else
    {
        exc1 = solve(i + 1, j, n, m, s1, s2, dp);
        exc2 = solve(i, j + 1, n, m, s1, s2, dp);
    }
    return dp[i][j] = max(take, max(exc1, exc2));
}
int lcs(int n, int m, string str1, string str2)
{
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return solve(0, 0, n, m, str1, str2, dp);
}