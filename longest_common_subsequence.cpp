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

// bottom up approach - leetcode
int longestCommonSubsequence(string text1, string text2)
{
    int n = text1.size();
    int m = text2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (text1[i - 1] == text2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    return dp[n][m];
}