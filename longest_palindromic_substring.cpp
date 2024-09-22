bool check(int i, int j, string &s, vector<vector<int>> &dp)
{
    if (i > j)
    {
        return true;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    if (s[i] == s[j])
    {
        return dp[i][j] = check(i + 1, j - 1, s, dp);
    }
    return false;
}
string longestPalindrome(string s)
{
    int n = s.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (check(i, j, s, dp) && (j - i + 1) > ans.size())
            {
                ans = s.substr(i, j - i + 1);
            }
        }
    }
    return ans;
}