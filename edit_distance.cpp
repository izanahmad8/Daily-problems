int solve(string &s1, string &s2, int i, int j, vector<vector<int>> &dp)
{
    if (i == s1.size())
        return s2.size() - j;
    if (j == s2.size())
        return s1.size() - i;
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    int ans = INT_MAX;
    if (s1[i] != s2[j])
    {
        int a = 1 + solve(s1, s2, i + 1, j, dp);     // deletion
        int b = 1 + solve(s1, s2, i, j + 1, dp);     // insertion
        int c = 1 + solve(s1, s2, i + 1, j + 1, dp); // substitution
        ans = min({ans, a, b, c});
    }
    else
    {
        return dp[i][j] = solve(s1, s2, i + 1, j + 1, dp);
    }
    return dp[i][j] = ans;
}
int editDistance(string str1, string str2)
{
    int n = str1.size();
    int m = str2.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return solve(str1, str2, 0, 0, dp);
}