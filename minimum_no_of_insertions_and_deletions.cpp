int solve(int i, int j, string &s1, string &s2, int n, int m, vector<vector<int>> &dp)
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
        take = 1 + solve(i + 1, j + 1, s1, s2, n, m, dp);
    }
    else
    {
        exc1 = solve(i + 1, j, s1, s2, n, m, dp);
        exc2 = solve(i, j + 1, s1, s2, n, m, dp);
    }
    return dp[i][j] = max({take, exc1, exc2});
}
int minOperations(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    int lcs = solve(0, 0, str1, str2, n, m, dp);
    return n - lcs + m - lcs;
}